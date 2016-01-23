<?php

/**
 * @file
 * A basic template for room entities
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The name of the room
 * - $url: The standard URL for viewing a room entity
 * - $page: TRUE if this is the main view page $url points too.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-profile
 *   - room-{TYPE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
  $unit_object = isset($content['rooms_booking_unit_options']['#object']) ?  $content['rooms_booking_unit_options']['#object'] : null;

  module_load_include('inc', 'rooms_booking_manager', 'rooms_booking_manager.availability_search');
  $search_form = drupal_get_form('rooms_booking_availability_search_form_page_' . $unit_object->unit_id);
  $search_form2 = drupal_get_form('rooms_booking_availability_search_form_block_' . $unit_object->unit_id);
  $search_form2['#attributes']['class'][] = 'edville_booking_search_block';
  
  if (empty($unit_object) || (arg(0) != 'unit' && arg(0) != 'booking')) return;
  if (arg(0) == 'unit') {
    $availability = get_avaiable_in_current_month($unit_object->unit_id); 
    $weekday_forms = array();
    if (isset($availability['weekday_availability']['data'])) {
      $i = 0;  
      foreach ($availability['weekday_availability']['data'] as $key => $item) {
        $date_from = new Datetime(($item['start']) . '-' . Date('m-Y')); 
        if (!isset($item['end']) || (isset($item['end']) && $item['end'] == 0)) {
          $item['end'] = $item['start']; 
        }
        $date_to = new Datetime(($item['end']) . '-' . Date('m-Y'));
        $date_to->modify('+1 day');
        $form = 'edville_book_unit_form_' . $unit_object->unit_id . '_' . $key;
        $booking_parameters = array(
          '1' => array(
            'adults' => 10,
            'children' => 0
          )
        );
        
        $night = $date_to->diff($date_from)->days;
        $price = $unit_object->base_price * $unit_object->max_sleeps * $night;

        $weekday_forms[$i]['date_from'] = $date_from;
        $weekday_forms[$i]['date_to'] = $date_to;
        $weekday_forms[$i]['form'] = drupal_get_form($form, $unit_object, $date_from, $date_to, $booking_parameters, 1, $price);
        $i++;
      }  
    }

    if (isset($availability['weekend_availability']['data'])) {
      $i = 0;  
      foreach ($availability['weekend_availability']['data'] as $key => $item) {
        $date_from = new Datetime(($item['start']) . '-' . Date('m-Y')); 
        if (!isset($item['end']) || (isset($item['end']) && $item['end'] == 0)) {
          $item['end'] = $item['start']; 
        }
        $date_to = new Datetime(($item['end']) . '-' . Date('m-Y'));
        $date_to->modify('+1 day');
        $form = 'edville_book_unit_form_' . $unit_object->unit_id . '_' . $key;
        $booking_parameters = array(
          '1' => array(
            'adults' => 10,
            'children' => 0
          )
        );
        
        $night = $date_to->diff($date_from)->days;
        $price = $unit_object->base_price * $unit_object->max_sleeps * $night;
        
        $weekend_forms[$i]['date_from'] = $date_from;
        $weekend_forms[$i]['date_to'] = $date_to;
        $weekend_forms[$i]['form'] = drupal_get_form($form, $unit_object, $date_from, $date_to, $booking_parameters, 1, $price);
        $i++;
      }  
    }
  }
  $theme_path = drupal_get_path('theme', 'element');

?>
<?php if (!is_null($unit_object)): ?>
  <?php
    $first_img = file_create_url($unit_object->field_room_photos['und'][0]['uri']); 
  ?>
  <?php if (arg(0) == 'unit'): ?>
  <div class="section-content page-banner-section" style="background:url(<?php print $first_img; ?>) center no-repeat; background-size:cover;">
    
  </div>
  
  <div class="container">
  <div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="unit-detail-content content"<?php print $content_attributes; ?>>
      <h2 class="title"><?php print $title; ?></h2>
      <?php print render($content['field_address']); ?>
      <ul class="room-features">
        <?php if ($unit_object->field_home['und'][0]['value'] == 1): ?>
        <li><img src="/<?php print $theme_path . '/images/icons/home.png'; ?>" /><span><?php print t('Home'); ?></span></li>
        <?php endif; ?>
        <li><img src="/<?php print $theme_path . '/images/icons/group-size.png'; ?>" /><span><?php print t('Group size ') . $unit_object->max_sleeps; ?></span></li>
        <li><img src="/<?php print $theme_path . '/images/icons/bed.png'; ?>" /><span><?php print $unit_object->data['bed_arrangement']['doubles'] . t(' doubles'); ?></span></li>
        <li><img src="/<?php print $theme_path . '/images/icons/bed.png'; ?>" /><span><?php print $unit_object->data['bed_arrangement']['singles'] . t(' singles'); ?></span></li>
        <li><img src="/<?php print $theme_path . '/images/icons/shower.png'; ?>" /><span><?php print $unit_object->field_showers['und'][0]['value'] . t(' shower'); ?></span></li>

        <?php if (isset($unit_object->field_student_approved['und'][0]['value']) && $unit_object->field_student_approved['und'][0]['value']): ?>
        <li><img src="/<?php print $theme_path . '/images/icons/student-approved.png'; ?>" /><span><?php print t('Student approved'); ?></span></li>
        <?php endif; ?>
        <?php if (isset($unit_object->field_business_approved['und'][0]['value']) && $unit_object->field_business_approved['und'][0]['value']): ?>
        <li><img src="/<?php print $theme_path . '/images/icons/business-approved.png'; ?>" /><span><?php print t('Business approved'); ?></span></li>
        <?php endif; ?>
        <li><img src="/<?php print $theme_path . '/images/icons/wc.png'; ?>" /><span><?php print $unit_object->field_wc['und'][0]['value'] . t(' WC'); ?></span></li>
        <li><img src="/<?php print $theme_path . '/images/icons/rooms.png'; ?>" /><span><?php print $unit_object->field_rooms['und'][0]['value'] . t(' rooms'); ?></span></li>
        <?php if (isset($unit_object->field_wifi['und'][0]['value']) && $unit_object->field_wifi['und'][0]['value']): ?>
        <li><img src="/<?php print $theme_path . '/images/icons/wifi.png'; ?>" /><span><?php print t('WIFI'); ?></span></li>
        <?php endif; ?>
      </ul>
      <?php print render($search_form); ?>
      <?php 
        if (isset($_GET['book_result'])) {
          $start_date = new Datetime(check_plain(arg(2)));
          $end_date = new Datetime(check_plain(arg(3)));
          $persons = check_plain($_GET['rooms_group_size1']);
          $childrens = check_plain($_GET['rooms_children1']);

          $form = 'book_unit_form_' . $unit_object->unit_id . '_' . $key;
          $form_booking_parameters = array(
            '1' => array(
              'adults' => $persons,
              'children' => $childrens
            )
          );
          $night = $date_to->diff($date_from)->days;
          $price = $unit_object->base_price * $unit_object->max_sleeps * $night;

          $book_form = drupal_get_form($form, $unit_object, $start_date, $end_date, $form_booking_parameters, 1, $price);

          drupal_add_js("
            jQuery(document).ready(function() {
              jQuery('.rooms-search-result__select-children select').change();
            });
          ", 'inline');

          print render($book_form);
        }
      ?>
      <?php
        $content['field_room_photos']['#settings']['attributes']['id'] = 'flexslider-1';
        print render($content['field_room_photos']); 

        $content['field_room_photos']['#settings']['optionset'] = 'thumbnail_navigation';
        $content['field_room_photos']['#settings']['attributes']['id'] = 'flexslider-2';
        print render($content['field_room_photos']); 
      ?>
      <?php if (isset($unit_object->field_description['und'][0]['value'])): ?>
        <div class="content-item">
          <img class="icon" src="<?php print url($theme_path . '/images/icons/home.png'); ?>" alt="icon-home" /><h2 class="title nomarl"><?php print t('Description'); ?></h2>
          <?php print render($content['field_description']); ?>
        </div>
      <?php endif; ?>
      <?php if (isset($unit_object->field_student_arrangements['und'][0]['value'])): ?>
        <div class="content-item">
          <img class="icon icon-student-arrangment" src="<?php print url($theme_path . '/images/icons/student-arrangments.png'); ?>" alt="icon-home" /><h2 class="title nomarl"><?php print t('Student Arrangments'); ?></h2>
          <?php print render($content['field_student_arrangements']); ?>
          </div>
      <?php endif; ?>
      <?php if (isset($unit_object->field_business_arrangements['und'][0]['value'])): ?>
        <div class="content-item">
          <img class="icon icon-business-arrangments" src="<?php print url($theme_path . '/images/icons/business-arrangments.png'); ?>" alt="icon-home" /><h2 class="title nomarl"><?php print t('Business Arrangments'); ?></h2>
          <?php print render($content['field_business_arrangements']); ?>
          
            <?php if (isset($unit_object->field_arrangments_file['und'][0]['fid'])): ?>
              <div class="download-link">
              <?php print l(t('View Arrangments'), '/download/file/fid/' . $unit_object->field_arrangments_file['und'][0]['fid']); ?>
              </div>
            <?php endif; ?> 
            <?php if (isset($unit_object->field_brochu_file['und'][0]['fid'])): ?>
              <div class="download-link">
              <?php print l(t('Download Our Brochure'), '/download/file/fid/' . $unit_object->field_brochu_file['und'][0]['fid']); ?>
              </div>
            <?php endif; ?> 
        </div>
      <?php endif; ?>
      
      <div class="content-item">
        <img class="icon icon-office" src="<?php print url($theme_path . '/images/icons/office.png'); ?>" alt="icon-home" /><h2 class="title nomarl"><?php print t('Search for availability'); ?></h2>
        <?php print render($search_form2); ?>
        <div class="row">
          <div class="col-md-7">
            <span class="date-title"><?php print t('Next available weekday'); ?></span>
            <div class="weekday">
            <?php 
              foreach ($weekday_forms as $weekday_form) {
                $weekday_form['form']['persons']['#default_value'] = 0;
                $weekday_form['form']['persons']['#value'] = 0;
                unset($weekday_form['form']['price']);
                unset($weekday_form['form']['options']);
                unset($weekday_form['form']['persons']);
                unset($weekday_form['form']['children']);
               
                print render($weekday_form['form']);
              }
            ?>
            </div>
            <span class="date-title"><?php print t('Next available weekend'); ?></span>
              <div class="weekday">
              <?php 
                foreach ($weekend_forms as $weekend_form) {
                  $weekend_form['form']['persons']['#default_value'] = 0;
                  $weekend_form['form']['persons']['#value'] = 0;
                  unset($weekend_form['form']['price']);
                  unset($weekend_form['form']['options']);
                  unset($weekend_form['form']['persons']);
                  unset($weekend_form['form']['children']);
                  
                  print render($weekend_form['form']);
                }
              ?>
              </div>
            <div class="check-in"><?php print t('Check-in @check-in', array('@check-in' => $unit_object->field_checkin['und'][0]['value'] . 'h')); ?></div>
            <div class="check-out"><?php print t('Check-out @check-out', array('@check-out' => $unit_object->field_checkout['und'][0]['value'] . 'h')); ?></div>
          </div>
          <?php

            $year = date('Y'); $month = date('m');
            
            // rooms_availability_modal_style();

            // Get the current page's URL, striped of the year and month args.
            // This allows us to place this page anywhere, including at
            // unit/%/availability  or  admin/rooms/units/unit/%/availability
            list($url) = explode('/' . $year . '/' . $month, current_path());

            $calendar = array(
              '#theme' => 'rooms_one_month_calendar',
              '#url' => $url,
              '#year' => $year,
              '#month' => $month,
              '#attached' => array(
                'css' => array(
                  drupal_get_path('module', 'rooms_availability') . '/css/rooms_availability.css',
                ),
                'js' => array(
                  drupal_get_path('module', 'edville_custom') . '/js/edville_rooms_availability.js',
                  array(
                    'data' => array('roomsAvailability' => array('roomID' => $unit_object->unit_id)),
                    'type' => 'setting',
                  ),
                ),
              ),
            );
          ?>
        <div class="col-md-5"><div id="theme-calendar"><?php print render($calendar); ?></div></div>
      </div>
    </div>
    
      <?php if (isset($unit_object->field_location['und'][0])): ?>
      <div class="content-item">
        <img class="icon icon-office" src="<?php print url($theme_path . '/images/icons/office.png'); ?>" alt="icon-home" /><h2 class="title nomarl"><?php print t('Location'); ?></h2>
        <?php print render($content['field_location']); ?>
      </div>
      <?php endif; ?>
      <?php
        unset ($content['state']);
        unset ($content['type']);
        unset ($content['sleeps']);
        unset ($content['bed_arrangement']);
        // print render($content);
      ?>
  </div>
</div>
</div>
<?php else: ?>
  <?php 
    $sub_path = str_replace('booking', '', current_path());
    $query = drupal_get_query_parameters();
    $query['book_result'] = 1;
  ?>
  <div class="unit-detail-content content"<?php print $content_attributes; ?>>
    <h2 class="title"><?php print l($title, 'unit/' . $unit_object->unit_id . $sub_path, array('query' => $query, 'html' => TRUE, 'attributes' => array('target' => '_blank'))); ?></h2>
    <ul class="room-features">
      <?php if ($unit_object->field_home['und'][0]['value'] == 1): ?>
      <li><img src="/<?php print $theme_path . '/images/icons/home.png'; ?>" /><span><?php print t('Home'); ?></span></li>
      <?php endif; ?>
      <li><img src="/<?php print $theme_path . '/images/icons/group-size.png'; ?>" /><span><?php print t('Group size ') . $unit_object->max_sleeps; ?></span></li>
      <li><img src="/<?php print $theme_path . '/images/icons/bed.png'; ?>" /><span><?php print $unit_object->data['bed_arrangement']['doubles'] . t(' doubles'); ?></span></li>
      <li><img src="/<?php print $theme_path . '/images/icons/bed.png'; ?>" /><span><?php print $unit_object->data['bed_arrangement']['singles'] . t(' singles'); ?></span></li>
      <li><img src="/<?php print $theme_path . '/images/icons/shower.png'; ?>" /><span><?php print $unit_object->field_showers['und'][0]['value'] . t(' shower'); ?></span></li>
      <?php if (isset($unit_object->field_student_approved['und'][0]['value']) && $unit_object->field_student_approved['und'][0]['value']): ?>
      <li><img src="/<?php print $theme_path . '/images/icons/student-approved.png'; ?>" /><span><?php print t('Student approved'); ?></span></li>
      <?php endif; ?>
      <?php if (isset($unit_object->field_business_approved['und'][0]['value']) && $unit_object->field_business_approved['und'][0]['value']): ?>
      <li><img src="/<?php print $theme_path . '/images/icons/business-approved.png'; ?>" /><span><?php print t('Business approved'); ?></span></li>
      <?php endif; ?>
      <li><img src="/<?php print $theme_path . '/images/icons/wc.png'; ?>" /><span><?php print $unit_object->field_wc['und'][0]['value'] . t(' WC'); ?></span></li>
      <li><img src="/<?php print $theme_path . '/images/icons/rooms.png'; ?>" /><span><?php print $unit_object->field_rooms['und'][0]['value'] . t(' rooms'); ?></span></li>
      <?php if (isset($unit_object->field_wifi['und'][0]['value']) && $unit_object->field_wifi['und'][0]['value']): ?>
      <li><img src="/<?php print $theme_path . '/images/icons/wifi.png'; ?>" /><span><?php print t('WIFI'); ?></span></li>
      <?php endif; ?>
    </ul>
    <?php 
      $first_img_uri = $unit_object->field_room_photos['und'][0]['uri']; 
      $first_image = array(
        'style_name' => 'blog_540x300_',
        'path' => $first_img_uri,
        'width' => '',
        'height' => '',
        'alt' => '',
        'title' => '',
        );
      print l(theme('image_style',$first_image), 'unit/' . $unit_object->unit_id . $sub_path, array('query' => $query, 'html' => TRUE, 'attributes' => array('target' => '_blank')));
    ?>
  </div>
<?php endif;  ?>
<?php endif;  ?>
  