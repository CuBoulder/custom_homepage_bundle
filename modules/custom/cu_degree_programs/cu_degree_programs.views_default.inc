<?php
/**
 * @file
 * cu_degree_programs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cu_degree_programs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'degree_programs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Degree Programs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Degree Programs';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Additional options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_degree_prog_career_int_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_degree_prog_category_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_degree_prog_college_school_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'wysiwyg';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'degree_program' => 'degree_program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Career Interest (field_degree_prog_career_int) */
  $handler->display->display_options['filters']['field_degree_prog_career_int_tid']['id'] = 'field_degree_prog_career_int_tid';
  $handler->display->display_options['filters']['field_degree_prog_career_int_tid']['table'] = 'field_data_field_degree_prog_career_int';
  $handler->display->display_options['filters']['field_degree_prog_career_int_tid']['field'] = 'field_degree_prog_career_int_tid';
  $handler->display->display_options['filters']['field_degree_prog_career_int_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_degree_prog_career_int_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_degree_prog_career_int_tid']['expose']['operator_id'] = 'field_degree_prog_career_int_tid_op';
  $handler->display->display_options['filters']['field_degree_prog_career_int_tid']['expose']['label'] = 'Career Interest';
  $handler->display->display_options['filters']['field_degree_prog_career_int_tid']['expose']['operator'] = 'field_degree_prog_career_int_tid_op';
  $handler->display->display_options['filters']['field_degree_prog_career_int_tid']['expose']['identifier'] = 'field_degree_prog_career_int_tid';
  $handler->display->display_options['filters']['field_degree_prog_career_int_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    11 => 0,
    5 => 0,
    9 => 0,
    18 => 0,
  );
  $handler->display->display_options['filters']['field_degree_prog_career_int_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_degree_prog_career_int_tid']['vocabulary'] = 'career_interests';
  /* Filter criterion: Content: Category (field_degree_prog_category) */
  $handler->display->display_options['filters']['field_degree_prog_category_tid']['id'] = 'field_degree_prog_category_tid';
  $handler->display->display_options['filters']['field_degree_prog_category_tid']['table'] = 'field_data_field_degree_prog_category';
  $handler->display->display_options['filters']['field_degree_prog_category_tid']['field'] = 'field_degree_prog_category_tid';
  $handler->display->display_options['filters']['field_degree_prog_category_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_degree_prog_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_degree_prog_category_tid']['expose']['operator_id'] = 'field_degree_prog_category_tid_op';
  $handler->display->display_options['filters']['field_degree_prog_category_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_degree_prog_category_tid']['expose']['operator'] = 'field_degree_prog_category_tid_op';
  $handler->display->display_options['filters']['field_degree_prog_category_tid']['expose']['identifier'] = 'field_degree_prog_category_tid';
  $handler->display->display_options['filters']['field_degree_prog_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    11 => 0,
    5 => 0,
    9 => 0,
    18 => 0,
  );
  $handler->display->display_options['filters']['field_degree_prog_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_degree_prog_category_tid']['vocabulary'] = 'categories';
  /* Filter criterion: Content: College or School (field_degree_prog_college_school) */
  $handler->display->display_options['filters']['field_degree_prog_college_school_tid']['id'] = 'field_degree_prog_college_school_tid';
  $handler->display->display_options['filters']['field_degree_prog_college_school_tid']['table'] = 'field_data_field_degree_prog_college_school';
  $handler->display->display_options['filters']['field_degree_prog_college_school_tid']['field'] = 'field_degree_prog_college_school_tid';
  $handler->display->display_options['filters']['field_degree_prog_college_school_tid']['value'] = array(
    270 => '270',
  );
  $handler->display->display_options['filters']['field_degree_prog_college_school_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_degree_prog_college_school_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_degree_prog_college_school_tid']['expose']['operator_id'] = 'field_degree_prog_college_school_tid_op';
  $handler->display->display_options['filters']['field_degree_prog_college_school_tid']['expose']['label'] = 'College or School';
  $handler->display->display_options['filters']['field_degree_prog_college_school_tid']['expose']['operator'] = 'field_degree_prog_college_school_tid_op';
  $handler->display->display_options['filters']['field_degree_prog_college_school_tid']['expose']['identifier'] = 'field_degree_prog_college_school_tid';
  $handler->display->display_options['filters']['field_degree_prog_college_school_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    11 => 0,
    5 => 0,
    9 => 0,
    28 => 0,
  );
  $handler->display->display_options['filters']['field_degree_prog_college_school_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_degree_prog_college_school_tid']['vocabulary'] = 'college_school';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'academics/programs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Find Majors & Programs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['degree_programs'] = $view;

  return $export;
}
