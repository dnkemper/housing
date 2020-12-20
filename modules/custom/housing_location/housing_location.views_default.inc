<?php

/**
 * @file
 * housing_location.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function housing_location_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'location';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Location';
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
    'field_location_type_value' => array(
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
    'field_location_neighborhood_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
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
    'field_floorplan_type_target_id' => array(
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
    'field_location_amenities_tid' => array(
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
    'field_location_furnishings_tid' => array(
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
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
    'location' => 'location',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Building type (field_location_type) */
  $handler->display->display_options['filters']['field_location_type_value']['id'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['filters']['field_location_type_value']['field'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_location_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_type_value']['expose']['operator_id'] = 'field_location_type_value_op';
  $handler->display->display_options['filters']['field_location_type_value']['expose']['label'] = 'Building type';
  $handler->display->display_options['filters']['field_location_type_value']['expose']['operator'] = 'field_location_type_value_op';
  $handler->display->display_options['filters']['field_location_type_value']['expose']['identifier'] = 'field_location_type_value';
  $handler->display->display_options['filters']['field_location_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_location_type_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Neighborhood (field_location_neighborhood) */
  $handler->display->display_options['filters']['field_location_neighborhood_value']['id'] = 'field_location_neighborhood_value';
  $handler->display->display_options['filters']['field_location_neighborhood_value']['table'] = 'field_data_field_location_neighborhood';
  $handler->display->display_options['filters']['field_location_neighborhood_value']['field'] = 'field_location_neighborhood_value';
  $handler->display->display_options['filters']['field_location_neighborhood_value']['group'] = 1;
  $handler->display->display_options['filters']['field_location_neighborhood_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_neighborhood_value']['expose']['operator_id'] = 'field_location_neighborhood_value_op';
  $handler->display->display_options['filters']['field_location_neighborhood_value']['expose']['label'] = 'Neighborhood';
  $handler->display->display_options['filters']['field_location_neighborhood_value']['expose']['operator'] = 'field_location_neighborhood_value_op';
  $handler->display->display_options['filters']['field_location_neighborhood_value']['expose']['identifier'] = 'field_location_neighborhood_value';
  $handler->display->display_options['filters']['field_location_neighborhood_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_neighborhood_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_location_neighborhood_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Paragraphs item: Type (field_floorplan_type) */
  $handler->display->display_options['filters']['field_floorplan_type_target_id']['id'] = 'field_floorplan_type_target_id';
  $handler->display->display_options['filters']['field_floorplan_type_target_id']['table'] = 'field_data_field_floorplan_type';
  $handler->display->display_options['filters']['field_floorplan_type_target_id']['field'] = 'field_floorplan_type_target_id';
  $handler->display->display_options['filters']['field_floorplan_type_target_id']['relationship'] = 'field_location_floorplans_value';
  $handler->display->display_options['filters']['field_floorplan_type_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_floorplan_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_floorplan_type_target_id']['expose']['operator_id'] = 'field_floorplan_type_target_id_op';
  $handler->display->display_options['filters']['field_floorplan_type_target_id']['expose']['label'] = 'Room Type';
  $handler->display->display_options['filters']['field_floorplan_type_target_id']['expose']['operator'] = 'field_floorplan_type_target_id_op';
  $handler->display->display_options['filters']['field_floorplan_type_target_id']['expose']['identifier'] = 'field_floorplan_type_target_id';
  $handler->display->display_options['filters']['field_floorplan_type_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_floorplan_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  /* Filter criterion: Content: Amenities (field_location_amenities) */
  $handler->display->display_options['filters']['field_location_amenities_tid']['id'] = 'field_location_amenities_tid';
  $handler->display->display_options['filters']['field_location_amenities_tid']['table'] = 'field_data_field_location_amenities';
  $handler->display->display_options['filters']['field_location_amenities_tid']['field'] = 'field_location_amenities_tid';
  $handler->display->display_options['filters']['field_location_amenities_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_location_amenities_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_amenities_tid']['expose']['operator_id'] = 'field_location_amenities_tid_op';
  $handler->display->display_options['filters']['field_location_amenities_tid']['expose']['label'] = 'Amenities';
  $handler->display->display_options['filters']['field_location_amenities_tid']['expose']['operator'] = 'field_location_amenities_tid_op';
  $handler->display->display_options['filters']['field_location_amenities_tid']['expose']['identifier'] = 'field_location_amenities_tid';
  $handler->display->display_options['filters']['field_location_amenities_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_amenities_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_location_amenities_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_location_amenities_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_amenities_tid']['vocabulary'] = 'location_amenities';
  /* Filter criterion: Content: Furnishings (field_location_furnishings) */
  $handler->display->display_options['filters']['field_location_furnishings_tid']['id'] = 'field_location_furnishings_tid';
  $handler->display->display_options['filters']['field_location_furnishings_tid']['table'] = 'field_data_field_location_furnishings';
  $handler->display->display_options['filters']['field_location_furnishings_tid']['field'] = 'field_location_furnishings_tid';
  $handler->display->display_options['filters']['field_location_furnishings_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_location_furnishings_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_furnishings_tid']['expose']['operator_id'] = 'field_location_furnishings_tid_op';
  $handler->display->display_options['filters']['field_location_furnishings_tid']['expose']['label'] = 'Furnishings';
  $handler->display->display_options['filters']['field_location_furnishings_tid']['expose']['operator'] = 'field_location_furnishings_tid_op';
  $handler->display->display_options['filters']['field_location_furnishings_tid']['expose']['identifier'] = 'field_location_furnishings_tid';
  $handler->display->display_options['filters']['field_location_furnishings_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_furnishings_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_location_furnishings_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_location_furnishings_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_furnishings_tid']['vocabulary'] = 'location_furnishings';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'location_bef');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Floorplans (field_location_floorplans) */
  $handler->display->display_options['relationships']['field_location_floorplans_value']['id'] = 'field_location_floorplans_value';
  $handler->display->display_options['relationships']['field_location_floorplans_value']['table'] = 'field_data_field_location_floorplans';
  $handler->display->display_options['relationships']['field_location_floorplans_value']['field'] = 'field_location_floorplans_value';
  $handler->display->display_options['relationships']['field_location_floorplans_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_floorplan_type_target_id']['id'] = 'field_floorplan_type_target_id';
  $handler->display->display_options['relationships']['field_floorplan_type_target_id']['table'] = 'field_data_field_floorplan_type';
  $handler->display->display_options['relationships']['field_floorplan_type_target_id']['field'] = 'field_floorplan_type_target_id';
  $handler->display->display_options['relationships']['field_floorplan_type_target_id']['relationship'] = 'field_location_floorplans_value';
  $handler->display->display_options['relationships']['field_floorplan_type_target_id']['required'] = TRUE;
  $export['location'] = $view;

  return $export;
}
