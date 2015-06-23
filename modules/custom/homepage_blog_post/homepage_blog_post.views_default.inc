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
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['validate_options']['type'] = 'either';
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['validate_options']['restrict_roles'] = TRUE;
  $handler->display->display_options['arguments']['field_blog_post_blogger_ref_target_id']['validate_options']['roles'] = array(
    14 => '14',
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['blog_posts'] = $view;

  return $export;
}
