<?php
/**
 * @file
 * cu_homepage_people.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cu_homepage_people_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blogger|node|person|form';
  $field_group->group_name = 'group_blogger';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_information';
  $field_group->data = array(
    'label' => 'Blogger Information',
    'weight' => '25',
    'children' => array(
      0 => 'field_person_audience_ref',
      1 => 'field_person_degree_program_ref',
      2 => 'field_person_hometown',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-blogger field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_blogger|node|person|form'] = $field_group;

  return $export;
}
