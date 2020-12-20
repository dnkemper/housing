/**
 * @file
 * Views AJAX modification.
 *
 * Disable form inputs while Views is AJAXing. Otherwise, the view borks if
 * a user makes selections during that process.
 */

(function($) {
  Drupal.housingViewsAjaxInit = function() {
    $(document).ajaxSend(function(event, jqxhr, settings) {
      // This was a views AJAX request.
      if (settings.url == '/views/ajax') {
        $('.view-filters input[type="checkbox"]').attr('disabled', true);
      }
    });

    $(document).ajaxComplete(function(event, jqxhr, ajaxOptions) {
      var response = $.parseJSON(jqxhr.responseText);

      // This was a views AJAX request.
      if (response[0].settings.views) {
        $('.view-filters input[type="checkbox"]').attr('disabled', false);
      }
    });
  };

  // Attach housingViewsAjax behavior.
  Drupal.behaviors.housingViewsAjax = {
    attach: function(context, settings) {
      $('#main', context).once('housingViewsAjax', function() {
        Drupal.housingViewsAjaxInit();
      });

      $('.views-exposed-widgets', context).once('dropdownOpen', function() {
        $('.dropdown-menu').click(function(e) {
            e.stopPropagation();
        });
      });
    }
  };

})(jQuery);
