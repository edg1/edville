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
<div class="container">
	<div class="row">
		<?php foreach ($rows as $id => $row): ?>
		  <div<?php if ($classes_array[$id]) { print ' class=" col-md-2 ' . $classes_array[$id] .'"';  } ?>>
		    <?php print $row; ?>
		  </div>
		<?php endforeach; ?>
	</div>
</div>