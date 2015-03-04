jQuery(document).ready(function(){
	$('.bxslider').bxSlider();

	var contact = {"lat":"-33.880641", "lon":"151.204298"}; //Change a map coordinate here!

	try {
		var mapContainer = $('.unit_map');
		var pathToTheme = Drupal.settings.basePath + "sites/all/themes/" + Drupal.settings.ajaxPageState.theme;
    var image = pathToTheme + '/images/marker.png';
		mapContainer.gmap3({
			action: 'addMarker',
			markers:[
				{lat:contact.lat, lng:contact.lon, data:'ABC'}
			],
			marker:{
				options:{
					icon : new google.maps.MarkerImage(image),
				},
			},
			latLng: [contact.lat, contact.lon],
			map:{
				center: [contact.lat, contact.lon],
				zoom: 15,
				},
			},
			{action: 'setOptions', args:[{scrollwheel:false}]}
		);
	} catch(err) {
		console.log(err);
	}

});