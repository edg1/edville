<div class="toggle-section">  
  <div class="accordion-box triggerAnimation animated" data-animate="slideInUp">
    <?php  $i = 0; foreach ($rows as $key => $row): ?>
      <?php 
        if ($i == 0) {            
          $class = 'active';             
        }
        else {            
          $class = '';             
        }
      ?>
      <div class="accord-elem <?php print $class; ?>">
        <div class="accord-title">
          <h2><?php print $titles[$key]; ?></h2>
          <a class="accord-link" href="#"></a>
        </div>
        <div class="accord-content">
          <?php print $row; ?>
        </div>
      </div>
    <?php $i++; endforeach; ?>
  </div>  
</div>