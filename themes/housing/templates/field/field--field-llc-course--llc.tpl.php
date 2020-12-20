<?php

/**
 * @file field.tpl.php
 * Default template implementation to display the value of a field.
 *
 * This file is not used and is here as a starting point for customization only.
 * @see theme_field()
 *
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 *
 * @ingroup themeable
 */
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div class="panel-heading"<?php print $title_attributes; ?>>
      <div class="panel-title">
        <?php print $label ?>
        <?php if ($variables['element']['#label_display'] == 'inline'): ?>
          :&nbsp;
        <?php endif; ?>
      </div>
    </div>
  <?php endif; ?>
  <div <?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>
      <div class="panel panel-default">
        <div class="panel-heading" role="tab" id="<?php print $item['heading_id']; ?>">
          <div class="panel-title">
            <a class="collapsed collapse-trigger" data-parent="#maui-courses" role="button" data-toggle="collapse" href="#<?php print $item['collapse_id']; ?>" aria-expanded="true" aria-controls="<?php print $item['collapse_id']; ?>">
              <div class="course-heading">
                <span class="label label-warning">
                  <?php print $item['number']; ?>
                </span>
                <?php print $item['heading']; ?>
              </div>
              <i class="collapse-indicator fa fa-times" aria-hidden="true"></i>
            </a>
          </div>
        </div>
        <div id="<?php print $item['collapse_id']; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="<?php print $item['heading_id']; ?>">
          <div class="panel-body">
            <p><?php print $item['#course']['catalogDescription']; ?></p>
            <?php print render($item['link']); ?>
          </div>
        </div>
      </div>
    <?php endforeach; ?>
  </div>
</div>