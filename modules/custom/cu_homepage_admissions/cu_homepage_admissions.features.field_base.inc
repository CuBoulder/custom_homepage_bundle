<?php
/**
 * @file
 * cu_homepage_admissions.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function cu_homepage_admissions_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_adm_loc_postal_code'
  $field_bases['field_adm_loc_postal_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_adm_loc_postal_code',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'postal_code',
    'settings' => array(
      'max_length' => 16,
    ),
    'translatable' => 0,
    'type' => 'postal_code',
  );

  // Exported field_base: 'field_adm_recruitment_locations'
  $field_bases['field_adm_recruitment_locations'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_adm_recruitment_locations',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'admission_recruitment_location',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}