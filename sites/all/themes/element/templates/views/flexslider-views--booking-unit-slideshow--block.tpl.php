<?php
	$heusden = array();
	$heusden['caption'] = '';
	$heusden['slide'] = '<div class="slide White heusden-slide"><img src="//ed.be/sites/default/files/heusden6.jpg">
		<div class="slide-content">
		<div class="wrapper">
		<div class="slide-text">
		<h4>Take care of your sound, your wellbeing, your heart & everything that\'s you</h4>

		<div class="slide-description">
		<h2>Is it you we are looking for?</h2>
		<p><img src="//ed.be/sites/default/files/edville_0.png"></p>
		<p>Your place for business, pleasure <span style="font-size:16px;">&amp;</span> wellbeing.</p>
		<h1>HEUSDEN</h1>
		</div>
		<div class="slide-link"><a href="/heusden">MORE INFO</a></div>
		</div>
		</div>
		</div>
		</div>';

	array_unshift($items, $heusden);
	print theme('flexslider', array('items' => $items, 'settings' => $settings));