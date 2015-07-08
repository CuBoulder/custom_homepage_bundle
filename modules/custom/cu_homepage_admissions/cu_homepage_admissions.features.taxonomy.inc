<?php
/**
 * @file
 * cu_homepage_admissions.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cu_homepage_admissions_taxonomy_default_vocabularies() {
  return array(
    'admission_recruitment_location' => array(
      'name' => 'Admission Recruitment Location',
      'machine_name' => 'admission_recruitment_location',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
