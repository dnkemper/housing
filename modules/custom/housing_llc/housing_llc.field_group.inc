<?php

/**
 * @file
 * housing_llc.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function housing_llc_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_1|node|llc|full';
  $field_group->group_name = 'group_col_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'llc';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row_1';
  $field_group->data = array(
    'label' => 'Column Main',
    'weight' => '17',
    'children' => array(
      0 => 'body',
      1 => 'field_llc_quotes',
      2 => 'field_llc_course',
      3 => 'field_llc_open_to',
      4 => 'field_llc_contact_ref',
      5 => 'field_llc_video',
      6 => 'llc_related',
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
  $field_groups['group_col_1|node|llc|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_2|node|llc|full';
  $field_group->group_name = 'group_col_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'llc';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row_1';
  $field_group->data = array(
    'label' => 'Column Sidebar',
    'weight' => '19',
    'children' => array(
      0 => 'field_llc_location_ref',
      1 => 'field_llc_campus_partners',
      2 => 'llc_action_items',
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
  $field_groups['group_col_2|node|llc|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_llc_general|node|llc|form';
  $field_group->group_name = 'group_llc_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'llc';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_llc_interests',
      2 => 'field_llc_location_ref',
      3 => 'field_llc_quotes',
      4 => 'field_llc_course',
      5 => 'field_llc_open_to',
      6 => 'field_llc_contact_ref',
      7 => 'field_llc_images',
      8 => 'field_llc_experiences',
      9 => 'field_llc_video',
      10 => 'field_llc_campus_partners',
      11 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-llc-general field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_llc_general|node|llc|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_1|node|llc|full';
  $field_group->group_name = 'group_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'llc';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Row',
    'weight' => '14',
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
  $field_groups['group_row_1|node|llc|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Column Main');
  t('Column Sidebar');
  t('General');
  t('Row');

  return $field_groups;
}
