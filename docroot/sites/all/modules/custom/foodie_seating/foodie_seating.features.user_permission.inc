<?php
/**
 * @file
 * foodie_seating.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function foodie_seating_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck add seating bar entities'.
  $permissions['eck add seating bar entities'] = array(
    'name' => 'eck add seating bar entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add seating bundles'.
  $permissions['eck add seating bundles'] = array(
    'name' => 'eck add seating bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add seating table entities'.
  $permissions['eck add seating table entities'] = array(
    'name' => 'eck add seating table entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer seating bar entities'.
  $permissions['eck administer seating bar entities'] = array(
    'name' => 'eck administer seating bar entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer seating bundles'.
  $permissions['eck administer seating bundles'] = array(
    'name' => 'eck administer seating bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer seating table entities'.
  $permissions['eck administer seating table entities'] = array(
    'name' => 'eck administer seating table entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete seating bar entities'.
  $permissions['eck delete seating bar entities'] = array(
    'name' => 'eck delete seating bar entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete seating bundles'.
  $permissions['eck delete seating bundles'] = array(
    'name' => 'eck delete seating bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete seating table entities'.
  $permissions['eck delete seating table entities'] = array(
    'name' => 'eck delete seating table entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit seating bar entities'.
  $permissions['eck edit seating bar entities'] = array(
    'name' => 'eck edit seating bar entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit seating bundles'.
  $permissions['eck edit seating bundles'] = array(
    'name' => 'eck edit seating bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit seating table entities'.
  $permissions['eck edit seating table entities'] = array(
    'name' => 'eck edit seating table entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list seating bar entities'.
  $permissions['eck list seating bar entities'] = array(
    'name' => 'eck list seating bar entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list seating bundles'.
  $permissions['eck list seating bundles'] = array(
    'name' => 'eck list seating bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list seating table entities'.
  $permissions['eck list seating table entities'] = array(
    'name' => 'eck list seating table entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view seating bar entities'.
  $permissions['eck view seating bar entities'] = array(
    'name' => 'eck view seating bar entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view seating table entities'.
  $permissions['eck view seating table entities'] = array(
    'name' => 'eck view seating table entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'manage seating properties'.
  $permissions['manage seating properties'] = array(
    'name' => 'manage seating properties',
    'roles' => array(),
    'module' => 'eck',
  );

  return $permissions;
}
