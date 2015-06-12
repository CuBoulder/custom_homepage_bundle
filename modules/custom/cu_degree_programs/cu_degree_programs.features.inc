<?php
/**
 * @file
 * cu_degree_programs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cu_degree_programs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cu_degree_programs_node_info() {
  $items = array(
    'degree_program' => array(
      'name' => t('Degree Program'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
