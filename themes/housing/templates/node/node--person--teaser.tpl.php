<?php

/**
 * @file
 * Radix theme implementation to display a node.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
hide($content['comments']);
hide($content['links']);
?>
<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="person-node">
  <?php if (!empty($content['field_person_photo'])): ?>
    <?php print render($content['field_person_photo']); ?>
  <?php endif; ?>

  <div class="panel-heading">
    <?php print render($title_prefix); ?>

    <div class="panel-title">
      <div<?php print $title_attributes; ?>><?php print $title; ?></div>
    </div>

    <?php print render($title_suffix); ?>

    <?php if (isset($content['field_person_title'])): ?>
      <?php print render($content['field_person_title']); ?>
    <?php endif; ?>

    <?php if (isset($content['field_person_gender_pronoun'])): ?>
      <?php print render($content['field_person_gender_pronoun']); ?>
    <?php endif; ?>
    
    <?php if (!isset($content['field_person_languages'])): ?>
      <div class="no-person-languages"><br><br></div>
    <?php endif; ?>

    <?php if (isset($content['field_person_languages'])): ?>
      <?php print render($content['field_person_languages']); ?> <br>
    <?php endif; ?>
    
  </div>
  <div class="action-buttons">
    <div class="person-action-buttons-group"><?php print render($content['person_action_buttons']); ?></div>
  </div>


  </div>
</article>
