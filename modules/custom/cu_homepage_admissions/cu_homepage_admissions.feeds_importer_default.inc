<?php
/**
 * @file
 * cu_homepage_admissions.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function cu_homepage_admissions_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'admission_recruitment_locations';
  $feeds_importer->config = array(
    'name' => 'Admission Recruitment Locations - Country',
    'description' => 'Run 1st',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'admission_recruitment_location',
        'mappings' => array(
          0 => array(
            'source' => 'person_nid',
            'target' => 'field_adm_counselor:etid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'postal',
            'target' => 'field_adm_loc_postal_code',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'country',
            'target' => 'name',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['admission_recruitment_locations'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'admission_recruitment_locations_high_school';
  $feeds_importer->config = array(
    'name' => 'Admission Recruitment Locations - High School',
    'description' => 'Run 4th',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'admission_recruitment_location',
        'mappings' => array(
          0 => array(
            'source' => 'person_nid',
            'target' => 'field_adm_counselor:etid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'postal',
            'target' => 'field_adm_loc_postal_code',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'high_school',
            'target' => 'name',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'state',
            'target' => 'parent',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['admission_recruitment_locations_high_school'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'admission_recruitment_locations_region';
  $feeds_importer->config = array(
    'name' => 'Admission Recruitment Locations - Region',
    'description' => 'Run 3rd',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'admission_recruitment_location',
        'mappings' => array(
          0 => array(
            'source' => 'person_nid',
            'target' => 'field_adm_counselor:etid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'postal',
            'target' => 'field_adm_loc_postal_code',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'region',
            'target' => 'name',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'state',
            'target' => 'parent',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['admission_recruitment_locations_region'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'admission_recruitment_locations_state';
  $feeds_importer->config = array(
    'name' => 'Admission Recruitment Locations - State',
    'description' => 'Run 2nd',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'admission_recruitment_location',
        'mappings' => array(
          0 => array(
            'source' => 'person_nid',
            'target' => 'field_adm_counselor:etid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'postal',
            'target' => 'field_adm_loc_postal_code',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'country',
            'target' => 'parent',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'state',
            'target' => 'name',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['admission_recruitment_locations_state'] = $feeds_importer;

  return $export;
}
