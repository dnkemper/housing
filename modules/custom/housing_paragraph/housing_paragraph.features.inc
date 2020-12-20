<?php
/**
 * @file
 * housing_paragraph.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function housing_paragraph_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function housing_paragraph_image_default_styles() {
  $styles = array();

  // Exported image style: quote_photo.
  $styles['quote_photo'] = array(
    'label' => 'Quote photo',
    'effects' => array(
      2 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 130,
          'height' => 130,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_paragraphs_info().
 */
function housing_paragraph_paragraphs_info() {
  $items = array(
    'floorplan' => array(
      'name' => 'Floorplan',
      'bundle' => 'floorplan',
      'locked' => '1',
    ),
    'housing_block' => array(
      'name' => 'Block',
      'bundle' => 'housing_block',
      'locked' => '1',
    ),
    'open_to' => array(
      'name' => 'Open to',
      'bundle' => 'open_to',
      'locked' => '1',
    ),
    'person_grid' => array(
      'name' => 'Person grid',
      'bundle' => 'person_grid',
      'locked' => '1',
    ),
    'quote' => array(
      'name' => 'Quote',
      'bundle' => 'quote',
      'locked' => '1',
    ),
  );
  return $items;
}
