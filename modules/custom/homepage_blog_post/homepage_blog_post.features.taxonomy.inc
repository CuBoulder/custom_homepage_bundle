<?php
/**
 * @file
 * homepage_blog_post.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function homepage_blog_post_taxonomy_default_vocabularies() {
  return array(
    'blog_post_tags' => array(
      'name' => 'Blog Post Tags',
      'machine_name' => 'blog_post_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
