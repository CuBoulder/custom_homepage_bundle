<?php
/**
 * @file
 * cu_degree_programs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cu_degree_programs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cu_degree_programs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cu_degree_programs_node_info() {
  $items = array(
    'degree_program' => array(
      'name' => t('Degree Program'),
      'base' => 'node_content',
      'description' => t('<em>Degree Program</em> is used for undergraduate and graduate courses of study.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
