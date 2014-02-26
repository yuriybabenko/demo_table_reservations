<?php
/**
 * @file
 * foodie_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function foodie_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Front page.';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'foodie_booking-make_restaurant_reservation' => array(
          'module' => 'foodie_booking',
          'delta' => 'make_restaurant_reservation',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-9e8e55f7641702c5d909458cf647fc9e' => array(
          'module' => 'views',
          'delta' => '9e8e55f7641702c5d909458cf647fc9e',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-seating-seating_options' => array(
          'module' => 'views',
          'delta' => 'seating-seating_options',
          'region' => 'content',
          'weight' => '-8',
        ),
        'menu-menu-site-management' => array(
          'module' => 'menu',
          'delta' => 'menu-site-management',
          'region' => 'help',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front page.');
  $export['front'] = $context;

  return $export;
}
