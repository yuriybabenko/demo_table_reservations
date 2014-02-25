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
