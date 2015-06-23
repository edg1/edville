<?php

/**
 * @file
 * Rules integration for Commerce Cart Expiration.
 *
 * @addtogroup rules
 * @{
 */

/**
 * Implements hook_rules_action_info().
 */
function edville_tourist_tax_rules_action_info() {
  $actions = array();

  $actions['edville_tourist_tax_calculate_tax'] = array(
    'label' => t('Calculate Tourist Tax'),
    'parameter' => array(
      'number_of_people' => array(
        'type' => 'number',
        'label' => t('Number of people'),
        'description' => t('The number of people listed in a booking'),
      ),
    ),
    'group' => t('Commerce Cart'),
    'callbacks' => array(
      'execute' => 'edville_tourist_tax_set_tax ',
    ),
  );

  return $actions;
}

/**
 * Implements hook_rules_event_info().
 
function edville_tourist_tax_rules_event_info() {
  $events = array();
  /*
  $events['commerce_cart_expiration_cron'] = array(
    'label' => t('Commerce Cart Expiration cron is executed'),
    'group' => t('Commerce Cart'),
    'access callback' => 'commerce_order_rules_access',
  );

  $events['commerce_cart_expiration_delete_order'] = array(
    'label' => t('Before deleting an expired cart'),
    'group' => t('Commerce Cart'),
    'variables' => array(
      'commerce_order' => array(
        'type' => 'commerce_order',
        'label' => t('Expired cart', array(), array('context' => 'a drupal commerce order')),
      ),
    ),
    'access callback' => 'commerce_order_rules_access',
  );
  
  return $events;
}
*/

/**
 * Rules action: deletes expired cart orders based on the provided interval and limit.
 */
function edville_tourist_tax_set_tax($guests = 0) {
  if ($guests > 0) {
    //$expired_order_ids = commerce_cart_expiration_get_expired_carts($interval, $limit);
    //if (!empty($expired_order_ids)) {
      //$expired_orders = commerce_order_load_multiple($expired_order_ids);
      //foreach ($expired_orders as $order) {
        // Invoke a Rules event for deleting an expired cart order.
        //rules_invoke_all('commerce_cart_expiration_delete_order', $order);
      //}
      //commerce_order_delete_multiple($expired_order_ids);
    //}
      die("DIDIEIEIEIE");
  }
}

/**
 * @}
 */
