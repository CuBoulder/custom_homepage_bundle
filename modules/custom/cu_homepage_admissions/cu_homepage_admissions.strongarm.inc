<?php
/**
 * @file
 * cu_homepage_admissions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cu_homepage_admissions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__admission_event';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'blogger' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'grid' => array(
        'custom_settings' => FALSE,
      ),
      'promo' => array(
        'custom_settings' => FALSE,
      ),
      'sidebar' => array(
        'custom_settings' => FALSE,
      ),
      'table' => array(
        'custom_settings' => FALSE,
      ),
      'title' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '3',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'redirect' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__admission_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_admission_event';
  $strongarm->value = array();
  $export['menu_options_admission_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_admission_event';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_admission_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_admission_event';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_admission_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_admission_event';
  $strongarm->value = '1';
  $export['node_preview_admission_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_admission_event';
  $strongarm->value = 0;
  $export['node_submitted_admission_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_admission_event_pattern';
  $strongarm->value = 'admissions/event/[node:title]';
  $export['pathauto_node_admission_event_pattern'] = $strongarm;

  return $export;
}
