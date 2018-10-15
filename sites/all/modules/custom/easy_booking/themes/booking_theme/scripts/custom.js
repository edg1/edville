
(function ($) {
  //Makes impossible for start date to be later than end date
  Drupal.behaviors.popupMinDates = {
    attach: function (context, settings) {  
      if ($('.easy-booking-datepicker-start-date').length) {
        $('.easy-booking-datepicker-start-date').datepicker({
          defaultDate: '+1d',
          minDate: '+1d',
          firstDay: '1',
          showOtherMonths: true,
          dateFormat: 'dd/mm/yy',
          onSelect: function(selectedDate) {
            $('.easy-booking-datepicker-end-date').datepicker('option', 'minDate', selectedDate);
          }
        });
        $('.easy-booking-datepicker-end-date').datepicker({
          defaultDate: '+1d',
          firstDay: '1',
          showOtherMonths: true,
          dateFormat: 'dd/mm/yy',
          onSelect: function(selectedDate) {
            $('.easy-booking-datepicker-start-date').datepicker('option', 'maxDate', selectedDate);
          }
        });   
      }
    }
  };

  $(document).ready(function() { 	
    
    //Function for hiding and showing main menu in header
    $('#header .menu-expand-button-block').click(function() {
      if ($('#block-system-main-menu').is(':hidden')) {
        $('#block-system-main-menu').show();
      }	
      else {
        $('#block-system-main-menu').hide();
      }
    });
     
    $('.room-search-filters').click(function() {
      $(this).toggleClass('visible');
      $('#block-rooms-booking-manager-rooms-availability-search').toggleClass('visible');
    }); 
    
    //scrolling to the next section
    $('.bottom-scroll').click(function() { 
      var scrollsize = $('#block-views-our-cervices-block').offset().top;
      if ($('#header').css('position') === 'fixed') {
        scrollsize = $('#block-views-our-cervices-block').scrollTop() + $('#block-views-our-cervices-block').offset().top - $('#header').innerHeight();
      }
        $('html, body').animate({scrollTop:  scrollsize}, 1000); 
    });
	
    //Show or hide "ask a question" block
    $('.contacts-mail-and-phone-block button').click(function() {
      $('.webform-ask-a-question-block').fadeToggle(50);
    });
	
    //"Ask a question closing button"
    $('.webform-ask-a-question-block').append( "<div class=\"closebutton\"></div>");
    $('.webform-ask-a-question-block .closebutton').click(function() {
      $('.webform-ask-a-question-block').fadeOut(50);
    });	
    
    //Anystretch for slideshows
    var slideShowRow = $('#block-views-slideshow-header-block .slides li');
    slideShowRow.each(function(index) {
      var src = $(this).find('.views-field.views-field-field-image .field-content img').attr('src');
      $(this).parent().find('li').eq(index).anystretch(src, {speed: 1});
    });
    
    var aboutSlideShowRow = $('#block-views-about-area-about-area-slideshow .view-about-area .slides li');
    aboutSlideShowRow.each(function(index) {	
      var aboutSrc = $(this).find('img').attr('src');   
      $(this).parents().find('li').eq(index).anystretch(aboutSrc, {speed: 1});
    });       	
    
    var roomSlideShowRow = $('#block-views-room-top-slideshow-block .views-field-field-room-photos .slides li');
    roomSlideShowRow.each(function(index) {	
      var roomPhotoSrc = $(this).find('img').attr('src');   
      $(this).parents().find('li').eq(index).anystretch(roomPhotoSrc, {speed: 1});
    }); 
	
  });

})(jQuery);
