<?php
/**
 * @file
 * cu_search_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cu_search_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
