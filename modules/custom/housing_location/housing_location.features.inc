<?php

/**
 * @file
 * housing_location.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function housing_location_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function housing_location_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function housing_location_image_default_styles() {
  $styles = array();

  // Exported image style: location_slideshow.
  $styles['location_slideshow'] = array(
    'label' => 'Location Slideshow',
    'effects' => array(
      6 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 450,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: pano.
  $styles['pano'] = array(
    'label' => 'Pano',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 4000,
          'height' => 3000,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function housing_location_node_info() {
  $items = array(
    'location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => t('Use <em>location</em> to create landing pages for residence halls and rentals with images, locations, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
