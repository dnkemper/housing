<?php
/**
 * @file
 * housing_core.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function housing_core_image_default_styles() {
  $styles = array();

  // Exported image style: edge_to_edge_large.
  $styles['edge_to_edge_large'] = array(
    'label' => 'Edge to edge large',
    'effects' => array(
      1 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 2600,
          'height' => 600,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: xlarge.
  $styles['xlarge'] = array(
    'label' => 'Extra Large',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1000,
          'height' => 1000,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
