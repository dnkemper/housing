<?php

/**
 * @file
 * housing_location.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function housing_location_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_1|node|location|full';
  $field_group->group_name = 'group_col_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row_1';
  $field_group->data = array(
    'label' => 'Column Main',
    'weight' => '46',
    'children' => array(
      0 => 'body',
      1 => 'field_location_floorplans',
      2 => 'field_location_amenities',
      3 => 'field_location_furnishings',
      4 => 'field_location_room_tour_video',
      5 => 'field_location_person_ref',
      6 => 'location_getting_around_bongo',
      7 => 'location_llc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column Main',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col-1 field-group-div col-md-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col_1|node|location|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_2|node|location|full';
  $field_group->group_name = 'group_col_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row_1';
  $field_group->data = array(
    'label' => 'Column Sidebar',
    'weight' => '47',
    'children' => array(
      0 => 'field_location_type',
      1 => 'field_location_population',
      2 => 'field_location_year_built',
      3 => 'field_location_front_desk',
      4 => 'field_location_laundry',
      5 => 'field_location_neighborhood',
      6 => 'field_location_gallery',
      7 => 'field_location_desk_hours',
      8 => 'location_maps_link',
      9 => 'location_involved',
      10 => 'location_menu_dining_link',
      11 => 'location_social_media',
      12 => 'location_touch',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column Sidebar',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col-2 field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col_2|node|location|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container_1|node|location|full';
  $field_group->group_name = 'group_container_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '1',
    'children' => array(
      0 => 'group_row_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-container-1 field-group-div container-smooth',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_container_1|node|location|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_general|node|location|form';
  $field_group->group_name = 'group_location_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_location_hashtag',
      2 => 'field_location_type',
      3 => 'field_location_year_built',
      4 => 'field_location_floorplans',
      5 => 'field_location_amenities',
      6 => 'field_location_furnishings',
      7 => 'field_location_front_desk',
      8 => 'field_location_images',
      9 => 'field_location_room_tour_video',
      10 => 'field_location_laundry',
      11 => 'field_location_neighborhood',
      12 => 'field_location_gallery',
      13 => 'field_location_front_desk_hours',
      14 => 'field_location_desk_hours',
      15 => 'title',
      16 => 'group_location_population',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location_general|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_getting_around|node|location|form';
  $field_group->group_name = 'group_location_getting_around';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Getting Around',
    'weight' => '2',
    'children' => array(
      0 => 'field_location_map',
      1 => 'field_location_getting_around',
      2 => 'field_location_bongo',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location-getting-around field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location_getting_around|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_meet_us|node|location|form';
  $field_group->group_name = 'group_location_meet_us';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meet Us',
    'weight' => '4',
    'children' => array(
      0 => 'field_location_person_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location-meet-us field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location_meet_us|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_population|node|location|form';
  $field_group->group_name = 'group_location_population';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_location_general';
  $field_group->data = array(
    'label' => 'Population',
    'weight' => '7',
    'children' => array(
      0 => 'field_location_population',
      1 => 'field_location_population_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Population',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-location-population field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_location_population|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_table|node|location|form';
  $field_group->group_name = 'group_location_table';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Table',
    'weight' => '1',
    'children' => array(
      0 => 'field_location_population',
      1 => 'field_location_year_built',
      2 => 'field_location_amenities',
      3 => 'field_location_furnishings',
      4 => 'field_location_front_desk',
      5 => 'field_location_laundry',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location_table|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_1|node|location|default';
  $field_group->group_name = 'group_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_container_1';
  $field_group->data = array(
    'label' => 'Row',
    'weight' => '3',
    'children' => array(
      0 => 'group_col_1',
      1 => 'group_col_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row-1 field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row_1|node|location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_1|node|location|full';
  $field_group->group_name = 'group_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_container_1';
  $field_group->data = array(
    'label' => 'Row',
    'weight' => '2',
    'children' => array(
      0 => 'group_col_1',
      1 => 'group_col_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row-1 field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row_1|node|location|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Column Main');
  t('Column Sidebar');
  t('Container');
  t('General');
  t('Getting Around');
  t('Meet Us');
  t('Population');
  t('Row');
  t('Table');

  return $field_groups;
}
