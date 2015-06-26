<?php
/**
 * @file
 * cu_homepage_admissions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cu_homepage_admissions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cu_homepage_admissions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cu_homepage_admissions_node_info() {
  $items = array(
    'admission_event' => array(
      'name' => t('Admission Event'),
      'base' => 'node_content',
      'description' => t('An <em>admission event</em> that has a specific geographic location. An automatic bulk importer is available, contact Strategic Relations for an import.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
