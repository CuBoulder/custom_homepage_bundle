<?php
/**
 * @file
 * homepage_blog_post.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function homepage_blog_post_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blogger';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'person' => 'person',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_posts-block' => array(
          'module' => 'views',
          'delta' => 'blog_posts-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-blog_posts-block_2' => array(
          'module' => 'views',
          'delta' => 'blog_posts-block_2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-blog_posts-block_3' => array(
          'module' => 'views',
          'delta' => 'blog_posts-block_3',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['blogger'] = $context;

  return $export;
}
