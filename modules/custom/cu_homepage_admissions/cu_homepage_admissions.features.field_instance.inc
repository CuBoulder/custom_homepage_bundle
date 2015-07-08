<?php
/**
 * @file
 * cu_homepage_admissions.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cu_homepage_admissions_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-person-field_adm_recruitment_locations'
  $field_instances['node-person-field_adm_recruitment_locations'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the locations that this person is responsible for.',
    'display' => array(
      'blogger' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 28,
      ),
      'grid' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'table' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_adm_recruitment_locations',
    'label' => 'Admission Recruitment Locations',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'taxonomy_term-admission_recruitment_location-field_adm_loc_postal_code'
  $field_instances['taxonomy_term-admission_recruitment_location-field_adm_loc_postal_code'] = array(
    'bundle' => 'admission_recruitment_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'postal_code',
        'settings' => array(),
        'type' => 'postal_code_simple_text',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div',
    'field_name' => 'field_adm_loc_postal_code',
    'label' => 'Postal Code',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'postal_code',
      'settings' => array(),
      'type' => 'postal_code_us_postal_code_form',
      'weight' => 42,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Admission Recruitment Locations');
  t('Postal Code');
  t('Select the locations that this person is responsible for.');

  return $field_instances;
}
