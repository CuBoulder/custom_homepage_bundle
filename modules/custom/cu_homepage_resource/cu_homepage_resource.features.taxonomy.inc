<?php
/**
 * @file
 * cu_homepage_resource.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cu_homepage_resource_taxonomy_default_vocabularies() {
  return array(
    'resource_category' => array(
      'name' => 'Resource Category',
      'machine_name' => 'resource_category',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'resource_sub_category' => array(
      'name' => 'Resource Sub Category',
      'machine_name' => 'resource_sub_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
