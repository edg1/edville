<?php
/**
 * @file
 * feature_rules_notify_admin.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function feature_rules_notify_admin_default_rules_configuration() {
  $items = array();
  $items['rules_easy_booking_notify_administrator'] = entity_import('rules_config', '{ "rules_easy_booking_notify_administrator" : {
      "LABEL" : "Easy booking notify administrator",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3" } },
            "subject" : "A new booking on [site:name].",
            "message" : "Dear administrator!\\r\\nA new booking was just performed at [site:name].\\r\\n\\r\\nBooking date: [commerce-order:created]\\r\\nCustomer\\u0027s e-mail: [commerce-order:mail]\\r\\n\\r\\nYou can view the order here: \\r\\n[commerce-order:admin-url]\\r\\n\\r\\nRegards,\\r\\n[site:name]"
          }
        }
      ]
    }
  }');
  return $items;
}
