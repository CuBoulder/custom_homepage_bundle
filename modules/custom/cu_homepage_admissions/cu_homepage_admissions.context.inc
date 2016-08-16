<?php
/**
 * @file
 * cu_homepage_admissions.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cu_homepage_admissions_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'admissions_connect';
  $context->description = '';
  $context->tag = 'Admission Section';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admissions/connect' => 'admissions/connect',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-0c23af82c70e0eae8126122d095371fe' => array(
          'module' => 'views',
          'delta' => '0c23af82c70e0eae8126122d095371fe',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-019d2e83e983b4a6f6b6fcf468ea1ac8' => array(
          'module' => 'views',
          'delta' => '019d2e83e983b4a6f6b6fcf468ea1ac8',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-c3e53a781c5700e397961b767b2652ca' => array(
          'module' => 'views',
          'delta' => 'c3e53a781c5700e397961b767b2652ca',
          'region' => 'content',
          'weight' => '-7',
        ),
        'bean-block-section-adm-connect-contac' => array(
          'module' => 'bean',
          'delta' => 'block-section-adm-connect-contac',
          'region' => 'wide_2',
          'weight' => '-10',
        ),
        'bean-block-section-adm-connect-mail-0' => array(
          'module' => 'bean',
          'delta' => 'block-section-adm-connect-mail-0',
          'region' => 'wide_2',
          'weight' => '-8',
        ),
        'bean-block-section-adm-connect-mailin' => array(
          'module' => 'bean',
          'delta' => 'block-section-adm-connect-mailin',
          'region' => 'wide_2',
          'weight' => '-7',
        ),
        'bean-block-section-admissions-call-to' => array(
          'module' => 'bean',
          'delta' => 'block-section-admissions-call-to',
          'region' => 'wide_2',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Admission Section');
  $export['admissions_connect'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'admissions_events';
  $context->description = 'Upcoming Events Page';
  $context->tag = 'Admission Section';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admissions/connect/events' => 'admissions/connect/events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ddf2c5424279c73d8dc6a01f8c8868af' => array(
          'module' => 'views',
          'delta' => 'ddf2c5424279c73d8dc6a01f8c8868af',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-019d2e83e983b4a6f6b6fcf468ea1ac8' => array(
          'module' => 'views',
          'delta' => '019d2e83e983b4a6f6b6fcf468ea1ac8',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-c3e53a781c5700e397961b767b2652ca' => array(
          'module' => 'views',
          'delta' => 'c3e53a781c5700e397961b767b2652ca',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Admission Section');
  t('Upcoming Events Page');
  $export['admissions_events'] = $context;

  return $export;
}
