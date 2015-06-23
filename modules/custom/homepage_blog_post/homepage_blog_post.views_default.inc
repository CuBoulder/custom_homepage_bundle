<?php
/**
 * @file
 * homepage_blog_post.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function homepage_blog_post_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'blog_posts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog Posts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Blogger (field_blog_post_blogger_ref) */
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['id'] = 'field_blog_post_blogger_ref_target_id';
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['table'] = 'field_data_field_blog_post_blogger_ref';
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['field'] = 'field_blog_post_blogger_ref_target_id';
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['validate_options']['types'] = array(
    'person' => 'person',
  );
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
    'blog_post' => 'blog_post',
  );

  /* Display: Block - Filter by UID */
  $handler = $view->new_display('block', 'Block - Filter by UID', 'block');

  /* Display: Block - Recent 3 */
  $handler = $view->new_display('block', 'Block - Recent 3', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_blog_post_blogger_ref_target_id']['id'] = 'field_blog_post_blogger_ref_target_id';
  $handler->display->display_options['relationships']['field_blog_post_blogger_ref_target_id']['table'] = 'field_data_field_blog_post_blogger_ref';
  $handler->display->display_options['relationships']['field_blog_post_blogger_ref_target_id']['field'] = 'field_blog_post_blogger_ref_target_id';
  $handler->display->display_options['relationships']['field_blog_post_blogger_ref_target_id']['label'] = 'Person from field_blog_post_blogger_ref';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_blog_post_body']['id'] = 'field_blog_post_body';
  $handler->display->display_options['fields']['field_blog_post_body']['table'] = 'field_data_field_blog_post_body';
  $handler->display->display_options['fields']['field_blog_post_body']['field'] = 'field_blog_post_body';
  $handler->display->display_options['fields']['field_blog_post_body']['label'] = '';
  $handler->display->display_options['fields']['field_blog_post_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_blog_post_body']['alter']['preserve_tags'] = '<p><br><strong><em>';
  $handler->display->display_options['fields']['field_blog_post_body']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_post_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_post_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_blog_post_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_post_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_blog_post_body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_blog_post_body']['field_api_classes'] = TRUE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_person_photo']['id'] = 'field_person_photo';
  $handler->display->display_options['fields']['field_person_photo']['table'] = 'field_data_field_person_photo';
  $handler->display->display_options['fields']['field_person_photo']['field'] = 'field_person_photo';
  $handler->display->display_options['fields']['field_person_photo']['relationship'] = 'field_blog_post_blogger_ref_target_id';
  $handler->display->display_options['fields']['field_person_photo']['label'] = '';
  $handler->display->display_options['fields']['field_person_photo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_person_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_photo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_person_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_person_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_person_photo']['settings'] = array(
    'image_style' => 'small_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_person_photo']['field_api_classes'] = TRUE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_person_first_name']['id'] = 'field_person_first_name';
  $handler->display->display_options['fields']['field_person_first_name']['table'] = 'field_data_field_person_first_name';
  $handler->display->display_options['fields']['field_person_first_name']['field'] = 'field_person_first_name';
  $handler->display->display_options['fields']['field_person_first_name']['relationship'] = 'field_blog_post_blogger_ref_target_id';
  $handler->display->display_options['fields']['field_person_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_person_first_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_person_first_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_person_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_first_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_person_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_person_first_name']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_person_title']['id'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['fields']['field_person_title']['field'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['relationship'] = 'field_blog_post_blogger_ref_target_id';
  $handler->display->display_options['fields']['field_person_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_person_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_person_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_person_title']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_person_title']['field_api_classes'] = TRUE;
  /* Field: Content: Hometown */
  $handler->display->display_options['fields']['field_person_hometown']['id'] = 'field_person_hometown';
  $handler->display->display_options['fields']['field_person_hometown']['table'] = 'field_data_field_person_hometown';
  $handler->display->display_options['fields']['field_person_hometown']['field'] = 'field_person_hometown';
  $handler->display->display_options['fields']['field_person_hometown']['relationship'] = 'field_blog_post_blogger_ref_target_id';
  $handler->display->display_options['fields']['field_person_hometown']['label'] = '';
  $handler->display->display_options['fields']['field_person_hometown']['element_type'] = '0';
  $handler->display->display_options['fields']['field_person_hometown']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_hometown']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_person_hometown']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_person_hometown']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['blog_posts'] = $view;

  return $export;
}
