<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
$color_array = array('blue-back', 'green-back', 'red-back', 'pink-back', 'orange-back', 'alt-back');
$i = 0;
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="services-box">
	<?php foreach ($rows as $id => $row): ?>
	  <div<?php if ($classes_array[$id]) { print ' class=" services-post ' . $color_array[$i] .' ' . $classes_array[$id] .'"';  } ?>>
	    <?php print $row; ?>
	  </div>
	<?php if (isset($color_array[$i])) $i++; endforeach; ?>
</div>