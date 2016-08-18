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
    'admissions_locations_domestic_freshman' => array(
      'name' => 'Admissions Locations Domestic Freshman',
      'machine_name' => 'admissions_locations_domestic_freshman',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'admissions_locations_domestic_transfer' => array(
      'name' => 'Admissions Locations Domestic Transfer',
      'machine_name' => 'admissions_locations_domestic_transfer',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'admissions_locations_international_graduate' => array(
      'name' => 'Admissions Locations International Graduate',
      'machine_name' => 'admissions_locations_international_graduate',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'admissions_locations_international_undergrad' => array(
      'name' => 'Admissions Locations International Undergrad',
      'machine_name' => 'admissions_locations_international_undergrad',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
