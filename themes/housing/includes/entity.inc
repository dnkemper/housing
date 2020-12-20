<?php

/**
 * @file
 * Entity includes.
 */

/**
 * Implements template_preprocess_entity().
 */
function housing_preprocess_entity(&$vars) {
  if ($vars['entity_type'] == 'paragraphs_item') {
    $paragraph_item = $vars['paragraphs_item'];

    switch ($vars['elements']['#bundle']) {
      case 'floorplan':
        // Vars.
        $title = '';
        $room_type = '';
        $title_suffix = '';
        $id = $vars['id'];
        $pano_img = 'no-pano-image';

        // Combine room type and title.
        if (isset($vars['field_floorplan_type'])) {
          $room_type = $vars['field_floorplan_type'][0]['entity']->name;
          unset($vars['content']['field_floorplan_type']);
        }
        if (isset($vars['field_floorplan_title'])) {
          $title_suffix = ': ';
          $title_suffix .= $vars['field_floorplan_title'][0]['safe_value'];
          unset($vars['content']['field_floorplan_title']);
        }
        $title = $room_type . $title_suffix;

        // Override floorplan_image render.
        if (isset($vars['field_floorplan_image'])) {
          $uri = $vars['content']['field_floorplan_image'][0]['#item']['uri'];
          $pano_img = image_style_url('pano', $uri);
          $vars['content']['field_floorplan_image'][0] = array(
            '#type' => 'container',
            '#attributes' => array(
              'id' => 'pano-' . $id,
              'class' => array(
                'pano',
              ),
            ),
          );
        }

        // Build panel render.
        $render['panel'] = array(
          '#type' => 'container',
          '#attributes' => array(
            'class' => array(
              'panel',
              'panel-default',
            ),
          ),
        );
        $render['panel']['heading'] = array(
          '#type' => 'container',
          '#attributes' => array(
            'role' => 'tab',
            'id' => 'floorplanHeading' . $id,
            'class' => array(
              'panel-heading',
            ),
          ),
        );

        // Do special stuff if there's an image.
        if (!empty($vars['content'])) {
          // Build the panel header.
          $render['panel']['heading']['title'] = array(
            '#theme' => 'link',
            '#text' => $title . '<i class="collapse-indicator fa fa-times" aria-hidden="true"></i>',
            '#path' => '',
            '#options' => array(
              'fragment' => 'floorplan' . $id,
              'external' => TRUE,
              'html' => TRUE,
              'attributes' => array(
                'role' => 'button',
                'data-toggle' => 'collapse',
                'data-parent' => '#floorplan',
                'aria-expanded' => 'false',
                'aria-controls' => 'floorplan' . $id,
                'class' => array(
                  'pano-modal-trigger',
                  'collapse-trigger',
                  'collapsed',
                ),
              ),
            ),
          );
          // Build panel body.
          $render['panel']['collapse'] = array(
            '#type' => 'container',
            '#attributes' => array(
              'id' => 'floorplan' . $id,
              'data-pano-id' => 'pano-' . $id,
              'data-pano-img' => $pano_img,
              'class' => array(
                'panel-collapse',
                'collapse',
                'floorplan-collapse',
              ),
              'role' => 'tabpanel',
              'aria-labelledby' => 'floorplanHeading' . $id,
            ),
          );
          $render['panel']['collapse']['body'] = array(
            '#type' => 'container',
            '#attributes' => array(
              'class' => array(
                'panel-body',
              ),
            ),
          );
          $render['panel']['collapse']['body']['content'] = array(
            '#type' => 'markup',
            '#markup' => render($vars['content']),
          );
        }
        else {
          $render['panel']['heading']['title'] = array(
            '#type' => 'markup',
            '#markup' => $title,
          );
        }

        // Add render to $vars['content'].
        $vars['content'] = $render;
        break;

      case 'snp_card':
        $vars['heading_classes_array'][] = 'yellow-flair';
        break;

    }
  }
}
