<?php

/**
 * @file
 * Theme and preprocess functions for pages.
 */

/**
 * Implements template_preprocess_slick().
 */
function housing_preprocess_slick(&$vars) {
  $vars['classes_array'][] = 'slick-count-' . count($vars['items']);
}
