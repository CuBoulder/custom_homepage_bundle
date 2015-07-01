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
  );
}
