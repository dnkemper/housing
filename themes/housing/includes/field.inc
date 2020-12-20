<?php

/**
 * @file
 * Theme and preprocess functions for fields.
 */

 /**
  * Implements hook_preprocess_field().
  */
function housing_preprocess_field(&$vars) {
  $vars['content_attributes_array']['class'][] = 'field-items';

  switch ($vars['element']['#field_name']) {
    case 'field_block_name':
      // Get config info.
      $info = $vars['element']['#object']->field_block_name[LANGUAGE_NONE][0]['value'];
      $info = explode('---', $info);
      $module = $info[0];
      $delta = $info[1];
      // Render block.
      $block = block_load($module, $delta);
      $block_render = _block_render_blocks(array($block));
      $render_array = _block_get_renderable_array($block_render);
      $vars['items'][0]['#markup'] = drupal_render($render_array);
      break;

    case 'field_floorplan_title':
      $vars['theme_hook_suggestions'][] = 'field__no_markup';
      break;

    case 'field_llc_contact_ref':
      // Render field as panel.
      $vars['theme_hook_suggestions'][] = 'field__panel';
      $vars['classes_array'][] = 'panel';
      $vars['classes_array'][] = 'panel-default';
      $vars['content_attributes_array']['class'][] = 'panel-body';
      // Flex items.
      $vars['content_attributes_array']['class'][] = 'flex-md-3';
      // Add icon to field_label.
      $vars['label'] = '<i class="fa fa-address-book" aria-hidden="true"></i>' . $vars['label'];
      break;

    case 'field_llc_course':
      $vars['label'] = 'Living Learning Community Courses';
      // Render field as panel.
      $vars['classes_array'][] = 'panel';
      $vars['classes_array'][] = 'panel-default';

      // Add icon to label.
      $vars['label'] = '<i class="fa fa-file-text-o" aria-hidden="true"></i>' . $vars['label'];

      // Prepare items to render as panel-group.
      $vars['content_attributes_array']['id'] = 'maui-courses';
      $vars['content_attributes_array']['class'][] = 'panel-group';
      $vars['content_attributes_array']['class'][] = 'panel-body';
      $vars['content_attributes_array']['role'][] = 'tab-list';
      $vars['content_attributes_array']['aria-multiselectable'][] = 'true';

      // Setup variables for bootstrap accordions.
      foreach ($vars['items'] as &$item) {
        $item['heading'] = isset($item['#section'], $item['#section']['subTitle']) ? "{$item['#course']['title']} - {$item['#section']['subTitle']}" : $item['#course']['title'];
        $item['number'] = isset($item['#section']) ? "{$item['#course']['courseNumber']}:{$item['#section']['sectionNumber']}" : $item['#course']['courseNumber'];

        $item['heading_id'] = drupal_html_id($item['heading']);
        $item['collapse_id'] = drupal_html_id($item['number']);

        $parts = explode(':', $item['#course']['courseNumber']);

        if (isset($item['#section'])) {
          $page = 'details.page';

          $query = array(
            'id' => $item['#section']['sectionId'],
            'ci' => $item['#section']['courseIdentityId'],
          );
        }
        else {
          $page = 'dashboard.page';

          $query = array(
            'q.courseSubject' => $parts[0],
            'q.courseNumber' => $parts[1],
            'q.sessionId' => $item['#session']['id'],
            'showResults' => TRUE,
          );
        }

        $item['link'] = array(
          '#type' => 'link',
          '#title' => t('View on MyUI'),
          '#href' => "https://myui.uiowa.edu/my-ui/courses/{$page}",
          '#options' => array(
            'query' => $query,
          ),
          '#attributes' => array(
            'class' => array('btn', 'btn-default', 'btn-sm'),
          ),
        );
      }
      break;

    case 'field_llc_open_to':
      $vars['classes_array'][] = 'alert';
      $vars['classes_array'][] = 'alert-info';
      break;

    case 'field_llc_location_ref':
      // Render field as panel.
      $vars['theme_hook_suggestions'][] = 'field__panel';
      $vars['classes_array'][] = 'panel';
      $vars['classes_array'][] = 'panel-default';
      $vars['content_attributes_array']['class'][] = 'panel-body';

      // Determine academic year.
      if (strtotime('today') < strtotime('october 1st')) {
        $start = 'Fall ' . date('Y');
        $end = 'Spring ' . date('Y', strtotime('+1 year, today'));
      }
      else {
        $start = 'Fall ' . date('Y', strtotime('+1 year, today'));
        $end = 'Spring ' . date('Y', strtotime('+2 years, today'));
      }

      $label = t('Locations <span class="academic-year">@start - @end</span>', array(
        '@start' => $start,
        '@end' => $end,
      ));

      $vars['label'] = '<i class="fa fa-map-marker" aria-hidden="true"></i>' . $label;

      break;

    case 'field_location_amenities':
      $vars['theme_hook_suggestions'][] = 'field__panel';
      $vars['classes_array'][] = 'panel';
      $vars['classes_array'][] = 'panel-default';
      $vars['content_attributes_array']['class'][] = 'panel-body';
      $vars['label'] = '<i class="fa fa-shopping-basket pull-up-2" aria-hidden="true"></i>' . $vars['label'];
      // Add a checkmark icon to each item.
      foreach ($vars['items'] as &$item) {
        $item['#markup'] = '<div><i class="fa fa-check" aria-hidden="true"></i> ' . $item['#markup'];
        $item['#markup'] .= '</div>';
      }
      break;

    case 'field_location_floorplans':
      $vars['theme_hook_suggestions'][] = 'field__panel';
      $vars['classes_array'][] = 'panel';
      $vars['classes_array'][] = 'panel-default';
      $vars['content_attributes_array']['class'][] = 'panel-body';
      $vars['content_attributes_array']['class'][] = 'panel-group';
      $vars['content_attributes_array']['id'][] = 'floorplan';
      $vars['label'] = '<i class="fa fa-home" aria-hidden="true"></i>' . $vars['label'];
      break;

    case 'field_location_furnishings':
      $vars['theme_hook_suggestions'][] = 'field__panel';
      $vars['classes_array'][] = 'panel';
      $vars['classes_array'][] = 'panel-default';
      $vars['content_attributes_array']['class'][] = 'panel-body';
      $vars['label'] = '<i class="fa fa-plug" aria-hidden="true"></i>' . $vars['label'];
      // Add a checkmark icon to each item.
      foreach ($vars['items'] as &$item) {
        $item['#markup'] = '<div><i class="fa fa-check" aria-hidden="true"></i> ' . $item['#markup'];
        $item['#markup'] .= '</div>';
      }
      break;

    case 'field_location_person_ref':
      $vars['classes_array'][] = 'panel';
      $vars['classes_array'][] = 'panel-default';
      $vars['content_attributes_array']['class'][] = 'panel-body';
      // Flex items.
      $vars['content_attributes_array']['class'][] = 'flex-md-3';
      break;

    case 'field_location_population':
      $node = $vars['element']['#object'];
      if (!empty($node->field_location_population_type)) {
        foreach ($node->field_location_population_type[LANGUAGE_NONE] as $i) {
          $term = taxonomy_term_load($i['target_id']);
          $popover['container'][] = array(
            '#type' => 'markup',
            '#markup' => '<span class="label label-warning">' . $term->name . '</span>',
          );
        }

        $render['population'] = array(
          '#markup' => $vars['items'][0]['#markup'],
        );
        $render['link'] = array(
          '#theme' => 'link',
          '#text' => '<i class="fa fa-info-circle" aria-hidden="true"></i>',
          '#path' => '',
          '#options' => array(
            'fragment' => 'population',
            'html' => TRUE,
            'external' => TRUE,
            'attributes' => array(
              'role' => 'button',
              'data-toggle' => 'popover',
              'data-placement' => 'top',
              'data-trigger' => 'focus',
              'data-content' => render($popover),
              'data-html' => TRUE,
              'title' => "Who lives here",
            ),
          ),
        );

        $vars['items'][0] = $render;
      }
      break;

    case 'field_location_room_tour_video':
      $vars['theme_hook_suggestions'][] = 'field__panel';
      $vars['classes_array'][] = 'panel';
      $vars['classes_array'][] = 'panel-default';
      $vars['content_attributes_array']['class'][] = 'panel-body';
      // Alter the label.
      $vars['label'] = '<i class="fa fa-video-camera" aria-hidden="true"></i> Take a Tour';
      break;

    case 'field_llc_video':
      $vars['theme_hook_suggestions'][] = 'field__panel';
      $vars['classes_array'][] = 'panel';
      $vars['classes_array'][] = 'panel-default';
      $vars['content_attributes_array']['class'][] = 'panel-body';
      // Alter the label.
      $vars['label'] = '<i class="fa fa-video-camera" aria-hidden="true"></i> Living Learning Community';

      $node = $vars['element']['#object'];

      // Add a message about video translation for the Unidos LLC.
      if ($node && $node->title == 'Unidos') {
        $vars['panel_footer'] = '<p>Spanish subtitles can be enabled using the video settings (<i class="fa fa-cog" aria-hidden="true"></i> icon).</p>';
      }

      break;

    case 'field_llc_quotes':
      $items = array();

      foreach ($vars['items'] as $item) {
        $items[] = array('slide' => $item);
      }

      $options = array('arrows' => TRUE);
      $slick = slick_build($items, $options);

      // Zero out the markup.
      $vars['items'] = NULL;
      $vars['items'][0] = $slick;

      break;

    case 'field_location_laundry':
      $api_key = variable_get('housing_location_laundry_api_key', NULL);

      if (isset($api_key)) {
        foreach ($vars['element']['#items'] as $key => $value) {
          $id = $value['value'];

          $query = array(
            'method' => 'getappliances',
            'api_key' => $api_key,
            'location' => $id,
          );

          $query = drupal_http_build_query($query);
          $request = drupal_http_request('http://api.laundryview.com/room/?' . $query);

          if (!isset($request->error)) {
            $xml = simplexml_load_string($request->data);
            $json = json_encode($xml);
            $room = drupal_json_decode($json);

            // This is the render array that will hold the markup.
            $link = array();

            $link = array(
              '#theme' => 'link',
              '#text' => ucwords(strtolower($room['laundry_room_name'])),
              '#path' => 'http://classic.laundryview.com/laundry_room.php',
              '#options' => array(
                'external' => TRUE,
                'query' => array(
                  'lr' => $id,
                ),
                'attributes' => array(
                  'class' => array(
                    'btn',
                    'btn-sm',
                    'btn-tan-dark',
                  ),
                ),
              ),
            );
          }

          $vars['items'][$key] = $link;
        }
      }

      break;

    case 'field_location_bongo':
      $api_key = variable_get('bongo_api_key', NULL);

      if (isset($api_key)) {
        foreach ($vars['element']['#items'] as $key => $value) {
          $id = $value['value'];

          $link = array();
          $link = array(
            '#theme' => 'link',
            '#text' => htmlspecialchars_decode($vars['items'][$key]['#markup']),
            '#path' => 'https://bongo.org/stop/' . $id,
            '#options' => array(
              'external' => TRUE,
              'attributes' => array(
                'class' => array(
                  'btn',
                  'btn-sm',
                  'btn-default',
                ),
              ),
            ),
          );

          $vars['items'][$key] = $link;
        }
      }

      break;

    case 'field_location_gallery_link':
      $vars['label'] = 'Photo Gallery';
      $vars['items'][0]['#element']['title'] = '<i class="fa fa-camera-retro" aria-hidden="true"></i>' . $vars['items'][0]['#element']['title'];
      break;

    case 'field_person_grid_person':
      $vars['theme_hook_suggestions'][] = 'field__flex';
      $vars['content_attributes_array']['class'][] = 'flex-sm-2';
      $vars['content_attributes_array']['class'][] = 'flex-md-4';
      break;

    case 'field_person_grid_title':
      // Zero out the markup.
      $vars['items'] = NULL;

      foreach ($vars['element']['#items'] as $item) {
        $vars['items'][] = array(
          '#prefix' => '<h2>',
          '#suffix' => '</h2>',
          '#markup' => $item['value'],
        );
      }
      break;
      case 'field_llc_campus_partners':
        // Render field as panel.
        $vars['theme_hook_suggestions'][] = 'field__panel';
        $vars['classes_array'][] = 'panel';
        $vars['classes_array'][] = 'panel-default';
        $vars['content_attributes_array']['class'][] = 'panel-body';

        $label = t('Campus Partners');

        $vars['label'] = '<i class="fa fa-info-circle" aria-hidden="true"></i>' . $label;
        break;
  }
}
