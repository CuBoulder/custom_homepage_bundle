<?php
/**
 * @file
 * cu_image_styles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cu_image_styles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'focal_point_default_method';
  $strongarm->value = '';
  $export['focal_point_default_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'focal_point_enabled_for';
  $strongarm->value = array(
    'image' => 'image',
    'media' => 'media',
  );
  $export['focal_point_enabled_for'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'focal_point_test_drive_focal_point';
  $strongarm->value = '62,16';
  $export['focal_point_test_drive_focal_point'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'focal_point_test_drive_image';
  $strongarm->value = '156';
  $export['focal_point_test_drive_image'] = $strongarm;

  return $export;
}
