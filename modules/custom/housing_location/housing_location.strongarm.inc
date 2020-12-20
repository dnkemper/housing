<?php

/**
 * @file
 * housing_location.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function housing_location_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_location';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_location';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_location';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__location';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '5',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'redirect' => array(
          'weight' => '6',
        ),
        'xmlsitemap' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'llc' => array(
          'default' => array(
            'weight' => '27',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '24',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
        'location_involved' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '108',
            'visible' => TRUE,
          ),
        ),
        'location_llc' => array(
          'default' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
        ),
        'location_touch' => array(
          'full' => array(
            'weight' => '109',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '25',
            'visible' => TRUE,
          ),
        ),
        'location_getting_around_bongo' => array(
          'full' => array(
            'weight' => '17',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '21',
            'visible' => TRUE,
          ),
        ),
        'location_social_media' => array(
          'full' => array(
            'weight' => '99',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '24',
            'visible' => TRUE,
          ),
        ),
        'location_menu_dining_link' => array(
          'full' => array(
            'weight' => '110',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '23',
            'visible' => TRUE,
          ),
        ),
        'location_maps_link' => array(
          'full' => array(
            'weight' => '111',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '22',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_location';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_location';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_location';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_location';
  $strongarm->value = '0';
  $export['node_preview_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_location';
  $strongarm->value = 0;
  $export['node_submitted_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_location';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_location'] = $strongarm;

  return $export;
}
