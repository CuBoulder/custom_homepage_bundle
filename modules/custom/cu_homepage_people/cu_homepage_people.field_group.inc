<?php
/**
 * @file
 * cu_homepage_people.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cu_homepage_people_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_homepage|node|person|form';
  $field_group->group_name = 'group_homepage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Homepage Information',
    'weight' => '25',
    'children' => array(
      0 => 'field_person_hometown',
      1 => 'field_lc_domestic_freshman',
      2 => 'field_lc_domestic_transfer',
      3 => 'field_lc_international_undergrad',
      4 => 'field_lc_international_graduate',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-homepage field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_homepage|node|person|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage Information');

  return $field_groups;
}
