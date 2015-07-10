<?php
/**
 * @file
 * cu_search.box.inc
 */

/**
 * Implements hook_default_box().
 */
function cu_search_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'people_search_help';
  $box->plugin_key = 'simple';
  $box->title = 'About People Search';
  $box->description = 'People search help';
  $box->options = array(
    'body' => array(
      'value' => '<p>Lorem ipsum dolar sit amet.</p>
',
      'format' => 'wysiwyg',
    ),
  );
  $export['people_search_help'] = $box;

  return $export;
}
