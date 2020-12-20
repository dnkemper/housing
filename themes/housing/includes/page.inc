<?php

/**
 * @file
 * Theme and preprocess functions for pages.
 */

/**
 * Implements template_preprocess_page().
 */
function housing_preprocess_page(&$vars) {
  $node = (isset($vars['node'])) ? $vars['node'] : NULL;

  // Add a grid definitions for '.main-content' regions.
  if (!empty($vars['page']['sidebar'])) {
    $vars['page']['content']['#wrapper_classes'][] = 'col-md-8';
    $vars['page']['sidebar']['#wrapper_classes'][] = 'col-md-4';
  }
  else {
    $vars['page']['content']['#wrapper_classes'][] = 'col-md-12';
  }

  // Add main-header-bg if applicable.
  if (isset($vars['node']) && !empty($vars['node']->field_featured_image)) {
    $vars['has_bg_img'] = 'has-bg-img';
    $image_path = image_style_url('edge_to_edge_large', $vars['node']->field_featured_image[LANGUAGE_NONE][0]['uri']);

    drupal_add_css(".main-header-bg .bg-img {background-image: url({$image_path});}", 'inline');
  }
  elseif (isset($vars['node']) && !empty($vars['node']->field_location_images)) {
    $vars['has_bg_img'] = 'has-slideshow';
    $slideshow = field_view_field('node', $vars['node'], 'field_location_images', 'full');
    $vars['slideshow'] = $slideshow;
  }
  elseif (isset($vars['node']) && !empty($vars['node']->field_llc_images)) {
    $vars['has_bg_img'] = 'has-slideshow';
    $slideshow = field_view_field('node', $vars['node'], 'field_llc_images', 'full');
    $vars['slideshow'] = $slideshow;
  }

  // Set hashtag for location nodes.
  if (isset($vars['node']) && $vars['node']->type == 'location') {
    $items = field_get_items('node', $vars['node'], 'field_location_hashtag');
    $value = field_view_value('node', $vars['node'], 'field_location_hashtag', $items[0]);

    if ($value) {
      $vars['hashtag'] = "#{$value['#markup']}";
    }
  }

  // Set hashtag for llc interests nodes.
  if (isset($vars['node']) && $vars['node']->type == 'llc') {
    $items = field_get_items('node', $vars['node'], 'field_llc_interests');

    $terms = array();

    foreach ($items as $item) {
      $term = taxonomy_term_load($item['tid']);
      $terms[] = $term->name;
    }

    $vars['interests'] = $terms;
  }

  // Set hashtag for llc interests nodes.
  if (isset($vars['node']) && $vars['node']->type == 'llc') {
    $items = field_get_items('node', $vars['node'], 'field_llc_experiences');

    $terms = array();

    foreach ($items as $item) {
      $term = taxonomy_term_load($item['target_id']);
      $terms[] = $term->name;
    }

    $vars['experiences'] = $terms;
  }

  // Unset title if front.
  if ($vars['is_front'] == TRUE) {
    drupal_set_title('');
  }

  // Switch on node type.
  if (isset($node)) {
    switch ($node->type) {
      case 'location':
      case 'page':
        $vars['container'] = FALSE;
        break;

    }
  }
}

/**
 * Implements template_process_page().
 */
function housing_process_page(&$vars) {
  // If there is no container set OR it's set to true.
  if (!isset($vars['container']) || $vars['container'] == TRUE) {
    // Add a container to '.main-content'.
    $vars['content_classes'][] = 'container-smooth';
  }
  // Add classes for the main_wrapper.
  $vars['content_classes'] = (!empty($vars['content_classes'])) ? implode(' ', $vars['content_classes']) : '';
}
