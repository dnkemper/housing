<?php

/**
 * @file
 * housing_llc.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function housing_llc_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'llc';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'LLC';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_llc_experiences_target_id' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_llc_interests_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_open_to_majors_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '0';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
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
    'llc' => 'llc',
  );
  /* Filter criterion: Content: Interests (field_llc_interests) */
  $handler->display->display_options['filters']['field_llc_interests_tid']['id'] = 'field_llc_interests_tid';
  $handler->display->display_options['filters']['field_llc_interests_tid']['table'] = 'field_data_field_llc_interests';
  $handler->display->display_options['filters']['field_llc_interests_tid']['field'] = 'field_llc_interests_tid';
  $handler->display->display_options['filters']['field_llc_interests_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_llc_interests_tid']['expose']['operator_id'] = 'field_llc_interests_tid_op';
  $handler->display->display_options['filters']['field_llc_interests_tid']['expose']['label'] = 'What are you interested in?';
  $handler->display->display_options['filters']['field_llc_interests_tid']['expose']['operator'] = 'field_llc_interests_tid_op';
  $handler->display->display_options['filters']['field_llc_interests_tid']['expose']['identifier'] = 'field_llc_interests_tid';
  $handler->display->display_options['filters']['field_llc_interests_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_llc_interests_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_llc_interests_tid']['vocabulary'] = 'llc_interests';

  /* Display: Block - all LLC with exposed filters */
  $handler = $view->new_display('block', 'Block - all LLC with exposed filters', 'llc_bef');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Open to (field_llc_open_to) */
  $handler->display->display_options['relationships']['field_llc_open_to_value']['id'] = 'field_llc_open_to_value';
  $handler->display->display_options['relationships']['field_llc_open_to_value']['table'] = 'field_data_field_llc_open_to';
  $handler->display->display_options['relationships']['field_llc_open_to_value']['field'] = 'field_llc_open_to_value';
  $handler->display->display_options['relationships']['field_llc_open_to_value']['delta'] = '-1';
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
    'llc' => 'llc',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Experiences (field_llc_experiences) */
  $handler->display->display_options['filters']['field_llc_experiences_target_id']['id'] = 'field_llc_experiences_target_id';
  $handler->display->display_options['filters']['field_llc_experiences_target_id']['table'] = 'field_data_field_llc_experiences';
  $handler->display->display_options['filters']['field_llc_experiences_target_id']['field'] = 'field_llc_experiences_target_id';
  $handler->display->display_options['filters']['field_llc_experiences_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_llc_experiences_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_llc_experiences_target_id']['expose']['operator_id'] = 'field_llc_experiences_target_id_op';
  $handler->display->display_options['filters']['field_llc_experiences_target_id']['expose']['label'] = 'Pick an Experience';
  $handler->display->display_options['filters']['field_llc_experiences_target_id']['expose']['operator'] = 'field_llc_experiences_target_id_op';
  $handler->display->display_options['filters']['field_llc_experiences_target_id']['expose']['identifier'] = 'field_llc_experiences_target_id';
  $handler->display->display_options['filters']['field_llc_experiences_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_llc_experiences_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  /* Filter criterion: Content: Interests (field_llc_interests) */
  $handler->display->display_options['filters']['field_llc_interests_tid']['id'] = 'field_llc_interests_tid';
  $handler->display->display_options['filters']['field_llc_interests_tid']['table'] = 'field_data_field_llc_interests';
  $handler->display->display_options['filters']['field_llc_interests_tid']['field'] = 'field_llc_interests_tid';
  $handler->display->display_options['filters']['field_llc_interests_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_llc_interests_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_llc_interests_tid']['expose']['operator_id'] = 'field_llc_interests_tid_op';
  $handler->display->display_options['filters']['field_llc_interests_tid']['expose']['label'] = 'What are you interested in?';
  $handler->display->display_options['filters']['field_llc_interests_tid']['expose']['operator'] = 'field_llc_interests_tid_op';
  $handler->display->display_options['filters']['field_llc_interests_tid']['expose']['identifier'] = 'field_llc_interests_tid';
  $handler->display->display_options['filters']['field_llc_interests_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_llc_interests_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_llc_interests_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_llc_interests_tid']['vocabulary'] = 'llc_interests';
  /* Filter criterion: Paragraphs item: Majors (field_open_to_majors) */
  $handler->display->display_options['filters']['field_open_to_majors_tid']['id'] = 'field_open_to_majors_tid';
  $handler->display->display_options['filters']['field_open_to_majors_tid']['table'] = 'field_data_field_open_to_majors';
  $handler->display->display_options['filters']['field_open_to_majors_tid']['field'] = 'field_open_to_majors_tid';
  $handler->display->display_options['filters']['field_open_to_majors_tid']['relationship'] = 'field_llc_open_to_value';
  $handler->display->display_options['filters']['field_open_to_majors_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_open_to_majors_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_open_to_majors_tid']['expose']['operator_id'] = 'field_open_to_majors_tid_op';
  $handler->display->display_options['filters']['field_open_to_majors_tid']['expose']['label'] = 'What are you majoring in?';
  $handler->display->display_options['filters']['field_open_to_majors_tid']['expose']['operator'] = 'field_open_to_majors_tid_op';
  $handler->display->display_options['filters']['field_open_to_majors_tid']['expose']['identifier'] = 'field_open_to_majors_tid';
  $handler->display->display_options['filters']['field_open_to_majors_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_open_to_majors_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_open_to_majors_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_open_to_majors_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_open_to_majors_tid']['vocabulary'] = 'llc_majors';

  /* Display: Block - LLC by location */
  $handler = $view->new_display('block', 'Block - LLC by location', 'llc_by_location');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['asnavfor_auto'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'location_llc';
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'title' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_llc_location_ref_target_id']['id'] = 'field_llc_location_ref_target_id';
  $handler->display->display_options['relationships']['field_llc_location_ref_target_id']['table'] = 'field_data_field_llc_location_ref';
  $handler->display->display_options['relationships']['field_llc_location_ref_target_id']['field'] = 'field_llc_location_ref_target_id';
  $handler->display->display_options['relationships']['field_llc_location_ref_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_llc_location_ref_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'location' => 'location',
  );
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
    'llc' => 'llc',
  );

  /* Display: Block - related LLCs */
  $handler = $view->new_display('block', 'Block - related LLCs', 'llc_related');
  $handler->display->display_options['display_description'] = 'Related LLCs by interest.';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['asnavfor_auto'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'location_llc';
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'title' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'llc' => 'llc',
  );
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Content: Experiences (field_llc_experiences) */
  $handler->display->display_options['arguments']['field_llc_experiences_target_id']['id'] = 'field_llc_experiences_target_id';
  $handler->display->display_options['arguments']['field_llc_experiences_target_id']['table'] = 'field_data_field_llc_experiences';
  $handler->display->display_options['arguments']['field_llc_experiences_target_id']['field'] = 'field_llc_experiences_target_id';
  $handler->display->display_options['arguments']['field_llc_experiences_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_llc_experiences_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_llc_experiences_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_llc_experiences_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_llc_experiences_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_llc_experiences_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_llc_experiences_target_id']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_llc_experiences_target_id']['validate_options']['vocabularies'] = array(
    'community_experiences' => 'community_experiences',
  );
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
    'llc' => 'llc',
  );
  $export['llc'] = $view;

  return $export;
}
