<?php

function cuhomepage_form_system_theme_settings_alter(&$form, &$form_state) {
  $theme = $form_state['build_info']['args'][0];
	$form['cuhomepage_theme_settings'] = array(
		'#type' => 'fieldset', 
		'#title' => t('Modern Theme Settings'), 
		'#collapsible' => TRUE, 
		'#collapsed' => TRUE,
	);
	
	$form['cuhomepage_theme_settings']['layout_style'] = array(
	  '#type' => 'radios', 
	  '#title' => t('Layout Style'), 
	  '#default_value' => theme_get_setting('layout_style', 'cuhomepage') ? theme_get_setting('layout_style', 'cuhomepage') : 'layout-wide', 
	  '#description' => t('Pick a layout style for your site.'),
	  '#options' => array(
      'layout-wide' => t('Wide'),
      'layout-boxed' => t('Boxed'),
    ),
	);
	
	$form['cuhomepage_theme_settings']['banner_color'] = array(
	  '#type' => 'radios', 
	  '#title' => t('Banner Color'), 
	  '#default_value' => theme_get_setting('banner_color', 'cuhomepage') ? theme_get_setting('banner_color', 'cuhomepage') : 'black', 
	  '#description' => t('Pick a banner color for your site.'),
	  '#options' => array(
      'white' => t('White'),
      'black' => t('Black'),
    ),
	);
}