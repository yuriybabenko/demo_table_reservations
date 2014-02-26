<?php

/**
 * Menu calback for /front
 * 
 * @return [type] [description]
 */
function foodie_core_front_page() {
  $output = '';

  return $output;
}

/**
 * Menu calback for /reports
 * 
 * @return [type] [description]
 */
function foodie_core_reports_page() {
  // sum the total number of reserved seats in the system, and multiply
  // by the $30 per person; this will include both table and bar reservations
  // 
  // EntityFieldQuery is slow and shouldn't be used
  // for this "global" calculation
    $amount = db_query("
      SELECT      (SUM(np.field_num_people_value) * 30) AS amount
      FROM        eck_booking eb
      INNER JOIN  field_data_field_num_people np
        ON        np.entity_type = 'booking'
        AND       np.bundle = eb.type
        AND       np.deleted = 0
        AND       np.entity_id = eb.id
      WHERE       eb.type = 'restaurant'
    ")->fetchField();

    $output = '<h2>' . t('Total earnings projection: $!amount', array(
      '!amount' => $amount,
    )) . '</h2>';

  // show the number of reservations that were denied
    $output .= '<h2>' . t('Number of denied reservations: !count', array(
      '!count' => variable_get('foodie_booking_reservation_denial', 0),
    )) . '</h2>';

  // show the average number of reserved tables per hour for the next day;
  // build all available seating
    $seating_bank = array(
      'table' => array(),
      'bar' => array(),
    );

    // track the total number of seating
    // $total_seating = 0;

    foreach (array_keys($seating_bank) as $seating_type) {
      $query = new Foodie\EFQ();
      $query->entityCondition('entity_type', 'seating')
        ->entityCondition('bundle', $seating_type);

      if ($result = $query->execute()) {
        $seating_bank[$seating_type] = _build_seat_bank(array_keys($result['seating']));
        
        // $total_seating += _count_grandchildren($seating_bank[$seating_type]);
      }
    }

  // pull up reservations for next day
    $now  = new DateTime();

    $tomorrow = clone $now;
    $tomorrow->modify('+1 day');

    $date_lower = new DateTime();
    $date_lower->setTimestamp(floor_timestamp($tomorrow->getTimestamp()));

    $date_upper = new DateTime();
    $date_upper->setTimestamp(ceil_timestamp($tomorrow->getTimestamp()));

    $query = new Foodie\EFQ();
    $query->entityCondition('entity_type', 'booking')
      ->entityCondition('bundle', 'restaurant')
      ->fieldCondition('field_date', 'value', $date_lower->getTimestamp(), '>=')
      ->fieldCondition('field_date', 'value', $date_upper->getTimestamp(), '<=')
      ->fieldOrderBy('field_date', 'value', 'ASC');

  // build the reserved table & bar seating
    $all_bookings = array();

    if ($result = $query->execute()) {
      $bookings = entity_load('booking', array_keys($result['booking']));

      foreach ($bookings as $booking) {
        $wrapper = entity_metadata_wrapper('booking', $booking);
        $seating_type = $wrapper->field_seating_type->value();

        $booking_date = new DateTime();
        $booking_date->setTimestamp($wrapper->field_date->value());
        $booking_hour = $booking_date->format('G');

        $all_bookings[$seating_type][$booking_hour][] = $booking;
      }
    }

  // figure out the number of reserved tables
    // time periods during which reservations can exist, mapped to the number
    // of reserved seating during that time period
    $time_seating = array_fill(17, 5, 0);

    foreach (array_keys($time_seating) as $hour) {
      foreach ($all_bookings as $seating_type => $data) {
        if (isset($data[$hour])) {
          $seats_copy = $seating_bank[$seating_type];
          $original_seat_total = _count_grandchildren($seats_copy);

          _remove_reserved_seating($seats_copy, $data[$hour]);

          $time_seating[$hour] += ($original_seat_total - _count_grandchildren($seats_copy));
        }
      }
    }

  // calculate the day's average
    $average = array_sum($time_seating) / sizeof($time_seating);

    $output .= '<h2>' . t('Average number of reserved tables (per hour, for !date): !average', array(
      '!date' => $date_lower->format('F j, Y'),
      '!average' => $average,
    )) . '</h2>';

  return $output;
}