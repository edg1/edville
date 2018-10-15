(function ($) {
Drupal.behaviors.cloudZoom = {
  attach: function (context, settings) {
    items = $('.cloud-zoom:not(cloud-zoom-processed), .cloud-zoom-gallery:not(cloud-zoom-processed)', context);
    if (items.length) {
      items.addClass('cloud-zoom-processed').CloudZoom();
      items.parent().css('float', 'left');

      // Colorbox integration
      items.each(function() {
        if ($(this).hasClass('colorbox')) {
          // Add click event to wrapper (else mouse trap blocks it)
          // But only if colorbox was initialized for this field.
          var $item = $(this);
          $item.parent().click(function() {
            $item.colorbox(jQuery.extend({open: true}, settings.colorbox));
            return false;
          });
        }
      });
    }
  }
};
})(jQuery);
