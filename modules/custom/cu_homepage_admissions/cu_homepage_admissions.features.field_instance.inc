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

  // Exported field_instance: 'taxonomy_term-admission_recruitment_location-field_adm_counselor'
  $field_instances['taxonomy_term-admission_recruitment_location-field_adm_counselor'] = array(
    'bundle' => 'admission_recruitment_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div',
    'field_name' => 'field_adm_counselor',
    'label' => 'Counselor',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 41,
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
  t('Counselor');
  t('Postal Code');

  return $field_instances;
}
