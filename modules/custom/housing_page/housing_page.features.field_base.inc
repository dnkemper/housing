<?php
/**
 * @file
 * housing_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function housing_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_snp_content_blocks'.
  $field_bases['field_snp_content_blocks'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_snp_content_blocks',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  return $field_bases;
}
