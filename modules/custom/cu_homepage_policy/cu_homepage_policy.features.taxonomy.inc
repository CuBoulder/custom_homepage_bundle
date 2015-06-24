<?php
/**
 * @file
 * cu_homepage_policy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cu_homepage_policy_taxonomy_default_vocabularies() {
  return array(
    'policy_categories' => array(
      'name' => 'Policy Categories',
      'machine_name' => 'policy_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
