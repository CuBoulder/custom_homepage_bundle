<?php
/**
 * @file
 * cu_homepage_policy.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cu_homepage_policy_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-policy-body'.
  $field_instances['node-policy-body'] = array(
    'bundle' => 'policy',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'blogger' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-policy-field_policy_approved_by'.
  $field_instances['node-policy-field_policy_approved_by'] = array(
    'bundle' => 'policy',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'blogger' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
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
    'field_name' => 'field_policy_approved_by',
    'label' => 'Approved By',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-policy-field_policy_authors'.
  $field_instances['node-policy-field_policy_authors'] = array(
    'bundle' => 'policy',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'blogger' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
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
    'field_name' => 'field_policy_authors',
    'label' => 'Author(s)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-policy-field_policy_categories'.
  $field_instances['node-policy-field_policy_categories'] = array(
    'bundle' => 'policy',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
        'weight' => 4,
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
    'field_name' => 'field_policy_categories',
    'label' => 'Policy Categories',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-policy-field_policy_effective_date'.
  $field_instances['node-policy-field_policy_effective_date'] = array(
    'bundle' => 'policy',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'blogger' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 5,
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
    'field_name' => 'field_policy_effective_date',
    'label' => 'Effective Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 30,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(
          0 => 'year',
        ),
        'year_range' => '-100:+20',
      ),
      'type' => 'date_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-policy-field_policy_external_url'.
  $field_instances['node-policy-field_policy_external_url'] = array(
    'bundle' => 'policy',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'blogger' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
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
    'field_name' => 'field_policy_external_url',
    'label' => 'External URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'link',
      'settings' => array(
        'default_titles' => '',
        'urls_allowed' => 'both',
        'urls_filter' => '',
        'urls_search' => 'start',
      ),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-policy-field_policy_file'.
  $field_instances['node-policy-field_policy_file'] = array(
    'bundle' => 'policy',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'blogger' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
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
    'field_name' => 'field_policy_file',
    'label' => 'File',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'policies',
      'file_extensions' => 'txt pdf doc docx',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__backstretch' => 0,
          'colorbox__flexslider_full' => 0,
          'colorbox__flexslider_thumbnail' => 0,
          'colorbox__focal_point_preview' => 0,
          'colorbox__grid-3' => 0,
          'colorbox__grid-4' => 0,
          'colorbox__grid-6' => 0,
          'colorbox__grid-9' => 0,
          'colorbox__grid-12' => 0,
          'colorbox__hero' => 0,
          'colorbox__large' => 0,
          'colorbox__large_square_thumbnail' => 0,
          'colorbox__large_wide_thumbnail' => 0,
          'colorbox__medium' => 0,
          'colorbox__preview' => 0,
          'colorbox__slider' => 0,
          'colorbox__slider-large' => 0,
          'colorbox__small' => 0,
          'colorbox__small_thumbnail' => 0,
          'colorbox__square' => 0,
          'colorbox__square_thumbnail' => 0,
          'colorbox__thumbnail' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_backstretch' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_focal_point_preview' => 0,
          'image_grid-3' => 0,
          'image_grid-4' => 0,
          'image_grid-6' => 0,
          'image_grid-9' => 0,
          'image_grid-12' => 0,
          'image_hero' => 0,
          'image_large' => 0,
          'image_large_square_thumbnail' => 0,
          'image_large_wide_thumbnail' => 0,
          'image_medium' => 0,
          'image_preview' => 0,
          'image_slider' => 0,
          'image_slider-large' => 0,
          'image_small' => 0,
          'image_small_thumbnail' => 0,
          'image_square' => 0,
          'image_square_thumbnail' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-policy-field_policy_related_policies'.
  $field_instances['node-policy-field_policy_related_policies'] = array(
    'bundle' => 'policy',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'blogger' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
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
    'field_name' => 'field_policy_related_policies',
    'label' => 'Related Policies',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-policy-field_policy_revisions'.
  $field_instances['node-policy-field_policy_revisions'] = array(
    'bundle' => 'policy',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'blogger' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 8,
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
    'field_name' => 'field_policy_revisions',
    'label' => 'Revisions',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 13,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Approved By');
  t('Author(s)');
  t('Body');
  t('Effective Date');
  t('External URL');
  t('File');
  t('Policy Categories');
  t('Related Policies');
  t('Revisions');

  return $field_instances;
}
