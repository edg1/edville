Drupal.edville_custom = Drupal.edville_custom || {};

(function ($) {

  Drupal.behaviors.edville_custom = {
    attach: function (context) {
    	$('#unit_search_childrensage select').on('each', function() {

				var select_search_age = $(this);
				
				var age_item_name = select_search_age.attr('name');
				var age_result_name = age_item_name.replace('_search', '');
				select_search_age.change(function() {
					$('select[name="'+age_result_name+'"]').val(select_search_age.val()).change();
				});
			});

    	$(document).ready(function() {
    		
    		var search_height = $('.rooms-availability-search .rooms-search-result__select-childrensage').height();
				if (search_height > 0) {
					search_height = $('.rooms-availability-search > div').height() + search_height + 30;
					$('.rooms-availability-search').height(search_height);
				}
    		$('#edit-group-size-children1').change(function() {
	    		var search_height = $('.rooms-availability-search .rooms-search-result__select-childrensage').height();
					if (search_height > 0) {
						search_height = $('.rooms-availability-search > div').height() + search_height + 30;
						$('.rooms-availability-search').height(search_height);
					}
	    	});

    		if ($('.rooms-availability-search input[name="rooms_start_date[date]"]').val() != '') {
    			// $('.rooms-availability-search input[name="rooms_start_date[date]"]').prepend('<label class="label-prepend">' + $('input[name="rooms_start_date[date]"]').attr("placeholder") + '</label>');
    		} 

    	});
    }
	};

})(jQuery);