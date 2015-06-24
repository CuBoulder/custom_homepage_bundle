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
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_resource_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row-start-open'] = '0';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
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
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_resource_audience']['id'] = 'field_resource_audience';
  $handler->display->display_options['fields']['field_resource_audience']['table'] = 'field_data_field_resource_audience';
  $handler->display->display_options['fields']['field_resource_audience']['field'] = 'field_resource_audience';
  $handler->display->display_options['fields']['field_resource_audience']['label'] = '';
  $handler->display->display_options['fields']['field_resource_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_audience']['element_type'] = '0';
  $handler->display->display_options['fields']['field_resource_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_audience']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_resource_audience']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_resource_audience']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_resource_audience']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_resource_audience']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
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
