<?php

/**
 * @file
 * housing_llc.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function housing_llc_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-llc-body'.
  $field_instances['node-llc-body'] = array(
    'bundle' => 'llc',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-llc-field_llc_campus_partners'.
  $field_instances['node-llc-field_llc_campus_partners'] = array(
    'bundle' => 'llc',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 101,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_llc_campus_partners',
    'label' => 'Campus Partners',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'minimal' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'minimal' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-llc-field_llc_contact_ref'.
  $field_instances['node-llc-field_llc_contact_ref'] = array(
    'bundle' => 'llc',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The person(s) to display as contacts for this LLC.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => 1,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => 1,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_llc_contact_ref',
    'label' => 'Contact',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_clone' => 0,
          'allow_existing' => 1,
          'allow_new' => 1,
          'delete_references' => 0,
          'label_plural' => 'nodes',
          'label_singular' => 'node',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-llc-field_llc_course'.
  $field_instances['node-llc-field_llc_course'] = array(
    'bundle' => 'llc',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'uiowa_maui_field',
        'settings' => array(),
        'type' => 'uiowa_maui_course_info',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'uiowa_maui_field',
        'settings' => array(),
        'type' => 'uiowa_maui_course_info',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_llc_course',
    'label' => 'Courses',
    'required' => 0,
    'settings' => array(
      'scope' => 2,
      'term' => 'fall',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'uiowa_maui_field',
      'settings' => array(),
      'type' => 'uiowa_maui_course_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-llc-field_llc_experiences'.
  $field_instances['node-llc-field_llc_experiences'] = array(
    'bundle' => 'llc',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_llc_experiences',
    'label' => 'Experiences',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-llc-field_llc_images'.
  $field_instances['node-llc-field_llc_images'] = array(
    'bundle' => 'llc',
    'deleted' => 0,
    'description' => 'Provide images to be used as a featured slideshow. Images will be cropped at 1600px by 450px, but the presentation of the image is device and viewport size dependent. The first image in the slideshow will be used as the featured image for additional presentations of this content, for example listings on the Location page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'slick_fields',
        'settings' => array(
          'asnavfor_auto' => 0,
          'asnavfor_main' => '',
          'asnavfor_thumbnail' => '',
          'aspect_ratio' => '',
          'cache' => 3600,
          'color_field' => '',
          'colorbox_style' => '',
          'current_display' => 'main',
          'current_view_mode' => 'full',
          'grid' => '',
          'grid_medium' => '',
          'grid_small' => '',
          'iframe_lazy' => FALSE,
          'image_style' => 'location_slideshow',
          'lightbox_ready' => FALSE,
          'markup' => 0,
          'media_switch' => '',
          'mousewheel' => 0,
          'nested_optionset' => '',
          'nested_slick' => FALSE,
          'nested_style' => '',
          'optionset' => 'location_slideshow',
          'optionset_thumbnail' => '',
          'overridables' => array(
            'arrows' => 0,
            'autoplay' => 0,
            'dots' => 0,
            'draggable' => 0,
          ),
          'override' => 0,
          'picture' => FALSE,
          'picture_fallback' => '',
          'picture_ready' => FALSE,
          'picture_style' => '',
          'preserve_keys' => FALSE,
          'skin' => 'fullwidth',
          'skin_arrows' => '',
          'skin_dots' => '',
          'skin_thumbnail' => '',
          'slide_caption' => array(
            0 => 0,
            'alt_field' => 0,
            'title_field' => 0,
          ),
          'slide_classes' => '',
          'slide_image' => '',
          'slide_layout' => '',
          'slide_link' => '',
          'slide_overlay' => array(),
          'slide_title' => '',
          'thumbnail_caption' => '',
          'thumbnail_hover' => 0,
          'thumbnail_style' => '',
          'type' => '',
          'use_ajax' => FALSE,
          'view_mode' => '',
          'visible_slides' => '',
        ),
        'type' => 'slick',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_llc_images',
    'label' => 'Slideshow',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'llc/images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
          'sharestream' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-llc-field_llc_interests'.
  $field_instances['node-llc-field_llc_interests'] = array(
    'bundle' => 'llc',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Terms that help students relate interests to LLCs.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_llc_interests',
    'label' => 'Interests',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-llc-field_llc_location_ref'.
  $field_instances['node-llc-field_llc_location_ref'] = array(
    'bundle' => 'llc',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The location(s) that the LLC currently applies to. This is based on a Fall -> Spring academic year and the applicable sessions will be printed as a label automatically. If today\'s date is before October 1st, the current fall session is used as the start date. If today\'s date is after October 1st, next year\'s fall session is used as the start date. This field should updated each year on October 1st.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => 1,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => 1,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 100,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_llc_location_ref',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-llc-field_llc_open_to'.
  $field_instances['node-llc-field_llc_open_to'] = array(
    'bundle' => 'llc',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_llc_open_to',
    'label' => 'Open to',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'floorplan' => -1,
        'jumbotron' => -1,
        'open_to' => 'open_to',
        'person_grid' => -1,
        'quote' => -1,
        'snp_accordion' => -1,
        'snp_accordion_item' => -1,
        'snp_image_gallery' => -1,
        'snp_section' => -1,
        'snp_textarea' => -1,
      ),
      'bundle_weights' => array(
        'floorplan' => 2,
        'jumbotron' => 3,
        'open_to' => 4,
        'person_grid' => 10,
        'quote' => 5,
        'snp_accordion' => 12,
        'snp_accordion_item' => 13,
        'snp_image_gallery' => 14,
        'snp_section' => 15,
        'snp_textarea' => 16,
      ),
      'default_edit_mode' => 'preview',
      'title' => 'Open to',
      'title_multiple' => 'Open to',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-llc-field_llc_quotes'.
  $field_instances['node-llc-field_llc_quotes'] = array(
    'bundle' => 'llc',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_llc_quotes',
    'label' => 'Quotes',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'jumbotron' => -1,
        'quote' => 'quote',
      ),
      'bundle_weights' => array(
        'jumbotron' => 2,
        'quote' => 3,
      ),
      'default_edit_mode' => 'preview',
      'title' => 'Quote',
      'title_multiple' => 'Quotes',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-llc-field_llc_video'.
  $field_instances['node-llc-field_llc_video'] = array(
    'bundle' => 'llc',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_llc_video',
    'label' => 'Living Learning Community Video',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'oembed' => 0,
          'private' => 0,
          'public' => 'public',
          'sharestream' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Campus Partners');
  t('Contact');
  t('Courses');
  t('Experiences');
  t('Interests');
  t('Living Learning Community Video');
  t('Location');
  t('Open to');
  t('Provide images to be used as a featured slideshow. Images will be cropped at 1600px by 450px, but the presentation of the image is device and viewport size dependent. The first image in the slideshow will be used as the featured image for additional presentations of this content, for example listings on the Location page.');
  t('Quotes');
  t('Slideshow');
  t('Terms that help students relate interests to LLCs.');
  t('The location(s) that the LLC currently applies to. This is based on a Fall -> Spring academic year and the applicable sessions will be printed as a label automatically. If today\'s date is before October 1st, the current fall session is used as the start date. If today\'s date is after October 1st, next year\'s fall session is used as the start date. This field should updated each year on October 1st.');
  t('The person(s) to display as contacts for this LLC.');

  return $field_instances;
}
