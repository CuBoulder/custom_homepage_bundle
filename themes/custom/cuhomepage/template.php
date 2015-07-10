<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 *
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

 /**
 * Implements hook_preprocess_html().
 */
function cuhomepage_preprocess_html(&$vars) {
  // SET BANNER COLOR (banner-white, banner-light, banner-cuhomepage, banner-black)
  $banner_color = theme_get_setting('banner_color', 'cuhomepage') ? theme_get_setting('banner_color', 'cuhomepage') : 'black';

  $vars['classes_array'][]='banner-' . $banner_color;
  $layout = theme_get_setting('layout_style', 'cuhomepage') ? theme_get_setting('layout_style', 'cuhomepage') : 'layout-wide';
  $vars['classes_array'][]=$layout;
  $vars['head_title_array']['slogan'] = '';
  $variables['head_title'] = implode(' | ', $variables['head_title_array']);
}

/**
 * Implements hook_preprocess_page().
 */

function cuhomepage_preprocess_page(&$variables) {
  global $base_url;
  //$variables['site_name'] = 'University of Colorado <strong>Boulder</strong>';
  $variables['site_slogan'] = '';
}

/**
* Implements hook_preprocess_node().
*/
function cuhomepage_preprocess_node(&$variables) {
  if($variables['view_mode'] == 'blogger') {
    $variables['theme_hook_suggestions'][] = 'node__' . $variables['view_mode'];
    $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];
  }
}

/**
 * Implements hook_preprocess_region().
 */
function cuhomepage_preprocess_region(&$variables, $hook) {
  global $base_url;
  switch ($variables['region']) {
    case 'branding':
      $variables['logo'] = theme_get_setting('logo');
      $variables['front_page'] = url('<front>');
      //$variables['site_name'] = 'University of Colorado <strong>Boulder</strong>';
      $variables['site_slogan'] = '';
      $variables['print_logo'] = '<img src="' . $base_url . '/' . drupal_get_path('theme','cuzen') . '/images/print-logo.png" alt="University of Colorado Boulder" />';
      break;
  }
}
