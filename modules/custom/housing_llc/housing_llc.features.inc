<?php

/**
 * @file
 * housing_llc.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function housing_llc_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function housing_llc_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function housing_llc_node_info() {
  $items = array(
    'llc' => array(
      'name' => t('Living Learning Community'),
      'base' => 'node_content',
      'description' => t('Use <em>Living Learning Community</em> to describe an LLC.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
