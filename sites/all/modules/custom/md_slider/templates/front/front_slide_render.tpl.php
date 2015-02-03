<?php
/**
 * @file: front_slide_render.tpl.php
 * User: Duy
 * Date: 1/29/13
 * Time: 4:13 PM
 */
?>
<?php if (!isset($slide->settings["disabled"]) || !$slide->settings["disabled"]):?>
  <div class="md-slide-item slide-<?php print $index+1;?>" <?php print $data_properties;?>>
    <div class="md-mainimg" style="<?php print $background_style;?>">
      <?php if (!empty($background_url)):?>
        <img src="<?php print $background_url;?>" alt=""<?php print $background_style;?> />
      <?php endif;?>
    </div>
    <div class="md-objects">
      <?php foreach ($slide->layers as $index => $layer):?>
        <?php print theme('front_layers_render', array('index' => $index, 'layer' => $layer));?>
      <?php endforeach;?>
    </div>
  </div>
<?php endif;?>
