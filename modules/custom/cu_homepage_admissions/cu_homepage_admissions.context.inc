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
  $context->name = 'domestic_freshman_counselors';
  $context->description = '';
  $context->tag = 'Admission Section';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admissions/connect/counselors/freshman' => 'admissions/connect/counselors/freshman',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-27667a246677df2b39c6219e9d64b36f' => array(
          'module' => 'views',
          'delta' => '27667a246677df2b39c6219e9d64b36f',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-dd5ffc32774ad7df5fd6294bb4a35d0a' => array(
          'module' => 'views',
          'delta' => 'dd5ffc32774ad7df5fd6294bb4a35d0a',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Admission Section');
  $export['domestic_freshman_counselors'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'domestic_transfer_counselors';
  $context->description = '';
  $context->tag = 'Admission Section';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admissions/connect/counselors/transfer' => 'admissions/connect/counselors/transfer',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-f9de1e7e42362d6eb35c3ca67cde0eb0' => array(
          'module' => 'views',
          'delta' => 'f9de1e7e42362d6eb35c3ca67cde0eb0',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-0640f0e2d25f3bea933303c81a6c250f' => array(
          'module' => 'views',
          'delta' => '0640f0e2d25f3bea933303c81a6c250f',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Admission Section');
  $export['domestic_transfer_counselors'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'international_graduate_counselors';
  $context->description = '';
  $context->tag = 'Admission Section';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admissions/connect/counselors/international-graduate' => 'admissions/connect/counselors/international-graduate',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-97ef5df0e29a218e749912df1765fe0a' => array(
          'module' => 'views',
          'delta' => '97ef5df0e29a218e749912df1765fe0a',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-60ff29fa97a158d1ec6bb27567421b8d' => array(
          'module' => 'views',
          'delta' => '60ff29fa97a158d1ec6bb27567421b8d',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Admission Section');
  $export['international_graduate_counselors'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'international_undergraduate_counselors';
  $context->description = '';
  $context->tag = 'Admission Section';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admissions/connect/counselors/international' => 'admissions/connect/counselors/international',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-851de560203ddf280249653907cf80fd' => array(
          'module' => 'views',
          'delta' => '851de560203ddf280249653907cf80fd',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-ad824640a074007854b70ce4740b093c' => array(
          'module' => 'views',
          'delta' => 'ad824640a074007854b70ce4740b093c',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Admission Section');
  $export['international_undergraduate_counselors'] = $context;

  return $export;
}
