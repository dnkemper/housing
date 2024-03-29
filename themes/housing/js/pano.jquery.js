(function($) {
  Drupal.behaviors.pano = {
    attach: function(context, settings) {
        $('.floorplan-collapse').on('shown.bs.collapse', function() {
            var panoID = $(this).data('pano-id');
            var panoImage = $(this).data('pano-img');

            pannellum.viewer(panoID, {
                'type': 'equirectangular',
                'autoLoad': true,
                'panorama': panoImage
            });
        });
    }
  };
})(jQuery);
