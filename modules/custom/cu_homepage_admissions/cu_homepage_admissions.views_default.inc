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
  $handler->display->display_options['title'] = 'Find your Admission Counselor';
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
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Select a location to find your Admission representative and events in your area.';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Last Name (field_person_last_name) */
  $handler->display->display_options['sorts']['field_person_last_name_value']['id'] = 'field_person_last_name_value';
  $handler->display->display_options['sorts']['field_person_last_name_value']['table'] = 'field_data_field_person_last_name';
  $handler->display->display_options['sorts']['field_person_last_name_value']['field'] = 'field_person_last_name_value';
  /* Sort criterion: Content: First Name (field_person_first_name) */
  $handler->display->display_options['sorts']['field_person_first_name_value']['id'] = 'field_person_first_name_value';
  $handler->display->display_options['sorts']['field_person_first_name_value']['table'] = 'field_data_field_person_first_name';
  $handler->display->display_options['sorts']['field_person_first_name_value']['field'] = 'field_person_first_name_value';
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
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
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
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Upcoming School Visits and College Fairs</h2>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>Upcoming School Visits and College Fairs</h2>
<p>Currently, there are no upcoming events for the selected area.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_adm_event_date) */
  $handler->display->display_options['sorts']['field_adm_event_date_value']['id'] = 'field_adm_event_date_value';
  $handler->display->display_options['sorts']['field_adm_event_date_value']['table'] = 'field_data_field_adm_event_date';
  $handler->display->display_options['sorts']['field_adm_event_date_value']['field'] = 'field_adm_event_date_value';
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
    'admission_event' => 'admission_event',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
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
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $export['admission_recruitment_locations'] = $view;

  return $export;
}
