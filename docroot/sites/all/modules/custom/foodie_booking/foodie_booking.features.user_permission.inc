<?php
/**
 * @file
 * foodie_booking.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function foodie_booking_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck add booking bundles'.
  $permissions['eck add booking bundles'] = array(
    'name' => 'eck add booking bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add booking catering entities'.
  $permissions['eck add booking catering entities'] = array(
    'name' => 'eck add booking catering entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add booking restaurant entities'.
  $permissions['eck add booking restaurant entities'] = array(
    'name' => 'eck add booking restaurant entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer booking bundles'.
  $permissions['eck administer booking bundles'] = array(
    'name' => 'eck administer booking bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer booking catering entities'.
  $permissions['eck administer booking catering entities'] = array(
    'name' => 'eck administer booking catering entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer booking restaurant entities'.
  $permissions['eck administer booking restaurant entities'] = array(
    'name' => 'eck administer booking restaurant entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete booking bundles'.
  $permissions['eck delete booking bundles'] = array(
    'name' => 'eck delete booking bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete booking catering entities'.
  $permissions['eck delete booking catering entities'] = array(
    'name' => 'eck delete booking catering entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete booking restaurant entities'.
  $permissions['eck delete booking restaurant entities'] = array(
    'name' => 'eck delete booking restaurant entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit booking bundles'.
  $permissions['eck edit booking bundles'] = array(
    'name' => 'eck edit booking bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit booking catering entities'.
  $permissions['eck edit booking catering entities'] = array(
    'name' => 'eck edit booking catering entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit booking restaurant entities'.
  $permissions['eck edit booking restaurant entities'] = array(
    'name' => 'eck edit booking restaurant entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list booking bundles'.
  $permissions['eck list booking bundles'] = array(
    'name' => 'eck list booking bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list booking catering entities'.
  $permissions['eck list booking catering entities'] = array(
    'name' => 'eck list booking catering entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list booking restaurant entities'.
  $permissions['eck list booking restaurant entities'] = array(
    'name' => 'eck list booking restaurant entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view booking catering entities'.
  $permissions['eck view booking catering entities'] = array(
    'name' => 'eck view booking catering entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view booking restaurant entities'.
  $permissions['eck view booking restaurant entities'] = array(
    'name' => 'eck view booking restaurant entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'manage booking properties'.
  $permissions['manage booking properties'] = array(
    'name' => 'manage booking properties',
    'roles' => array(),
    'module' => 'eck',
  );

  return $permissions;
}
