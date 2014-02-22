<?php
/**
 * @file
 * foodie_seating.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function foodie_seating_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'seating-table-field_num_seats'
  $field_instances['seating-table-field_num_seats'] = array(
    'bundle' => 'table',
    'default_value' => array(
      0 => array(
        'value' => 4,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'seating',
    'field_name' => 'field_num_seats',
    'label' => 'Number of Seats',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'unique' => 0,
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Number of Seats');

  return $field_instances;
}
