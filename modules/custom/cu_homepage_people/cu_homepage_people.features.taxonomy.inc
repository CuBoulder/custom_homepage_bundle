<?php
/**
 * @file
 * cu_homepage_people.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cu_homepage_people_taxonomy_default_vocabularies() {
  return array(
    'audience' => array(
      'name' => 'Audience',
      'machine_name' => 'audience',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
