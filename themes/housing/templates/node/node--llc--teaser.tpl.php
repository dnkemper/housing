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
  <?php print render($title_suffix); ?>
    <?php print render($content['field_llc_images']); ?>
    <?php print render($content['field_llc_interests']); ?>

    <?php if (!$page && !empty($title)): ?>
      <div class="panel-heading">
        <h2<?php print $title_attributes; ?>>
          <a href="<?php print $node_url; ?>">
            <?php print $title; ?>
          </a>
          <?php print render($title_prefix); ?>
        </h2>
      </div>
    <?php endif; ?>

    <div class="content"<?php print $content_attributes; ?>>
      <?php print render($content); ?>
    </div>

</article>
