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
  /* Filter criterion: Content: Date - end date (field_adm_event_date:value2) */
  $handler->display->display_options['filters']['field_adm_event_date_value2']['id'] = 'field_adm_event_date_value2';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['table'] = 'field_data_field_adm_event_date';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['field'] = 'field_adm_event_date_value2';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['default_date'] = 'now';

  /* Display: Event Page */
  $handler = $view->new_display('page', 'Event Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'admissions/connect/events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Upcoming Events';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Event Block */
  $handler = $view->new_display('block', 'Event Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more events';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['link_url'] = 'admissions/connect/events/poop';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date - end date (field_adm_event_date:value2) */
  $handler->display->display_options['filters']['field_adm_event_date_value2']['id'] = 'field_adm_event_date_value2';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['table'] = 'field_data_field_adm_event_date';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['field'] = 'field_adm_event_date_value2';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_adm_event_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Geofield (field_adm_event_geofield) - proximity */
  $handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_adm_event_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
  $handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
    'distance' => '50',
    'distance2' => 200,
    'unit' => '3959',
    'origin' => array(
      'lat' => '40.0100923',
      'lon' => '-105.2487371',
    ),
  );
  $handler->display->display_options['filters']['field_geofield_distance']['group'] = 1;
  $handler->display->display_options['filters']['field_geofield_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator_id'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['label'] = 'Proximity';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['identifier'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    29 => 0,
    7 => 0,
    11 => 0,
    5 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_adm_event_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_adm_event_geofield';
  /* Filter criterion: Content: Address (field_person_address) */
  $handler->display->display_options['filters']['field_person_address_value']['id'] = 'field_person_address_value';
  $handler->display->display_options['filters']['field_person_address_value']['table'] = 'field_data_field_person_address';
  $handler->display->display_options['filters']['field_person_address_value']['field'] = 'field_person_address_value';
  $handler->display->display_options['filters']['field_person_address_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_person_address_value']['group'] = 1;
  $handler->display->display_options['filters']['field_person_address_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_person_address_value']['expose']['operator_id'] = 'field_person_address_value_op';
  $handler->display->display_options['filters']['field_person_address_value']['expose']['label'] = 'Address';
  $handler->display->display_options['filters']['field_person_address_value']['expose']['operator'] = 'field_person_address_value_op';
  $handler->display->display_options['filters']['field_person_address_value']['expose']['identifier'] = 'field_person_address_value';
  $handler->display->display_options['filters']['field_person_address_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    29 => 0,
    7 => 0,
    11 => 0,
    5 => 0,
    9 => 0,
  );

  /* Display: Domestic Freshman */
  $handler = $view->new_display('block', 'Domestic Freshman', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Find Your Counselor';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['row_options']['view_mode'] = 'full';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Locations: Domestic Freshman (field_lc_domestic_freshman) */
  $handler->display->display_options['filters']['field_lc_domestic_freshman_tid']['id'] = 'field_lc_domestic_freshman_tid';
  $handler->display->display_options['filters']['field_lc_domestic_freshman_tid']['table'] = 'field_data_field_lc_domestic_freshman';
  $handler->display->display_options['filters']['field_lc_domestic_freshman_tid']['field'] = 'field_lc_domestic_freshman_tid';
  $handler->display->display_options['filters']['field_lc_domestic_freshman_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lc_domestic_freshman_tid']['expose']['operator_id'] = 'field_lc_domestic_freshman_tid_op';
  $handler->display->display_options['filters']['field_lc_domestic_freshman_tid']['expose']['label'] = 'Select Your Location';
  $handler->display->display_options['filters']['field_lc_domestic_freshman_tid']['expose']['operator'] = 'field_lc_domestic_freshman_tid_op';
  $handler->display->display_options['filters']['field_lc_domestic_freshman_tid']['expose']['identifier'] = 'field_lc_domestic_freshman_tid';
  $handler->display->display_options['filters']['field_lc_domestic_freshman_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    29 => 0,
    7 => 0,
    11 => 0,
    5 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_lc_domestic_freshman_tid']['vocabulary'] = 'admissions_locations_domestic_freshman';

  /* Display: Counselors Page */
  $handler = $view->new_display('page', 'Counselors Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Find Your Counselor';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Select a location to find available counselors.';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no counselors assigned to the selected location or the location is not specific enough.';
  $handler->display->display_options['empty']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Address - Last name */
  $handler->display->display_options['sorts']['field_adm_event_address_last_name']['id'] = 'field_adm_event_address_last_name';
  $handler->display->display_options['sorts']['field_adm_event_address_last_name']['table'] = 'field_data_field_adm_event_address';
  $handler->display->display_options['sorts']['field_adm_event_address_last_name']['field'] = 'field_adm_event_address_last_name';
  /* Sort criterion: Content: Address - First name */
  $handler->display->display_options['sorts']['field_adm_event_address_first_name']['id'] = 'field_adm_event_address_first_name';
  $handler->display->display_options['sorts']['field_adm_event_address_first_name']['table'] = 'field_data_field_adm_event_address';
  $handler->display->display_options['sorts']['field_adm_event_address_first_name']['field'] = 'field_adm_event_address_first_name';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'admissions/connect/counselors';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Find Your Counselor';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Featured Events Block */
  $handler = $view->new_display('block', 'Featured Events Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Events';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date - end date (field_adm_event_date:value2) */
  $handler->display->display_options['filters']['field_adm_event_date_value2']['id'] = 'field_adm_event_date_value2';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['table'] = 'field_data_field_adm_event_date';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['field'] = 'field_adm_event_date_value2';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_adm_event_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Featured Event (field_adm_event_featured) */
  $handler->display->display_options['filters']['field_adm_event_featured_value']['id'] = 'field_adm_event_featured_value';
  $handler->display->display_options['filters']['field_adm_event_featured_value']['table'] = 'field_data_field_adm_event_featured';
  $handler->display->display_options['filters']['field_adm_event_featured_value']['field'] = 'field_adm_event_featured_value';
  $handler->display->display_options['filters']['field_adm_event_featured_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_adm_event_featured_value']['group'] = 1;
  /* Filter criterion: Content: Address (field_person_address) */
  $handler->display->display_options['filters']['field_person_address_value']['id'] = 'field_person_address_value';
  $handler->display->display_options['filters']['field_person_address_value']['table'] = 'field_data_field_person_address';
  $handler->display->display_options['filters']['field_person_address_value']['field'] = 'field_person_address_value';
  $handler->display->display_options['filters']['field_person_address_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_person_address_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_person_address_value']['expose']['operator_id'] = 'field_person_address_value_op';
  $handler->display->display_options['filters']['field_person_address_value']['expose']['label'] = 'Address';
  $handler->display->display_options['filters']['field_person_address_value']['expose']['operator'] = 'field_person_address_value_op';
  $handler->display->display_options['filters']['field_person_address_value']['expose']['identifier'] = 'field_person_address_value';
  $handler->display->display_options['filters']['field_person_address_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    29 => 0,
    7 => 0,
    11 => 0,
    5 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Geofield (field_adm_event_geofield) - proximity */
  $handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_adm_event_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
  $handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
    'distance' => '100',
    'distance2' => 200,
    'unit' => '3959',
    'origin' => array(
      'lat' => '',
      'lon' => '',
    ),
  );
  $handler->display->display_options['filters']['field_geofield_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator_id'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['label'] = 'Proximity';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['identifier'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    29 => 0,
    7 => 0,
    11 => 0,
    5 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_adm_event_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_adm_event_geofield';

  /* Display: Domestic Transfer */
  $handler = $view->new_display('block', 'Domestic Transfer', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Find Your Counselor';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['row_options']['view_mode'] = 'full';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Locations: Domestic Transfer (field_lc_domestic_transfer) */
  $handler->display->display_options['filters']['field_lc_domestic_transfer_tid']['id'] = 'field_lc_domestic_transfer_tid';
  $handler->display->display_options['filters']['field_lc_domestic_transfer_tid']['table'] = 'field_data_field_lc_domestic_transfer';
  $handler->display->display_options['filters']['field_lc_domestic_transfer_tid']['field'] = 'field_lc_domestic_transfer_tid';
  $handler->display->display_options['filters']['field_lc_domestic_transfer_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lc_domestic_transfer_tid']['expose']['operator_id'] = 'field_lc_domestic_transfer_tid_op';
  $handler->display->display_options['filters']['field_lc_domestic_transfer_tid']['expose']['label'] = 'Select Your Location';
  $handler->display->display_options['filters']['field_lc_domestic_transfer_tid']['expose']['operator'] = 'field_lc_domestic_transfer_tid_op';
  $handler->display->display_options['filters']['field_lc_domestic_transfer_tid']['expose']['identifier'] = 'field_lc_domestic_transfer_tid';
  $handler->display->display_options['filters']['field_lc_domestic_transfer_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    29 => 0,
    7 => 0,
    11 => 0,
    5 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_lc_domestic_transfer_tid']['vocabulary'] = 'admissions_locations_domestic_transfer';

  /* Display: International Graduate */
  $handler = $view->new_display('block', 'International Graduate', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Find Your Counselor';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['row_options']['view_mode'] = 'full';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Locations: International Graduate (field_lc_international_graduate) */
  $handler->display->display_options['filters']['field_lc_international_graduate_tid']['id'] = 'field_lc_international_graduate_tid';
  $handler->display->display_options['filters']['field_lc_international_graduate_tid']['table'] = 'field_data_field_lc_international_graduate';
  $handler->display->display_options['filters']['field_lc_international_graduate_tid']['field'] = 'field_lc_international_graduate_tid';
  $handler->display->display_options['filters']['field_lc_international_graduate_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lc_international_graduate_tid']['expose']['operator_id'] = 'field_lc_international_graduate_tid_op';
  $handler->display->display_options['filters']['field_lc_international_graduate_tid']['expose']['label'] = 'Select Your Location';
  $handler->display->display_options['filters']['field_lc_international_graduate_tid']['expose']['operator'] = 'field_lc_international_graduate_tid_op';
  $handler->display->display_options['filters']['field_lc_international_graduate_tid']['expose']['identifier'] = 'field_lc_international_graduate_tid';
  $handler->display->display_options['filters']['field_lc_international_graduate_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    29 => 0,
    7 => 0,
    11 => 0,
    5 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_lc_international_graduate_tid']['vocabulary'] = 'admissions_locations_international_graduate';

  /* Display: International Undergraduate */
  $handler = $view->new_display('block', 'International Undergraduate', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Find Your Counselor';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['row_options']['view_mode'] = 'full';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Locations: International Undergrad (field_lc_international_undergrad) */
  $handler->display->display_options['filters']['field_lc_international_undergrad_tid']['id'] = 'field_lc_international_undergrad_tid';
  $handler->display->display_options['filters']['field_lc_international_undergrad_tid']['table'] = 'field_data_field_lc_international_undergrad';
  $handler->display->display_options['filters']['field_lc_international_undergrad_tid']['field'] = 'field_lc_international_undergrad_tid';
  $handler->display->display_options['filters']['field_lc_international_undergrad_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lc_international_undergrad_tid']['expose']['operator_id'] = 'field_lc_international_undergrad_tid_op';
  $handler->display->display_options['filters']['field_lc_international_undergrad_tid']['expose']['label'] = 'Select Your Location';
  $handler->display->display_options['filters']['field_lc_international_undergrad_tid']['expose']['operator'] = 'field_lc_international_undergrad_tid_op';
  $handler->display->display_options['filters']['field_lc_international_undergrad_tid']['expose']['identifier'] = 'field_lc_international_undergrad_tid';
  $handler->display->display_options['filters']['field_lc_international_undergrad_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    29 => 0,
    7 => 0,
    11 => 0,
    5 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_lc_international_undergrad_tid']['vocabulary'] = 'admissions_locations_international_undergrad';
  $export['admission_events_and_counselors'] = $view;

  $view = new view();
  $view->name = 'admission_events_and_counselors_geolocation_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admission Events and Counselors - Geolocation View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Admission Events';
  $handler->display->display_options['css_class'] = 'admissions-geolocation-view';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date - end date (field_adm_event_date:value2) */
  $handler->display->display_options['filters']['field_adm_event_date_value2']['id'] = 'field_adm_event_date_value2';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['table'] = 'field_data_field_adm_event_date';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['field'] = 'field_adm_event_date_value2';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_adm_event_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Geofield (field_adm_event_geofield) - proximity */
  $handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_adm_event_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
  $handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
    'distance' => '50',
    'distance2' => 200,
    'unit' => '3959',
    'origin' => array(
      'lat' => '',
      'lon' => '',
    ),
  );
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_adm_event_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_adm_event_geofield';

  /* Display: Event Page */
  $handler = $view->new_display('page', 'Event Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'admissions/connect/events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Upcoming Events';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Event Block */
  $handler = $view->new_display('block', 'Event Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more events';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date - end date (field_adm_event_date:value2) */
  $handler->display->display_options['filters']['field_adm_event_date_value2']['id'] = 'field_adm_event_date_value2';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['table'] = 'field_data_field_adm_event_date';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['field'] = 'field_adm_event_date_value2';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_adm_event_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Geofield (field_adm_event_geofield) - proximity */
  $handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_adm_event_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
  $handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
    'distance' => '50',
    'distance2' => 200,
    'unit' => '3959',
    'origin' => array(
      'lat' => '',
      'lon' => '',
    ),
  );
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_adm_event_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_adm_event_geofield';

  /* Display: Featured Events Block */
  $handler = $view->new_display('block', 'Featured Events Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more events';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date - end date (field_adm_event_date:value2) */
  $handler->display->display_options['filters']['field_adm_event_date_value2']['id'] = 'field_adm_event_date_value2';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['table'] = 'field_data_field_adm_event_date';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['field'] = 'field_adm_event_date_value2';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_adm_event_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_adm_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Geofield (field_adm_event_geofield) - proximity */
  $handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_adm_event_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
  $handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
    'distance' => '50',
    'distance2' => 200,
    'unit' => '3959',
    'origin' => array(
      'lat' => '',
      'lon' => '',
    ),
  );
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_adm_event_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_adm_event_geofield';
  /* Filter criterion: Content: Featured Event (field_adm_event_featured) */
  $handler->display->display_options['filters']['field_adm_event_featured_value']['id'] = 'field_adm_event_featured_value';
  $handler->display->display_options['filters']['field_adm_event_featured_value']['table'] = 'field_data_field_adm_event_featured';
  $handler->display->display_options['filters']['field_adm_event_featured_value']['field'] = 'field_adm_event_featured_value';
  $handler->display->display_options['filters']['field_adm_event_featured_value']['value'] = array(
    1 => '1',
  );
  $export['admission_events_and_counselors_geolocation_view'] = $view;

  return $export;
}
