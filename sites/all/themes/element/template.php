<?php

/**
 * @file
 * template.php
 */

function element_menu_tree__primary(&$variables) {  
  return '<ul class="nav navbar-nav navbar-right">' . $variables['tree'] . '</ul>';
}

function element_js_alter(&$js) {
  $bootstrap_js_path = drupal_get_path('theme', 'bootstrap') . '/js/bootstrap.js';
  unset($js[$bootstrap_js_path]);  
}

function element_preprocess_page(&$variables) {
  // Add information about the number of sidebars.
  if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-md-6 col-sm-4"';
  }
  elseif (!empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-md-9 col-sm-8"';
  }
  else {
    $variables['content_column_class'] = ' class="col-md-12"';
  } 
  drupal_add_js('http://maps.google.com/maps/api/js?sensor=false', array('type' => 'external'));
}

function element_theme() {
  return array(
    'contact_site_form' => array(
	  'render element' => 'form',
	  'template' => 'contact-site-form',
	  'path' => drupal_get_path('theme', 'element').'/templates/system',
    ),
  );
}

/**
 * Overrides theme_menu_link().
 */
function element_menu_link(array $variables) {
   $element = $variables['element'];
  $sub_menu = '';
  
  if ($element['#below']) {
   
    // Prevent dropdown functions from being added to management menu as to not affect navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    else {
     
      // Add our own wrapper
      unset($element['#below']['#theme_wrappers']);
      if ($element['#original_link']['depth'] >= 2) {
        $sub_menu = '<ul class="drop-down level3">' . drupal_render($element['#below']) . '</ul>';
      }
      else {
        $sub_menu = '<ul class="drop-down">' . drupal_render($element['#below']) . '</ul>'; 
      }
      
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
     
      // Check if this element is nested within another
      if ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] > 1)) {
        // Generate as dropdown submenu
        $element['#attributes']['class'][] = 'drop';
        $sub_menu = '<i class="fa fa-angle-right pull-right"></i>' . $sub_menu;
      }
      else {
        // Generate as standard dropdown
        $element['#attributes']['class'][] = 'drop';
        $element['#localized_options']['html'] = TRUE;        
      }
     
      // Set dropdown trigger element to # to prevent inadvertant page loading with submenu click
      $element['#localized_options']['attributes']['data-target'] = '#';       
    }
  }
  // Issue #1896674 - On primary navigation menu, class 'active' is not set on active menu item.
  // @see http://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']) || $element['#localized_options']['language']->language == $language_url->language)) {
     $element['#attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Implements hook_form_alter().
 */
function element_form_alter(array &$form, array &$form_state = array(), $form_id = NULL) {
  if ($form_id) {
    // IDs of forms that should be ignored. Make this configurable?
    // @todo is this still needed?
    $form_ids = array(
      'node_form',
      'system_site_information_settings',
      'user_profile_form',
      'node_delete_confirm',
    );
    // Only wrap in container for certain form.
    if (!in_array($form_id, $form_ids) && !isset($form['#node_edit_form']) && isset($form['actions']) && isset($form['actions']['#type']) && ($form['actions']['#type'] == 'actions')) {
      $form['actions']['#theme_wrappers'] = array();
    }

    switch ($form_id) {      
      case 'search_block_form':       
        foreach ($form['#attributes']['class'] as $key => $value) {
          if ($value == 'form-search') {
            unset($form['#attributes']['class'][$key]);           
          }
        }                     
        break;
    }

  }
}

/**
* Implements hook_link_alter()
*/
function element_link_alter(&$links, $node, $comment = NULL) {die;
  if (isset($links['flag-like'])) {
    //find out the number of bookmarks for this node
    $result = db_result(db_query("SELECT count FROM {flag_counts} WHERE content_type ='node' AND content_id = %d", $node->nid));
    if (empty($result)) {
      $result = 0;
    }
    $links['flag-like']['title'] .= "($result)";
  }
}