<?php
/**
 * @file
 * cu_degree_programs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cu_degree_programs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|degree_program|form';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'degree_program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '14',
    'children' => array(
      0 => 'field_degree_prog_advising_url',
      1 => 'field_degree_prog_deg_reqs_url',
      2 => 'field_degree_prog_dept_website',
      3 => 'field_degree_prog_grad_adm_url',
      4 => 'field_degree_prog_under_adm_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-links field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_links|node|degree_program|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Links');

  return $field_groups;
}
