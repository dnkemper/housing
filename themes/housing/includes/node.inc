<?php

/**
 * @file
 * Theme and preprocess functions for nodes.
 */

 /**
  * Implements hook_preprocess_node().
  */
function housing_preprocess_node(&$vars) {
  // Add theme hook suggestion for view mode.
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];

  $vars['classes_array'][] = 'node--' . $vars['type'] . '--' . $vars['view_mode'];

  // Add node-title to header.
  $vars['title_attributes_array']['class'][] = 'node-title';

  switch ($vars['type']) {
    case 'llc':
      if ($vars['view_mode'] == 'full') {
        // Hide field_location_images. We print these in page.tpl.php.
        hide($vars['content']['field_llc_images']);
      }

      if ($vars['view_mode'] == 'teaser') {
        $vars['title_attributes_array']['class'] = array('panel-title');
        $vars['classes_array'][] = 'panel';
        $vars['classes_array'][] = 'panel-default';

        if (isset($vars['field_llc_images'], $vars['field_llc_images'][LANGUAGE_NONE], $vars['field_llc_images'][LANGUAGE_NONE][0])) {

          $markup = array(
            '#type' => 'container',
            '#attributes' => array(
              'class' => 'location-teaser-image',
            ),
            'image' => array(
              '#theme' => 'image_formatter',
              '#item' => array(
                'uri' => $vars['field_llc_images'][LANGUAGE_NONE][0]['uri'],
                'alt' => $vars['field_llc_images'][LANGUAGE_NONE][0]['alt'],
                'title' => $vars['field_llc_images'][LANGUAGE_NONE][0]['title'],
              ),
              '#image_style' => 'snp_card_grid',
              '#path' => array(
                'path' => 'node/' . $vars['nid'],
              ),
            ),
          );

          $vars['content']['field_llc_images'] = $markup;
        }
      }

      break;

    case 'location':
      if ($vars['view_mode'] == 'full') {
        // Hide field_location_images. We print these in page.tpl.php.
        hide($vars['content']['field_location_images']);
      }
      if ($vars['view_mode'] == 'teaser') {
        $vars['title_attributes_array']['class'] = array('panel-title');
        $vars['classes_array'][] = 'panel';
        $vars['classes_array'][] = 'panel-default';

        if (isset($vars['field_location_images'], $vars['field_location_images'][LANGUAGE_NONE], $vars['field_location_images'][LANGUAGE_NONE][0])) {

          $markup = array(
            '#type' => 'container',
            '#attributes' => array(
              'class' => 'location-teaser-image',
            ),
            'image' => array(
              '#theme' => 'image_formatter',
              '#item' => array(
                'uri' => $vars['field_location_images'][LANGUAGE_NONE][0]['uri'],
                'alt' => $vars['field_location_images'][LANGUAGE_NONE][0]['alt'],
                'title' => $vars['field_location_images'][LANGUAGE_NONE][0]['title'],
              ),
              '#image_style' => 'snp_card_grid',
              '#path' => array(
                'path' => 'node/' . $vars['nid'],
              ),
            ),
          );

          $vars['content']['field_location_images'] = $markup;
        }
      }

      break;

    case 'person':
      if ($vars['view_mode'] == 'teaser') {
        $vars['classes_array'][] = 'panel';
        $vars['classes_array'][] = 'panel-default';
        hide($vars['content']['links']['node']);
      }
      break;

  }
}
