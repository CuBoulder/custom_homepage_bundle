<?php
/**
 * @file
 * cu_homepage_resource.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cu_homepage_resource_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_resource_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'term_audience';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'audience' => 'audience',
    'blog_post_tags' => 0,
    'career_interests' => 0,
    'categories' => 0,
    'college_school' => 0,
    'degrees_offered' => 0,
    'department' => 0,
    'person_type' => 0,
    'people_filter_1' => 0,
    'people_filter_2' => 0,
    'people_filter_3' => 0,
    'policy_categories' => 0,
    'resource_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['label'] = 'term_resource';
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
    'resource_category' => 'resource_category',
    'audience' => 0,
    'blog_post_tags' => 0,
    'career_interests' => 0,
    'categories' => 0,
    'college_school' => 0,
    'degrees_offered' => 0,
    'department' => 0,
    'person_type' => 0,
    'people_filter_1' => 0,
    'people_filter_2' => 0,
    'people_filter_3' => 0,
    'policy_categories' => 0,
    'tags' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_resource_category']['id'] = 'field_resource_category';
  $handler->display->display_options['fields']['field_resource_category']['table'] = 'field_data_field_resource_category';
  $handler->display->display_options['fields']['field_resource_category']['field'] = 'field_resource_category';
  $handler->display->display_options['fields']['field_resource_category']['label'] = '';
  $handler->display->display_options['fields']['field_resource_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_category']['element_type'] = '0';
  $handler->display->display_options['fields']['field_resource_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_category']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_resource_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_resource_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_resource_category']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_resource_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_resource_category']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Category (field_resource_category) */
  $handler->display->display_options['sorts']['field_resource_category_tid']['id'] = 'field_resource_category_tid';
  $handler->display->display_options['sorts']['field_resource_category_tid']['table'] = 'field_data_field_resource_category';
  $handler->display->display_options['sorts']['field_resource_category_tid']['field'] = 'field_resource_category_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid_1']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['tid_1']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resource' => 'resource',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['resources'] = $view;

  return $export;
}
