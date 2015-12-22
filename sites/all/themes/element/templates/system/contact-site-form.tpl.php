<?php        
    hide($form['copy']);
    $form['message']['#resizable'] = FALSE;
    $form['name']['#attributes']['placeholder'] = $form['name']['#title'];
    unset($form['name']['#title']);
    $form['mail']['#attributes']['placeholder'] = $form['mail']['#title'];
    unset($form['mail']['#title']);
    $form['subject']['#attributes']['placeholder'] = $form['subject']['#title'];
    unset($form['subject']['#title']);
    $form['message']['#attributes']['placeholder'] = $form['message']['#title'];
    unset($form['message']['#title']);
?>

<div class="row">
    <div class="col-md-4">
        <?php print render($form['name']); ?>  
    </div>              
    <div class="col-md-4">
        <?php print render($form['mail']); ?>        
    </div>
    <div class="col-md-4">
        <?php print render($form['subject']); ?>    
    </div>    
</div>
<?php print render($form['message']); ?> 
<div class="submit-area">
    <?php print render($form['actions']); ?>                             
</div>
<?php print drupal_render_children($form); ?>