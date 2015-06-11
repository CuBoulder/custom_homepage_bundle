<?php
/**
 * @file
 * cu_degree_programs.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cu_degree_programs_taxonomy_default_vocabularies() {
  return array(
    'career_interests' => array(
      'name' => 'Career Interests',
      'machine_name' => 'career_interests',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'categories' => array(
      'name' => 'Categories',
      'machine_name' => 'categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'degrees_offered' => array(
      'name' => 'Degrees Offered',
      'machine_name' => 'degrees_offered',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
