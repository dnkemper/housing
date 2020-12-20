<?php
/**
 * @file
 * housing_wysiwyg.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function housing_wysiwyg_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: filter
  $overrides["filter.filtered_html.filters|pathologic|settings|local_settings"] = array(
    'local_paths' => '',
    'protocol_style' => 'full',
  );
  $overrides["filter.filtered_html.filters|wysiwyg|settings|valid_elements"] = '@[class|style|title],
  a[href|target|title|name|rel],
  img[style|src|width|height|alt|title],
  em, strong, strike, s, del, sub, sup, i, b, q[cite], acronym, abbr , samp, kbd,
  ul, ol[start], li, dl, dt, dd,
  p[align<center?justify?left?right], br, hr,
  div[align<center?justify?left?right], span,
  table[width|cellpadding|cellspacing|border|align|summary], tr[align|valign], td[align|valign|width|colspan|rowspan], tbody, th[align|valign|width|colspan|rowspan|scope], thead, tfoot, colgroup, col, caption,
  address, blockquote, pre, cite, code,
  h1, h2, h3, h4, h5, h6,
  figure, figcaption';

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.filtered_html.preferences|add_to_summaries"] = 0;
  $overrides["wysiwyg.filtered_html.preferences|version"] = '4.6.2.20af917';
  $overrides["wysiwyg.filtered_html.settings|advanced__active_tab"]["DELETED"] = TRUE;
  $overrides["wysiwyg.filtered_html.settings|buttons|btbutton"] = array(
    'btbutton' => 1,
  );
  $overrides["wysiwyg.filtered_html.settings|buttons|default|Styles"] = 1;
  $overrides["wysiwyg.filtered_html.settings|buttons|layoutmanager"] = array(
    'AddLayout' => 1,
  );
  $overrides["wysiwyg.filtered_html.settings|css_theme"] = 'adminimal';
  $overrides["wysiwyg.filtered_html.settings|pasteFromWordPromptCleanup"] = 0;
  $overrides["wysiwyg.filtered_html.settings|pasteFromWordRemoveFontStyles"] = 0;
  $overrides["wysiwyg.filtered_html.settings|stylesSet"] = 'Small=p.small
  Large=p.large
  Extra Large=p.xlarge';

 return $overrides;
}
