<?php
/**
 * @file
 * foodie_seating.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function foodie_seating_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function foodie_seating_eck_bundle_info() {
  $items = array(
  'seating_bar' => array(
  'machine_name' => 'seating_bar',
  'entity_type' => 'seating',
  'name' => 'bar',
  'label' => 'bar',
),
  'seating_table' => array(
  'machine_name' => 'seating_table',
  'entity_type' => 'seating',
  'name' => 'table',
  'label' => 'table',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function foodie_seating_eck_entity_type_info() {
$items = array(
       'seating' => array(
  'name' => 'seating',
  'label' => 'seating',
  'properties' => array(
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
    'title' => array(
      'label' => 'Title',
      'type' => 'text',
      'behavior' => 'title',
    ),
  ),
),
  );
  return $items;
}
