<?php
/**
* @file
* cu_homepage_admissions.views_default.inc
*/

/**
* Implements hook_views_default_views().
*/
function cu_homepage_adm_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admission_events_and_counselors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admission Events and Counselors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Admission Events';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more events';
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no upcoming events for the selected location.';
  $handler->display->display_options['empty']['area']['format'] = 'wysiwyg';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_adm_event_date']['id'] = 'field_adm_event_date';
  $handler->display->display_options['fields']['field_adm_event_date']['table'] = 'field_data_field_adm_event_date';
  $handler->display->display_options['fields']['field_adm_event_date']['field'] = 'field_adm_event_date';
  $handler->display->display_options['fields']['field_adm_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_adm_event_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_adm_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adm_event_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_adm_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_adm_event_date']['settings'] = array(
    'format_type' => 'cu_medium_date_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_adm_event_date']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_adm_event_address_locality']['id'] = 'field_adm_event_address_locality';
  $handler->display->display_options['fields']['field_adm_event_address_locality']['table'] = 'field_data_field_adm_event_address';
  $handler->display->display_options['fields']['field_adm_event_address_locality']['field'] = 'field_adm_event_address_locality';
  $handler->display->display_options['fields']['field_adm_event_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_adm_event_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adm_event_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_adm_event_address_locality']['alter']['text'] = '[field_adm_event_address_locality], ';
  $handler->display->display_options['fields']['field_adm_event_address_locality']['element_type'] = '0';
  $handler->display->display_options['fields']['field_adm_event_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adm_event_address_locality']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_adm_event_address_locality']['element_default_classes'] = FALSE;
  /* Field: Content: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_adm_event_address_administrative_area']['id'] = 'field_adm_event_address_administrative_area';
  $handler->display->display_options['fields']['field_adm_event_address_administrative_area']['table'] = 'field_data_field_adm_event_address';
  $handler->display->display_options['fields']['field_adm_event_address_administrative_area']['field'] = 'field_adm_event_address_administrative_area';
  $handler->display->display_options['fields']['field_adm_event_address_administrative_area']['label'] = '';
  $handler->display->display_options['fields']['field_adm_event_address_administrative_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_adm_event_address_administrative_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_adm_event_address_administrative_area']['alter']['text'] = '[field_adm_event_address_administrative_area], ';
  $handler->display->display_options['fields']['field_adm_event_address_administrative_area']['element_type'] = '0';
  $handler->display->display_options['fields']['field_adm_event_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adm_event_address_administrative_area']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_adm_event_address_administrative_area']['element_default_classes'] = FALSE;
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_adm_event_address_country']['id'] = 'field_adm_event_address_country';
  $handler->display->display_options['fields']['field_adm_event_address_country']['table'] = 'field_data_field_adm_event_address';
  $handler->display->display_options['fields']['field_adm_event_address_country']['field'] = 'field_adm_event_address_country';
  $handler->display->display_options['fields']['field_adm_event_address_country']['label'] = '';
  $handler->display->display_options['fields']['field_adm_event_address_country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_adm_event_address_country']['alter']['text'] = '[field_adm_event_address_locality] [field_adm_event_address_administrative_area] [field_adm_event_address_country]';
  $handler->display->display_options['fields']['field_adm_event_address_country']['element_type'] = '0';
  $handler->display->display_options['fields']['field_adm_event_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adm_event_address_country']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_adm_event_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_adm_event_address_country']['display_name'] = 1;
  /* Sort criterion: Content: Date -  start date (field_adm_event_date) */
  $handler->display->display_options['sorts']['field_adm_event_date_value']['id'] = 'field_adm_event_date_value';
  $handler->display->display_options['sorts']['field_adm_event_date_value']['table'] = 'field_data_field_adm_event_date';
  $handler->display->display_options['sorts']['field_adm_event_date_value']['field'] = 'field_adm_event_date_value';
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
  /* Filter criterion: Content: Admission Recruitment Location (field_adm_recruitment_locations) */
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid']['id'] = 'field_adm_recruitment_locations_tid';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid']['table'] = 'field_data_field_adm_recruitment_locations';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid']['field'] = 'field_adm_recruitment_locations_tid';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid']['vocabulary'] = 'admission_recruitment_location';
  /* Filter criterion: Content: Admission Recruitment Location (field_adm_recruitment_locations) */
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['id'] = 'field_adm_recruitment_locations_tid_1';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['table'] = 'field_data_field_adm_recruitment_locations';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['field'] = 'field_adm_recruitment_locations_tid';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['expose']['operator_id'] = 'field_adm_recruitment_locations_tid_1_op';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['expose']['label'] = 'Select your location';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['expose']['operator'] = 'field_adm_recruitment_locations_tid_1_op';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['expose']['identifier'] = 'location';
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
  /* Filter criterion: Content: Date - end date (field_adm_event_date:value2) */
  $handler->display->display_options['filters']['field_adm_event_date_value2']['id'] = 'field_adm_event_date_value2';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['table'] = 'field_data_field_adm_event_date';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['field'] = 'field_adm_event_date_value2';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['default_date'] = 'now';

  /* Display: Event Page */
  $handler = $view->new_display('page', 'Event Page', 'page');
  $handler->display->display_options['path'] = 'admissions/connect/events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Upcoming Events';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Event Block */
  $handler = $view->new_display('block', 'Event Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more events';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;

  /* Display: Person Block */
  $handler = $view->new_display('block', 'Person Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Find Your Counselor';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Select a location to find your Admission representative and events in your area.';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Please select a more specific location to see your counselor.';
  $handler->display->display_options['empty']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last Name (field_person_last_name) */
  $handler->display->display_options['sorts']['field_person_last_name_value']['id'] = 'field_person_last_name_value';
  $handler->display->display_options['sorts']['field_person_last_name_value']['table'] = 'field_data_field_person_last_name';
  $handler->display->display_options['sorts']['field_person_last_name_value']['field'] = 'field_person_last_name_value';
  /* Sort criterion: Content: First Name (field_person_first_name) */
  $handler->display->display_options['sorts']['field_person_first_name_value']['id'] = 'field_person_first_name_value';
  $handler->display->display_options['sorts']['field_person_first_name_value']['table'] = 'field_data_field_person_first_name';
  $handler->display->display_options['sorts']['field_person_first_name_value']['field'] = 'field_person_first_name_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Admission Recruitment Location (field_adm_recruitment_locations) */
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid']['id'] = 'field_adm_recruitment_locations_tid';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid']['table'] = 'field_data_field_adm_recruitment_locations';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid']['field'] = 'field_adm_recruitment_locations_tid';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid']['vocabulary'] = 'admission_recruitment_location';
  /* Filter criterion: Content: Admission Recruitment Location (field_adm_recruitment_locations) */
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['id'] = 'field_adm_recruitment_locations_tid_1';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['table'] = 'field_data_field_adm_recruitment_locations';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['field'] = 'field_adm_recruitment_locations_tid';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['expose']['operator_id'] = 'field_adm_recruitment_locations_tid_1_op';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['expose']['label'] = 'Select your location';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['expose']['operator'] = 'field_adm_recruitment_locations_tid_1_op';
  $handler->display->display_options['filters']['field_adm_recruitment_locations_tid_1']['expose']['identifier'] = 'location';
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


  $export['admission_events_and_counselors'] = $view;

  return $export;
}
