<?php
/**
 * @file
 * cu_homepage_admissions.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function cu_homepage_admissions_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'admission_event-country-country_to_code';
  $feeds_tamper->importer = 'admission_event';
  $feeds_tamper->source = 'country';
  $feeds_tamper->plugin_id = 'country_to_code';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert country to ISO code';
  $export['admission_event-country-country_to_code'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'admission_event-end_date_time-strtotime';
  $feeds_tamper->importer = 'admission_event';
  $feeds_tamper->source = 'end_date_time';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['admission_event-end_date_time-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'admission_event-start_date_time-strtotime';
  $feeds_tamper->importer = 'admission_event';
  $feeds_tamper->source = 'start_date_time';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['admission_event-start_date_time-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'person_admission_recruitment_location-all_terms-explode';
  $feeds_tamper->importer = 'person_admission_recruitment_location';
  $feeds_tamper->source = 'all_terms';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['person_admission_recruitment_location-all_terms-explode'] = $feeds_tamper;

  return $export;
}
