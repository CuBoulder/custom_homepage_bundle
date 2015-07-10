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
      'value' => '<p><strong>If you are a student</strong>, most of your information comes from the Student Information System (SIS) and is managed by the Office of the Registrar (Regent Hall Room 105, 303-492-6970, or&nbsp;<a href="mailto:registrar@colorado.edu">registrar@colorado.edu</a>).</p><p><strong>If you are faculty or staff</strong>, most of your information comes from the PeopleSoft Human Resources (HR) system and is maintained by the Personnel Liaison for your department.&nbsp;</p><p><a class="button button-small button-full button-blue" href="http://www.colorado.edu/about/people-search">About People Search</a></p>',
      'format' => 'wysiwyg',
    ),
  );
  $export['people_search_help'] = $box;

  return $export;
}
