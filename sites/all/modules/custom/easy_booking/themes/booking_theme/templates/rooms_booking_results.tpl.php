<?php if (!$booking_results): ?>
  <?php print render($no_results); ?>
<?php endif; ?>
<?php if (isset($style) && ($style == ROOMS_INDIVIDUAL)): ?>
  <?php if ($booking_results): ?>
    <?php print render($legend); ?>
    <div class="rooms-search-result__unit-type">
      <?php
        $output = NULL;
        $per_page = 6;
        $current_page = pager_default_initialize(count($easy_booking_results), $per_page);
        $chunks = array_chunk($easy_booking_results, $per_page, TRUE);
      ?>
      <?php foreach($chunks[$current_page] as $value) : ?>
        <div class="rooms-search-result__unit-embedded" id="unit_<?php print $value['unit_id'] ?>">
          <?php
            print render($value['photos']);
            print render($value['price']);
            print render($value['name']);
          ?>
        </div>
      <?php endforeach; ?>
    </div>
    <?php
      $output .= theme('pager', array('quantity',count($easy_booking_results)));
      print ($output);
    ?>
  <?php endif; ?>
<?php endif; ?>

<?php if (isset($style) && ($style == ROOMS_PER_TYPE)): ?>
  <?php if ($booking_results): ?>
    <?php print render($units_per_type_form); ?>
  <?php endif; ?>
<?php endif; ?>
