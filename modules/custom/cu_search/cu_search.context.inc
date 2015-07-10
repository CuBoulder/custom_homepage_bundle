<?php
/**
 * @file
 * cu_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cu_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'gsearch' => 'gsearch',
        'gsearch/*' => 'gsearch/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'cu_search-cu_search_search_full' => array(
          'module' => 'cu_search',
          'delta' => 'cu_search_search_full',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search-all';
  $context->description = 'gsearch/all/*';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'gsearch/all/*' => 'gsearch/all/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'cu_search-cu_search_search_full' => array(
          'module' => 'cu_search',
          'delta' => 'cu_search_search_full',
          'region' => 'content',
          'weight' => '-6',
        ),
        'cu_search-cu_search_ga_results' => array(
          'module' => 'cu_search',
          'delta' => 'cu_search_ga_results',
          'region' => 'content',
          'weight' => '-4',
        ),
        'cu_search-cu_search_ga_related' => array(
          'module' => 'cu_search',
          'delta' => 'cu_search_ga_related',
          'region' => 'content',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('gsearch/all/*');
  t('search');
  $export['search-all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search-facstaff';
  $context->description = '';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'gsearch/facstaff/*' => 'gsearch/facstaff/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'cu_directory-cu_directory_facstaff_results' => array(
          'module' => 'cu_directory',
          'delta' => 'cu_directory_facstaff_results',
          'region' => 'content',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('search');
  $export['search-facstaff'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search-people';
  $context->description = '';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'gsearch/people/*' => 'gsearch/people/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'cu_directory-cu_directory_people_results' => array(
          'module' => 'cu_directory',
          'delta' => 'cu_directory_people_results',
          'region' => 'content',
          'weight' => '0',
        ),
        'boxes-people_search_help' => array(
          'module' => 'boxes',
          'delta' => 'people_search_help',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('search');
  $export['search-people'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search-students';
  $context->description = '';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'gsearch/students/*' => 'gsearch/students/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'cu_directory-cu_directory_student_results' => array(
          'module' => 'cu_directory',
          'delta' => 'cu_directory_student_results',
          'region' => 'content',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('search');
  $export['search-students'] = $context;

  return $export;
}
