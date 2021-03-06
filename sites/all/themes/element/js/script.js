/*jshint jquery:true */
/*global $:true */

var $ = jQuery.noConflict();

$(document).ready(function($) {
	"use strict";


	$('.rooms-availability-search select').change();

	var stack = {
    delay: 1000,
    actions:[],
    run: function() {
      if (stack.actions.length) {
        stack.actions.shift()();
        setTimeout(stack.run, stack.delay);
    	}
    }
	};
	$('.rooms-search-result-content select').each(function(){
    var that = this;
    stack.actions.push(function(){
      $(that).change();
    });
	});

	stack.run();



	$('.rooms-availability-search').each(function() {
		var search_form = $(this);
		if (search_form.find('input[name="rooms_start_date[date]"]').val() != '') {
			search_form.addClass('search-result');

			// ajax
			$('.search-result #rooms-group-page select').first().change(function() {
				var people_val = $(this).val();
				if (people_val == '-1') {
					alert('Group size must be greater than zero!');
					$(this).val(1);
					people_val = 1;
				}
				$('select[name="persons"]').each(function() {
					var person_select_max = $(this).find('option:last').val();

					if (parseInt(people_val) > parseInt(person_select_max)) {
						$(this).closest('.rooms-search-result__unit-type').hide();
					}
					else {
						$(this).closest('.rooms-search-result__unit-type').show();
						$(this).val(people_val).change();
					}
				});
			});

			$('.search-result #rooms-group-page select').eq(1).change(function() {
				var children_val = $(this).val();
				$('select[name="children"]').each(function() {
					$(this).val(children_val).change();
				});
			});

			$('.search-result input[name="rooms_start_date[date]"]').change(function() {
				var start_date = $(this).val();
				$('input[name="edville_start_date[date]"]').each(function() {
					$(this).val(start_date).change();
				});
			});

			$('.search-result input[name="rooms_end_date[date]"]').change(function() {
				var end_date = $(this).val();
				$('input[name="edville_end_date[date]"]').each(function() {
					$(this).val(end_date).change();
				});
			});


			//

			search_form.find('select').each(function() {
				var select_param = $(this);
				if (select_param.attr('name') != 'rooms') {
					$('<p class="label-result">' + select_param.find('option:first-child').text() + '</p>').insertBefore(select_param);
				}
			});
		}
	});


	if ($('.search-result input[name="rooms_start_date[date]"]').val() != '') {
		$('<p class="label-result">' + $('.search-result input[name="rooms_start_date[date]"]').attr('placeholder') + '</p>').insertBefore('.search-result input[name="rooms_start_date[date]"]');
	}
	if ($('.search-result input[name="rooms_end_date[date]"]').val() != '') {
		$('<p class="label-result">' + $('.search-result input[name="rooms_end_date[date]"]').attr('placeholder') + '</p>').insertBefore('.search-result input[name="rooms_end_date[date]"]');
	}

	$('.rooms-book-unit-form input[type=checkbox]').click();

	$(document).ajaxStop(function () {
      setTimeout(function(){
           $('.rooms-book-unit-form input[type=checkbox]').attr('disabled', 'disabled');
      }, 1000);
  });

	$('.element-calendar .calendar-forward a').html('<i class="fa fa-caret-right"></i>');
	$('.element-calendar .calendar-back a').html('<i class="fa fa-caret-left"></i>');

	/* book slider */
	if ($('.book-slider').length > 0) {
		$('.book-slider').flexslider({
	    animation: "fade",
	    prevText:"",
	    nextText:"",
	    controlNav:false,
	    start: function ( slider ) {
	    	if ($(window).width() >= 768) {
	    		if ($('.flex-active-slide').hasClass('White')) {
						$('header .inactive_logo').show();
						$('header .active_logo').hide();
						$('.navbar-nav > li > a').addClass('white');
						$('.navbar-nav > li > a').removeClass('black');
						$('header .navbar-default').addClass('white');
						$('header .navbar-default').removeClass('black');
					}
					else {
						$('header .inactive_logo').hide();
						$('header .active_logo').show();
						$('.navbar-nav > li > a').addClass('black');
						$('.navbar-nav > li > a').removeClass('white');
						$('header .navbar-default').addClass('black');
						$('header .navbar-default').removeClass('white');
					}
	    	}
	    },
	    after: function ( slider ) {
	    	if ($(window).width() >= 768) {
	    		if ($('.flex-active-slide').hasClass('White')) {
						$('header .inactive_logo').show();
						$('header .active_logo').hide();
						$('.navbar-nav > li > a').addClass('white');
						$('.navbar-nav > li > a').removeClass('black');
						$('header .navbar-default').addClass('white');
						$('header .navbar-default').removeClass('black');
					}
					else {
						$('header .inactive_logo').hide();
						$('header .active_logo').show();
						$('.navbar-nav > li > a').addClass('black');
						$('.navbar-nav > li > a').removeClass('white');
						$('header .navbar-default').addClass('black');
						$('header .navbar-default').removeClass('white');
					}
	    	}
	    }
	  });
	}

	if ($('body').hasClass('front') && $(window).width() >= 768) {

		if ($('.flex-active-slide .slide').hasClass('White') || $('.flex-active-slide').hasClass('White')) {
			$('.front .rooms-availability-search .form-control').addClass('white');
			$('.front .rooms-availability-search .form-control').removeClass('black');
			$('.front .rooms-availability-search .label-result').addClass('white');
			$('.front .rooms-availability-search .label-result').removeClass('black');
			$('.front .rooms-date-range .container-inline-date .form-item input').addClass('white');
			$('.front .rooms-date-range .container-inline-date .form-item input').removeClass('black');
			$('.front .rooms-availability-search .btn-primary').addClass('white');
			$('.front .rooms-availability-search .btn-primary').removeClass('black');
			$('header .navbar-default').addClass('white');
			$('header .navbar-default').removeClass('black');
		}
		else {
			$('.front .rooms-availability-search .form-control').addClass('black');
			$('.front .rooms-availability-search .form-control').removeClass('white');
			$('.front .rooms-availability-search .label-result').addClass('black');
			$('.front .rooms-availability-search .label-result').removeClass('white');
			$('.front .rooms-date-range .container-inline-date .form-item input').addClass('black');
			$('.front .rooms-date-range .container-inline-date .form-item input').removeClass('white');
			$('.front .rooms-availability-search .btn-primary').addClass('black');
			$('.front .rooms-availability-search .btn-primary').removeClass('white');
			$('header .navbar-default').addClass('black');
			$('header .navbar-default').removeClass('white');
		}
		$('.flexslider').bind('after', function (slider) {
	    if ($('.flex-active-slide .slide').hasClass('White') || $('.flex-active-slide').hasClass('White')) {
				$('.front .rooms-availability-search .form-control').addClass('white');
				$('.front .rooms-availability-search .form-control').removeClass('black');
				$('.front .rooms-availability-search .label-result').addClass('white');
				$('.front .rooms-availability-search .label-result').removeClass('black');
				$('.front .rooms-date-range .container-inline-date .form-item input').addClass('white');
				$('.front .rooms-date-range .container-inline-date .form-item input').removeClass('black');
				$('.front .rooms-availability-search .btn-primary').addClass('white');
				$('.front .rooms-availability-search .btn-primary').removeClass('black');
				$('header .navbar-default').addClass('white');
				$('header .navbar-default').removeClass('black');
			}
			else {
				$('.front .rooms-availability-search .form-control').addClass('black');
				$('.front .rooms-availability-search .form-control').removeClass('white');
				$('.front .rooms-availability-search .label-result').addClass('black');
				$('.front .rooms-availability-search .label-result').removeClass('white');
				$('.front .rooms-date-range .container-inline-date .form-item input').addClass('black');
				$('.front .rooms-date-range .container-inline-date .form-item input').removeClass('white');
				$('.front .rooms-availability-search .btn-primary').addClass('black');
				$('.front .rooms-availability-search .btn-primary').removeClass('white');
				$('header .navbar-default').addClass('black');
				$('header .navbar-default').removeClass('white');
			}
	  });
	}



	/* header color for each slide */
	setHeaderColor();

	/*-------------------------------------------------*/
	/* =  portfolio isotope
	/*-------------------------------------------------*/

	var winDow = $(window);
		// Needed variables
		var $container=$('#isotope-container');
		var $filter=$('#filter');

		try{
			$container.imagesLoaded( function(){
				$container.trigger('resize');

				$('.triggerAnimation').waypoint(function() {
					var animation = $(this).attr('data-animate');
					$(this).css('opacity', '');
					$(this).addClass("animated " + animation);

				},
					{
						offset: '75%',
						triggerOnce: true
					}
				);
			});
		} catch(err) {
		}

		var $allVideos = jQuery(".embedded-video iframe[src^='http://player.vimeo.com'], .embedded-video iframe[src^='//player.vimeo.com'], .embedded-video iframe[src^='//www.youtube.com'], .embedded-video iframe[src^='http://www.youtube.com']");

		$allVideos.each(function() {
		  $(this)
		    // jQuery .data does not work on object/embed elements
		    .attr('data-aspectRatio', this.height / this.width)
		    .removeAttr('height')
		    .removeAttr('width')
		    .css('width', '100%')
	    	.height($(this).width() * $(this).attr('data-aspectRatio'));
	    $(this).parent().height(this.height);
		});

		winDow.bind('resize', function(){

			$allVideos.each(function() {

		    var $el = jQuery(this);
		    $el.css('width', '100%');
	    	$el.height($el.width() * $el.attr('data-aspectRatio'));
	    	$el.parent().height($el.height());
		  });

			var selector = $filter.find('a.active').attr('data-filter');

			try {
				$container.isotope({
					filter	: selector,
					animationOptions: {
						duration: 750,
						easing	: 'linear',
						queue	: false,
					}
				});
			} catch(err) {
			}
			return false;
		});

	/*-------------------------------------------------*/
	/* =  browser detect
	/*-------------------------------------------------*/
	try {
		$.browserSelector();
		// Adds window smooth scroll on chrome.
		if($("html").hasClass("chrome")) {
			// $.smoothScroll();
		}
	} catch(err) {

	}

	try {
		if (!$('body').hasClass('light-boxed') && !$('body').hasClass('dark-boxed') && !$('body').hasClass('page-home-corporate')) {
			$('.navbar > .container').removeClass('container');
		}
	} catch(err) {

	}

	/*-------------------------------------------------*/
	/* =  Animated content
	/*-------------------------------------------------*/

	try {
		/* ================ ANIMATED CONTENT ================ */
        if ($(".animated")[0]) {
            $('.animated').css('opacity', '0');
        }

        $('.triggerAnimation').waypoint(function() {
            var animation = $(this).attr('data-animate');
            $(this).css('opacity', '');
            $(this).addClass("animated " + animation);

        },
                {
                    offset: '75%',
                    triggerOnce: true
                }
        );
	} catch(err) {

	}

	/*-------------------------------------------------*/
	/* =  remove animation in mobile device
	/*-------------------------------------------------*/
	if ( winDow.width() < 992 ) {
		$('div.triggerAnimation').removeClass('animated');
		$('div.triggerAnimation').removeClass('triggerAnimation');
	}

	/*-------------------------------------------------*/
	/* =  Search animation
	/*-------------------------------------------------*/

	var searchToggle = $('.open-search'),
		inputAnime = $(".form-search"),
		body = $('body');
	searchToggle.on('click', function(event){
		event.preventDefault();

		if ( !inputAnime.hasClass('active') ) {
			inputAnime.addClass('active');
		} else {
			inputAnime.removeClass('active');
		}
	});

	body.on('click', function(){
		inputAnime.removeClass('active');
	});

	var elemBinds = $('.open-search, .form-search');
	elemBinds.bind('click', function(e) {
		e.stopPropagation();
	});

	$('#search-block-form button[type=submit]').html('<i class="fa fa-search"></i>');

	body.on('click', function(){
		inputAnime.removeClass('active');
	});

	var elemBinds = $('.open-search, .form-search');
	elemBinds.bind('click', function(e) {
		e.stopPropagation();
	});

	/*-------------------------------------------------*/
	/* =  fullwidth carousell
	/*-------------------------------------------------*/

	try {
		$("#owl-demo2").owlCarousel({
			autoPlay: 8000,
			items : 5,
			itemsDesktop : [1199,4],
			itemsDesktopSmall : [979,3]
		});
	} catch(err) {

	}
	try {
		$("#owl-demo3").owlCarousel({
			autoPlay: 8000,
			items : 3,
			itemsDesktop : [1199,3],
			itemsDesktopSmall : [979,2]
		});
	} catch(err) {

	}

	try {
		$("#owl-demo4").owlCarousel({
			navigation : true,
			autoPlay: 8000,
			items : 5,
			itemsDesktop : [1199,4],
			itemsDesktopSmall : [979,3]
		});
	} catch(err) {

	}

	/*-------------------------------------------------*/
	/* =  flexslider
	/*-------------------------------------------------*/
	// try {
	// 	$('#carousel').flexslider({
	// 		animation: "slide",
	// 		controlNav: false,
	// 		animationLoop: false,
	// 		slideshow: false,
	// 		itemWidth: 235,
	// 		itemMargin: 4,
	// 		asNavFor: '#slider2'
	// 	});

	// 	$('#slider2').flexslider({
	// 		animation: "slide",
	// 		controlNav: false,
	// 		animationLoop: false,
	// 		slideshow: false,
	// 		sync: "#carousel"
	// 	});
	// } catch(err) {

	// }
	// try {

	// 	var SliderPost = $('.flexslider');

	// 	SliderPost.flexslider({
	// 		slideshowSpeed: 3000,
	// 		easing: "swing"
	// 	});
	// } catch(err) {

	// }

	/*-------------------------------------------------*/
	/* =  price range code
	/*-------------------------------------------------*/

	try {

		for( var i = 100; i <= 10000; i++ ){
			$('#start-val').append(
				'<option value="' + i + '">' + i + '</option>'
			);
		}
		// Initialise noUiSlider
		$('.noUiSlider').noUiSlider({
			range: [0,30],
			start: [5,20],
			handles: 2,
			connect: true,
			step: 1,
			serialization: {
				to: [ $('#start-val'),
					$('#end-val') ],
				resolution: 1
			}
		});
	} catch(err) {

	}

	/* ---------------------------------------------------------------------- */
	/*	Contact Map
	/* ---------------------------------,------------------------------------- */
	var contact = {"lat":"51.013678", "lon":"3.787079"}; //Change a map coordinate here!

	try {
		var mapContainer = $('.map');
		var pathToTheme = Drupal.settings.basePath + "sites/all/themes/" + Drupal.settings.ajaxPageState.theme;
    var image = pathToTheme + '/images/marker - eg.png';
		mapContainer.gmap3({
			action: 'addMarker',
			marker:{
				options:{
					icon : new google.maps.MarkerImage(image)
				}
			},
			latLng: [contact.lat, contact.lon],
			map:{
				center: [contact.lat, contact.lon],
				zoom: 15
				},
			},
			{action: 'setOptions', args:[{scrollwheel:false}]}
		);
	} catch(err) {

	}

	/* ---------------------------------------------------------------------- */
	/*	magnific-popup
	/* ---------------------------------------------------------------------- */

	try {
		// Example with multiple objects
		$('.zoom').magnificPopup({
			type: 'image',
			gallery: {
				enabled: true
			}
		});

	} catch(err) {

	}


	/*-------------------------------------------------*/
	/* = skills animate
	/*-------------------------------------------------*/

	try{
		var skillBar = $('.skills-progress');
		skillBar.appear(function() {

			var animateElement = $(".meter > p");
			animateElement.each(function() {
				$(this)
					.data("origWidth", $(this).attr('data-percent'))
					.width(0)
					.animate({
						width: $(this).data("origWidth")
					}, 1200);
			});

		});
	} catch(err) {
	}

	// try {
		$('.skills-section .view-content').appear(function() {
			$('.circle-skill').each(function() {
				DevSolutionSkill.init($(this).attr('id'));
			});
		});
	// } catch(err) {

	// }

	/*-------------------------------------------------*/
	/* =  count increment
	/*-------------------------------------------------*/
	try {
		$('.statistic-post').appear(function() {
			$('.timer').countTo({
				speed: 4000,
				refreshInterval: 60,
				formatter: function (value, options) {
					return value.toFixed(options.decimals);
				}
			});
		});
	} catch(err) {

	}

	/*-------------------------------------------------*/
	/* =  feature box appear
	/*-------------------------------------------------*/

	try{
		$('.feature-box').appear(function() {
			$(this).addClass('active');
		});

	} catch(err) {
	}

	/* ---------------------------------------------------------------------- */
	/*	Shop galery image replacement
	/* ---------------------------------------------------------------------- */

	var elemToShow = $('.other-products a');

	elemToShow.on('click', function(e){
		e.preventDefault();
		var newImg = $(this).attr('data-image');
		var prodHolder = $('.image-holder img');
		prodHolder.attr('src', newImg);
	});

	/*-------------------------------------------------*/
	/* =  product increase
	/*-------------------------------------------------*/

	var fieldNum = $('.product-details input[type="text"]'),
		btnIncrease = $('button.increase'),
		btnDecrease = $('button.decrease');

		btnIncrease.on('click', function(){
			var fieldVal = fieldNum.val();
			var nextVal = parseFloat(fieldVal) + 1;
			fieldNum.val(nextVal);
		});

		btnDecrease.on('click', function(){
			var fieldVal = fieldNum.val();
			var nextVal = parseFloat(fieldVal) - 1;
			if (fieldVal > 0) {
				fieldNum.val(nextVal);
			} else {
				fieldNum.val(0);
			}
		});

	/* ---------------------------------------------------------------------- */
	/*	Accordion
	/* ---------------------------------------------------------------------- */
	var clickElem = $('a.accord-link');

	clickElem.on('click', function(e){
		e.preventDefault();

		var $this = $(this),
			parentCheck = $this.parents('.accord-elem'),
			accordItems = $('.accord-elem'),
			accordContent = $('.accord-content');

		if( !parentCheck.hasClass('active')) {

			accordContent.slideUp(400, function(){
				accordItems.removeClass('active');
			});
			parentCheck.find('.accord-content').slideDown(400, function(){
				parentCheck.addClass('active');
			});

		} else {

			accordContent.slideUp(400, function(){
				accordItems.removeClass('active');
			});

		}
	});

	/* ---------------------------------------------------------------------- */
	/*	Contact Form
	/* ---------------------------------------------------------------------- */

	var submitContact = $('#submit_contact'),
		message = $('#msg');

	submitContact.on('click', function(e){
		e.preventDefault();

		var $this = $(this);

		$.ajax({
			type: "POST",
			url: 'contact.php',
			dataType: 'json',
			cache: false,
			data: $('#contact-form').serialize(),
			success: function(data) {

				if(data.info !== 'error'){
					$this.parents('form').find('input[type=text],textarea,select').filter(':visible').val('');
					message.hide().removeClass('success').removeClass('error').addClass('success').html(data.msg).fadeIn('slow').delay(5000).fadeOut('slow');
				} else {
					message.hide().removeClass('success').removeClass('error').addClass('error').html(data.msg).fadeIn('slow').delay(5000).fadeOut('slow');
				}
			}
		});
	});


	/* ---------------------------------------------------------------------- */
	/*	Header animate after scroll
	/* ---------------------------------------------------------------------- */

	(function() {

		var docElem = document.documentElement,
			didScroll = false,
			changeHeaderOn = 40;
			document.querySelector( 'header' );
		function init() {
			window.addEventListener( 'scroll', function() {
				if( !didScroll ) {
					didScroll = true;
					setTimeout( scrollPage, 100 );
				}
			}, false );
		}

		function scrollPage() {
			var sy = scrollY();
			if ( sy >= changeHeaderOn ) {
				$( 'header' ).addClass('active');
			}
			else {
				$( 'header' ).removeClass('active');
			}
			didScroll = false;
		}

		function scrollY() {
			return window.pageYOffset || docElem.scrollTop;
		}

		init();

	})();

	/* ---------------------------------------------------------------------- */
	/*	Like display and click
	/* ---------------------------------------------------------------------- */

	$('a.flag').each(function() {
		var like_count = $(this).closest('ul').next();
		$(this).attr('title', like_count.text());
		$(this).html('<i class="fa fa-heart"></i>');
	});


	if ($('.single-project-section').length > 0) {
		var count_init = parseInt($('.single-project-section .like-count').text());
		if (count_init <=0) {
			count_init = 0;
		}
		$('.single-project-section a.flag').html('<i class="fa fa-heart"></i><span>' + count_init + '</span>');
	}

  $(document).bind('flagGlobalAfterLinkUpdate', function(event, data) {
    if (data.flagName == 'like' && data.flagSuccess) {
      var like_count = $('#like-node-' + data.contentId);
      var count = parseInt(like_count.html());

      if (data.flagStatus == 'flagged') {
      	count++;
      }
      else {
      	count--;
      }
   		if (count <= 0) {
   			count = 0;
   		}
   		if ($('body').hasClass('node-type-portfolio')) {
   			like_count.html(count);
   		}
   		else {
   			like_count.html(count + ' Likes');
   		}


      if ($('body').hasClass('node-type-portfolio')) {
      	$('.flag-like-' + data.contentId + ' a').html('<i class="fa fa-heart"></i><span>' + count + '</span>');
      }
      else {
      	$('.flag-like-' + data.contentId + ' a').html('<i class="fa fa-heart"></i>');
      }
      $('.flag-like-' + data.contentId + ' a').attr('title', like_count.text());
    }
  });

});

function setHeaderColor() {
	if (!$('header').hasClass('active'))  {

		if ($('body').hasClass('front') && $('.flexslider').length > 0 && $(window).width() >= 768) {
			if ($('.flex-active-slide .slide').hasClass('White') || $('.flex-active-slide').hasClass('White')) {
				$('header .inactive_logo').show();
				$('header .active_logo').hide();
				$('.navbar-nav > li > a').addClass('white');
				$('.navbar-nav > li > a').removeClass('black');
			}
			else {
				$('header .inactive_logo').hide();
				$('header .active_logo').show();
				$('.navbar-nav > li > a').addClass('black');
				$('.navbar-nav > li > a').removeClass('white');
			}
			$('.flexslider').bind('after', function (slider) {
	      if ($('.flex-active-slide .slide').hasClass('White') || $('.flex-active-slide').hasClass('White')) {
					$('header .inactive_logo').show();
					$('header .active_logo').hide();
					$('.navbar-nav > li > a').addClass('white');
					$('.navbar-nav > li > a').removeClass('black');
				}
				else {
					$('header .inactive_logo').hide();
					$('header .active_logo').show();
					$('.navbar-nav > li > a').addClass('black');
					$('.navbar-nav > li > a').removeClass('white');
				}
	    });
		}
	}
}
