<?php
/**
 * @file
 * housing_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function housing_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-field_snp_content_blocks'.
  $field_instances['node-page-field_snp_content_blocks'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'view_mode_selector',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_snp_content_blocks',
    'label' => 'Content Blocks',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'floorplan' => -1,
        'jumbotron' => -1,
        'open_to' => -1,
        'person_grid' => -1,
        'quote' => -1,
        'snp_accordion' => -1,
        'snp_accordion_item' => -1,
        'snp_image_gallery' => -1,
        'snp_section' => 'snp_section',
        'snp_textarea' => -1,
      ),
      'bundle_weights' => array(
        'floorplan' => 2,
        'jumbotron' => 3,
        'open_to' => 4,
        'person_grid' => 5,
        'quote' => 6,
        'snp_accordion' => 7,
        'snp_accordion_item' => 8,
        'snp_image_gallery' => 9,
        'snp_section' => 10,
        'snp_textarea' => 11,
      ),
      'default_edit_mode' => 'preview',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Blocks');

  return $field_instances;
}
