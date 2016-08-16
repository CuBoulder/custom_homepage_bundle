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
    'admission_event_series' => array(
      'name' => 'Admission Event Series',
      'machine_name' => 'admission_event_series',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'admission_event_type' => array(
      'name' => 'Admission Event Type',
      'machine_name' => 'admission_event_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'admission_recruitment_location' => array(
      'name' => 'Admission Recruitment Location',
      'machine_name' => 'admission_recruitment_location',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
