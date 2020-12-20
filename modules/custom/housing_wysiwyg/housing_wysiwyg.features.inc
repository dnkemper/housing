<?php
/**
 * @file
 * housing_wysiwyg.features.inc
 */

/**
 * Implements hook_filter_default_formats_alter().
 */
function housing_wysiwyg_filter_default_formats_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['filters']['pathologic']['settings']['local_settings'] = array(
      'local_paths' => '',
      'protocol_style' => 'full',
    ); /* WAS: '' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['valid_elements'] = '@[class|style|title],
    a[href|target|title|name|rel],
    img[style|src|width|height|alt|title],
    em, strong, strike, s, del, sub, sup, i, b, q[cite], acronym, abbr , samp, kbd,
    ul, ol[start], li, dl, dt, dd,
    p[align<center?justify?left?right], br, hr,
    div[align<center?justify?left?right], span,
    table[width|cellpadding|cellspacing|border|align|summary], tr[align|valign], td[align|valign|width|colspan|rowspan], tbody, th[align|valign|width|colspan|rowspan|scope], thead, tfoot, colgroup, col, caption,
    address, blockquote, pre, cite, code,
    h1, h2, h3, h4, h5, h6,
    figure, figcaption'; /* WAS: '@[class|style|title],
    a[href|target|title|name|rel],
    img[style|src|width|height|alt|title],
    em, strong, strike, s, del, sub, sup, i, b, q[cite], acronym, abbr , samp, kbd,
    ul, ol[start], li, dl, dt, dd,
    p[align<center?justify?left?right], br, hr,
    div[align<center?justify?left?right], span,
    table[width|cellpadding|cellspacing|border|align|summary], tr[align|valign], td[align|valign|width|colspan|rowspan], tbody, th[align|valign|width|colspan|rowspan|scope], thead, tfoot, colgroup, col, caption,
    address, blockquote, pre, cite, code,
    h1, h2, h3, h4, h5, h6,
    figure, figcaption' */
  }
}

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function housing_wysiwyg_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['preferences']['add_to_summaries'] = 0; /* WAS: FALSE */
    $data['filtered_html']['preferences']['version'] = '4.6.2.20af917'; /* WAS: '4.7.1.08ffd39' */
    $data['filtered_html']['settings']['buttons']['btbutton'] = array(
      'btbutton' => 1,
    ); /* WAS: '' */
    $data['filtered_html']['settings']['buttons']['default']['Styles'] = 1; /* WAS: '' */
    $data['filtered_html']['settings']['buttons']['layoutmanager'] = array(
      'AddLayout' => 1,
    ); /* WAS: '' */
    $data['filtered_html']['settings']['css_theme'] = 'adminimal'; /* WAS: '' */
    $data['filtered_html']['settings']['pasteFromWordPromptCleanup'] = 0; /* WAS: '' */
    $data['filtered_html']['settings']['pasteFromWordRemoveFontStyles'] = 0; /* WAS: '' */
    $data['filtered_html']['settings']['stylesSet'] = 'Small=p.small
    Large=p.large
    Extra Large=p.xlarge'; /* WAS: '' */
    unset($data['filtered_html']['settings']['advanced__active_tab']);
  }
}
