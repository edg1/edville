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
  module_load_include('inc', 'rooms_booking_manager', 'rooms_booking_manager.availability_search');
  $search_form = drupal_get_form('rooms_booking_availability_search_form_page');
  $search_form2 = drupal_get_form('rooms_booking_availability_search_form_block');
  $unit_object = isset($content['rooms_booking_unit_options']['#object']) ?  $content['rooms_booking_unit_options']['#object'] : null;
  if (empty($unit_object) || arg(0) != 'unit') return;
  $availability = get_avaiable_in_current_month($unit_object->unit_id); 
  $weekday_forms = array();
  if (isset($availability['weekday_availability']['data'])) {
    $i = 0;  
    foreach ($availability['weekday_availability']['data'] as $key => $item) {
      $date_from = new Datetime(($item['start']) . '-' . Date('m-Y')); 
      if (!isset($item['end']) || (isset($item['end']) && $item['end'] == 0)) {
        $item['end'] = $item['start']; 
      }
      $date_to = new Datetime(($item['end'] + 1) . '-' . Date('m-Y'));
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
      $date_to = new Datetime(($item['end'] + 1) . '-' . Date('m-Y'));
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
  
  
  

  $theme_path = drupal_get_path('theme', 'element');
?>
<?php if (!is_null($unit_object)): ?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="unit-detail-content content"<?php print $content_attributes; ?>>
    <h2><?php print $title; ?></h2>
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
      <li><img src="/<?php print $theme_path . '/images/icons/wc.png'; ?>" /><span><?php print $unit_object->field_wc['und'][0]['value'] . t(' WC'); ?></span></li>
      <li><img src="/<?php print $theme_path . '/images/icons/rooms.png'; ?>" /><span><?php print $unit_object->field_rooms['und'][0]['value'] . t(' rooms'); ?></span></li>
      <?php if (isset($unit_object->field_wifi['und'][0]['value']) && $unit_object->field_wifi['und'][0]['value']): ?>
      <li><img src="/<?php print $theme_path . '/images/icons/wifi.png'; ?>" /><span><?php print t('WIFI'); ?></span></li>
      <?php endif; ?>
    </ul>
    <?php print render($search_form); ?>
    <?php print render($content['field_room_photos']); ?>
    <?php print render($content['field_description']); ?>
    <?php print render($content['field_student_arrangements']); ?>
    <?php print render($content['field_business_arrangements']); ?>
    <?php print render($content['field_arrangments_file']); ?>
    <?php print render($content['field_brochu_file']); ?>
    <?php print render($search_form2); ?>
    <div class="col-md-5">
      <?php 
        foreach ($weekday_forms as $weekday_form) {
          $weekday_form['form']['persons']['#default_value'] = 0;
          $weekday_form['form']['persons']['#value'] = 0;
          unset($weekday_form['form']['price']);
          unset($weekday_form['form']['options']);
          unset($weekday_form['form']['persons']);
          unset($weekday_form['form']['children']);
          $date_to_display = $weekday_form['date_to'];
          $date_to_display->sub(new DateInterval('P1D'));

          print t('From @from to @to', array('@from' => $weekday_form['date_from']->format('d-m-Y'), '@to' => $date_to_display->format('d-m-Y')));
          print render($weekday_form['form']);
        }
      ?>

      <?php 
        foreach ($weekend_forms as $weekend_form) {
          $weekend_form['form']['persons']['#default_value'] = 0;
          $weekend_form['form']['persons']['#value'] = 0;
          unset($weekend_form['form']['price']);
          unset($weekend_form['form']['options']);
          unset($weekend_form['form']['persons']);
          unset($weekend_form['form']['children']);
          $date_to_display = $weekend_form['date_to'];
          $date_to_display->sub(new DateInterval('P1D'));

          print t('From @from to @to', array('@from' => $weekend_form['date_from']->format('d-m-Y'), '@to' => $date_to_display->format('d-m-Y')));
          print render($weekend_form['form']);
        }
      ?>
      <?php print render($content['field_checkin']); ?>
      <?php print render($content['field_checkout']); ?>
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
    <div class="col-md-7"><?php print render($calendar); ?></div>
    <?php print render($content['field_location']); ?>
    <?php
      unset ($content['state']);
      unset ($content['type']);
      unset ($content['sleeps']);
      unset ($content['bed_arrangement']);
      // print render($content);
    ?>
  </div>
</div>
<?php else: ?>
  <div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>>
         <?php print $title; ?>
      </h2>
    <?php endif; ?>

    <div class="content"<?php print $content_attributes; ?>>
      <?php
        unset ($content['state']);
        unset ($content['type']);
        unset ($content['sleeps']);
        unset ($content['bed_arrangement']);
        print render($content);
      ?>
    </div>
  </div>
<?php endif; ?>