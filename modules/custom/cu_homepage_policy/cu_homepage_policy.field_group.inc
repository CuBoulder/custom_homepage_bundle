<?php
/**
 * @file
 * cu_homepage_policy.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cu_homepage_policy_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_policy_meta|node|policy|form';
  $field_group->group_name = 'group_policy_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'policy';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Policy Meta Data',
    'weight' => '7',
    'children' => array(
      0 => 'field_policy_effective_date',
      1 => 'field_policy_approved_by',
      2 => 'field_policy_authors',
      3 => 'field_policy_revisions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Policy Meta Data',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-policy-meta field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_policy_meta|node|policy|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_policy|node|policy|form';
  $field_group->group_name = 'group_policy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'policy';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Policy Document',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_policy_external_url',
      2 => 'field_policy_file',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Policy Document',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'Use <strong>one</strong> of the following fields to state the policy,',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_policy|node|policy|form'] = $field_group;

  return $export;
}
