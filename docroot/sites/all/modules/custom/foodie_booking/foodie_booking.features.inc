<?php
/**
 * @file
 * foodie_booking.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function foodie_booking_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function foodie_booking_eck_bundle_info() {
  $items = array(
  'booking_catering' => array(
  'machine_name' => 'booking_catering',
  'entity_type' => 'booking',
  'name' => 'catering',
  'label' => 'catering',
),
  'booking_restaurant' => array(
  'machine_name' => 'booking_restaurant',
  'entity_type' => 'booking',
  'name' => 'restaurant',
  'label' => 'restaurant',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function foodie_booking_eck_entity_type_info() {
$items = array(
       'booking' => array(
  'name' => 'booking',
  'label' => 'booking',
  'properties' => array(
    'title' => array(
      'label' => 'Title',
      'type' => 'text',
      'behavior' => 'title',
    ),
    'uid' => array(
      'label' => 'Author',
      'type' => 'integer',
      'behavior' => 'author',
    ),
    'created' => array(
      'label' => 'Created',
      'type' => 'integer',
      'behavior' => 'created',
    ),
  ),
),
  );
  return $items;
}
