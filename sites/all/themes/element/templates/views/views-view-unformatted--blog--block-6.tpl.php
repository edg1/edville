<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php $i = 0; $count = count($rows);?>
<?php foreach ($rows as $id => $row): ?>
	<?php if($i % 2 == 0):?>
		<div class="blog-row">
	<?php endif;?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
  <?php if($i % 2 == 1 || $i == $count - 1):?>
		</div>
	<?php endif;?>
	<?php $i++;?>
<?php endforeach; ?>