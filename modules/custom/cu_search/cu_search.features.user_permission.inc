<?php
/**
 * @file
 * cu_search.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cu_search_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access_google_appliance_content'.
  $permissions['access_google_appliance_content'] = array(
    'name' => 'access_google_appliance_content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
      'site_owner' => 'site_owner',
    ),
    'module' => 'google_appliance',
  );

  // Exported permission: 'administer_google_appliance'.
  $permissions['administer_google_appliance'] = array(
    'name' => 'administer_google_appliance',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'google_appliance',
  );

  // Exported permission: 'view_cu_search_results'.
  $permissions['view_cu_search_results'] = array(
    'name' => 'view_cu_search_results',
    'roles' => array(),
    'module' => 'cu_search',
  );

  return $permissions;
}
