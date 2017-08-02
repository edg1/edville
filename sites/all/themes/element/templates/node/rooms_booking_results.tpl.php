
<?php if (isset($change_search)): ?>
   <?php
    module_load_include('inc', 'rooms_booking_manager', 'rooms_booking_manager.availability_search');
    $booking_search_form = drupal_get_form('rooms_booking_availability_search_form_page');
    // $start_date = check_plain(arg(1));
    // $end_date = check_plain(arg(2));

    // $booking_search_form['rooms_date_range']['rooms_start_date']['#value']['date'] = $start_date;
    // $booking_search_form['rooms_date_range']['rooms_end_date']['#value']['date'] = $end_date;
   ?>
  <?php print render($booking_search_form); ?>
<?php endif; ?>

<?php if (!$booking_results): ?>
  <?php print render($no_results); ?>
  <?php print render($booking_search_form); ?>
<?php endif; ?>

<?php if (isset($style) && ($style == ROOMS_INDIVIDUAL)): ?>
  <?php if ($booking_results): ?>
    <?php print render($legend); ?>

    <div class="rooms-search-result-content">
      <div class="rooms-search-result-container">
      <?php foreach ($units_per_type as $type_name => $units_per_price_level): ?>
        <!-- <div class="col-md-6 rooms-search-result__unit-type"> -->

          <?php foreach ($units_per_price_level as $price => $units) : ?>
            <?php foreach ($units as $unit_id => $unit) : ?>
              <div class="col-md-6 rooms-search-result__unit-embedded" id="unit_<?php print $unit_id ?>">
              <?php
                print render($unit['unit']);
                print render($unit['price']);
                print render($unit['book_unit_form']);
              ?>
              </div>
            <?php endforeach; ?>
          <?php endforeach; ?>
          <!-- </div> -->

      <?php endforeach; ?>
      </div>
    </div>
  <?php endif; ?>
<?php endif; ?>

<?php if (isset($style) && ($style == ROOMS_PER_TYPE)): ?>
  <?php if ($booking_results): ?>
    <?php print render($units_per_type_form); ?>
  <?php endif; ?>
<?php endif; ?>
