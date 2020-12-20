<?php
/**
 * @file
 * housing_paragraph.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function housing_paragraph_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__floorplan';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'view_mode_selector' => array(
        'custom_settings' => TRUE,
      ),
      'snp_img_gallery_masonry' => array(
        'custom_settings' => FALSE,
      ),
      'snp_img_gallery_slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'snp_section_image_left' => array(
        'custom_settings' => FALSE,
      ),
      'snp_section_image_right' => array(
        'custom_settings' => FALSE,
      ),
      'snp_section_full_width_background' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__floorplan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__housing_block';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'view_mode_selector' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'snp_img_gallery_masonry' => array(
        'custom_settings' => FALSE,
      ),
      'snp_img_gallery_slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'snp_section_image_left' => array(
        'custom_settings' => FALSE,
      ),
      'snp_section_image_right' => array(
        'custom_settings' => FALSE,
      ),
      'snp_section_full_width_background' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__housing_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__quote';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'snp_img_gallery_masonry' => array(
        'custom_settings' => FALSE,
      ),
      'snp_img_gallery_slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'snp_section_image_left' => array(
        'custom_settings' => FALSE,
      ),
      'snp_section_image_right' => array(
        'custom_settings' => FALSE,
      ),
      'snp_section_full_width_background' => array(
        'custom_settings' => FALSE,
      ),
      'view_mode_selector' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__quote'] = $strongarm;

  return $export;
}
