<?php
/**
 * @file
 * cu_search_homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cu_search_homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search-all';
  $context->description = 'search/all/*';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search*' => 'search*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'cu_directory-cu_directory_people_results' => array(
          'module' => 'cu_directory',
          'delta' => 'cu_directory_people_results',
          'region' => 'sidebar_second',
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
  $context->description = 'search*';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search*' => 'search*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'cu_search_homepage-cu_search_homepage_search_full' => array(
          'module' => 'cu_search_homepage',
          'delta' => 'cu_search_homepage_search_full',
          'region' => 'content',
          'weight' => '-6',
        ),
        'cu_search_homepage-cu_search_homepage_ga_results' => array(
          'module' => 'cu_search_homepage',
          'delta' => 'cu_search_homepage_ga_results',
          'region' => 'content',
          'weight' => '-4',
        ),
        'cu_directory-cu_directory_people_results' => array(
          'module' => 'cu_directory',
          'delta' => 'cu_directory_people_results',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('search/all/*');
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
        'search/facstaff/*' => 'search/facstaff/*',
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
        'search/people/*' => 'search/people/*',
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
        'search/students/*' => 'search/students/*',
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
