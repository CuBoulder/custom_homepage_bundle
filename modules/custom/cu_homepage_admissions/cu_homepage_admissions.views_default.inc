<?php
/**
 * @file
 * cu_homepage_admissions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cu_homepage_admissions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admission_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admission Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Admission Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['table'] = 'field_data_field_adm_event_geolocation';
  $handler->display->display_options['fields']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['label'] = '';
  $handler->display->display_options['fields']['field_geofield_distance']['element_type'] = '0';
  $handler->display->display_options['fields']['field_geofield_distance']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geofield_distance']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_geofield_distance']['element_default_classes'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['table'] = 'field_data_field_adm_event_geolocation';
  $handler->display->display_options['sorts']['field_geofield_distance']['field'] = 'field_geofield_distance';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'admission_event' => 'admission_event',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_adm_event_geolocation';
  $handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
  $handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
    'distance' => '100',
    'distance2' => 200,
    'unit' => '3959',
    'origin' => '',
  );
  $handler->display->display_options['filters']['field_geofield_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator_id'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['identifier'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    11 => 0,
    5 => 0,
    9 => 0,
    12 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'events';
  $export['admission_events'] = $view;

  $view = new view();
  $view->name = 'admission_recruitment_locations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admission Recruitment Locations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Select a location to find your Admission representative.';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'wysiwyg';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  /* Filter criterion: Content: Admission Recruitment Locations (field_adm_recruitment_locations) */
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid']['id'] = 'field_adm_recruitment_locations_tid';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid']['table'] = 'field_data_field_adm_recruitment_locations';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid']['field'] = 'field_adm_recruitment_locations_tid';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid']['vocabulary'] = 'admission_recruitment_location';
  /* Filter criterion: Content: Admission Recruitment Locations (field_adm_recruitment_locations) */
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['id'] = 'field_adm_recruitment_locations_tid_1';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['table'] = 'field_data_field_adm_recruitment_locations';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['field'] = 'field_adm_recruitment_locations_tid';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['expose']['operator_id'] = 'field_adm_recruitment_locations_tid_1_op';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['expose']['label'] = 'Select your location';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['expose']['operator'] = 'field_adm_recruitment_locations_tid_1_op';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['expose']['identifier'] = 'field_adm_recruitment_locations_tid_1';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    11 => 0,
    5 => 0,
    9 => 0,
    28 => 0,
  );
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['vocabulary'] = 'admission_recruitment_location';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['admission_recruitment_locations'] = $view;

  return $export;
}
