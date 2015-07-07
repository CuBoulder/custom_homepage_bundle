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

  // Exported field_base: 'field_adm_counselor'
  $field_bases['field_adm_counselor'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_adm_counselor',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'person' => 'person',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

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

  return $field_bases;
}
