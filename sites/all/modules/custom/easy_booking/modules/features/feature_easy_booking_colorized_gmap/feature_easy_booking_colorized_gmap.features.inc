<?php
/**
 * @file
 * feature_easy_booking_colorized_gmap.features.inc
 */

/**
 * Implements hook_default_colorized_gmap().
 */
function feature_easy_booking_colorized_gmap_default_colorized_gmap() {
  $items = array();
  $items['colorized_gmap_1427792708'] = entity_import('colorized_gmap', '{
    "name" : "colorized_gmap_1427792708",
    "created" : "1427795066",
    "changed" : "1470299311",
    "uid" : "1",
    "latitude" : "48.853358000000",
    "longitude" : "2.348903000000",
    "additional_settings" : {
      "controls" : {
        "min_drag_width" : "1024",
        "streetViewControl" : 0,
        "panControl" : 0,
        "mapTypeControl" : 0
      },
      "controls_position" : { "streetViewControl" : "1", "panControl" : "1", "mapTypeControl" : "3" },
      "marker_settings" : {
        "marker" : 0,
        "markertitle" : "Destination",
        "info_window" : { "value" : "", "format" : "filtered_html" }
      },
      "zoom_control_settings" : {
        "zoom" : "15",
        "zoomControl" : 1,
        "scrollwheel" : 0,
        "zoomControlSize" : "2",
        "zoomControlPosition" : "4"
      }
    },
    "style" : {
      "1" : {
        "featureType" : "water",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#333739" },
          { "visibility" : "on" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "2" : {
        "featureType" : "landscape",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#f99a01" },
          { "visibility" : "on" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "3" : {
        "featureType" : "poi",
        "elementType" : "all",
        "stylers" : [
          { "color" : "#f99a01" },
          { "visibility" : "on" },
          { "saturation" : "-7" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "4" : {
        "featureType" : "road.highway",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#f99a01" },
          { "visibility" : "on" },
          { "saturation" : "-28" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "5" : {
        "featureType" : "road.arterial",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#f99a01" },
          { "visibility" : "on" },
          { "saturation" : "-15" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "6" : {
        "featureType" : "road.local",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#f99a01" },
          { "visibility" : "on" },
          { "saturation" : "-18" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "7" : {
        "featureType" : "all",
        "elementType" : "labels.text.fill",
        "stylers" : [
          { "color" : "#ffffff" },
          { "visibility" : "on" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "8" : {
        "featureType" : "all",
        "elementType" : "labels.text.stroke",
        "stylers" : [
          { "color" : "" },
          { "visibility" : "off" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "9" : {
        "featureType" : "transit",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#f99a01" },
          { "visibility" : "on" },
          { "saturation" : "-34" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "10" : {
        "featureType" : "administrative",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#333739" },
          { "visibility" : "on" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "0.8" }
        ],
        "remove" : 0
      },
      "11" : {
        "featureType" : "poi.park",
        "elementType" : "all",
        "stylers" : [
          { "color" : "#f99a01" },
          { "visibility" : "on" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "12" : {
        "featureType" : "road",
        "elementType" : "geometry.stroke",
        "stylers" : [
          { "color" : "#333739" },
          { "visibility" : "on" },
          { "saturation" : "10" },
          { "lightness" : "" },
          { "weight" : "0.3" }
        ],
        "remove" : 0
      }
    },
    "block_settings" : {
      "region" : { "booking_theme" : "content_aside", "seven" : -1 },
      "custom" : "0",
      "visibility" : "1",
      "pages" : "\\u003Cfront\\u003E",
      "title" : ""
    },
    "rdf_mapping" : []
  }');
  $items['colorized_gmap_1469694601'] = entity_import('colorized_gmap', '{
    "name" : "colorized_gmap_1469694601",
    "created" : "1469695196",
    "changed" : "1470299268",
    "uid" : "1",
    "latitude" : "48.853358000000",
    "longitude" : "2.348903000000",
    "additional_settings" : {
      "controls" : {
        "min_drag_width" : "1024",
        "streetViewControl" : 0,
        "panControl" : 0,
        "mapTypeControl" : 0
      },
      "controls_position" : { "streetViewControl" : "1", "panControl" : "1", "mapTypeControl" : "3" },
      "marker_settings" : {
        "marker" : 0,
        "markertitle" : "Destination",
        "info_window" : { "value" : "", "format" : "filtered_html" }
      },
      "zoom_control_settings" : {
        "zoom" : "15",
        "zoomControl" : 1,
        "scrollwheel" : 0,
        "zoomControlSize" : "2",
        "zoomControlPosition" : "4"
      }
    },
    "style" : {
      "1" : {
        "featureType" : "water",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#333739" },
          { "visibility" : "on" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "2" : {
        "featureType" : "landscape",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#f99a01" },
          { "visibility" : "on" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "3" : {
        "featureType" : "poi",
        "elementType" : "all",
        "stylers" : [
          { "color" : "#f99a01" },
          { "visibility" : "on" },
          { "saturation" : "-7" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "4" : {
        "featureType" : "road.highway",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#f99a01" },
          { "visibility" : "on" },
          { "saturation" : "-28" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "5" : {
        "featureType" : "road.arterial",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#f99a01" },
          { "visibility" : "on" },
          { "saturation" : "-15" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "6" : {
        "featureType" : "road.local",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#f99a01" },
          { "visibility" : "on" },
          { "saturation" : "-18" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "7" : {
        "featureType" : "all",
        "elementType" : "labels.text.fill",
        "stylers" : [
          { "color" : "#ffffff" },
          { "visibility" : "on" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "1" }
        ],
        "remove" : 0
      },
      "8" : {
        "featureType" : "all",
        "elementType" : "labels.text.stroke",
        "stylers" : [
          { "color" : "" },
          { "visibility" : "off" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "11.00" }
        ],
        "remove" : 0
      },
      "9" : {
        "featureType" : "administrative",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#333739" },
          { "visibility" : "on" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "0.8" }
        ],
        "remove" : 0
      },
      "10" : {
        "featureType" : "poi.park",
        "elementType" : "all",
        "stylers" : [
          { "color" : "#f99a01" },
          { "visibility" : "on" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "11" : {
        "featureType" : "road",
        "elementType" : "geometry.stroke",
        "stylers" : [
          { "color" : "#333739" },
          { "visibility" : "on" },
          { "saturation" : "10" },
          { "lightness" : "" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      },
      "12" : {
        "featureType" : "transit",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#f99a01" },
          { "visibility" : "on" },
          { "saturation" : "-34" },
          { "lightness" : "" },
          { "weight" : "0.3" }
        ],
        "remove" : 0
      }
    },
    "block_settings" : {
      "region" : { "booking_theme" : "secondary_content", "seven" : -1 },
      "custom" : "0",
      "visibility" : "1",
      "pages" : "contact",
      "title" : ""
    },
    "rdf_mapping" : []
  }');
  return $items;
}
