<?php
/**
 * @file
 * housing_person.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function housing_person_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_general|node|person|form';
  $field_group->group_name = 'group_person_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '3',
    'children' => array(
      0 => 'field_person_email',
      1 => 'field_person_first_name',
      2 => 'field_person_gender_pronoun',
      3 => 'field_person_last_name',
      4 => 'field_person_location',
      5 => 'field_person_phone',
      6 => 'field_person_photo',
      7 => 'field_person_title',
      8 => 'field_person_how_can_i_help',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-general field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_person_general|node|person|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('General');

  return $field_groups;
}
