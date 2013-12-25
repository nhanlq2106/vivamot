<?php
/**
 * @file
 * contactus.box.inc
 */

/**
 * Implements hook_default_box().
 */
function contactus_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contact_details';
  $box->plugin_key = 'simple';
  $box->title = 'Contact Us';
  $box->description = 'Contact Details';
  $box->options = array(
    'body' => array(
      'value' => '123, Chung cư Hồ Văn Huê

    t (08) 3369 7666
    f (08) 3369 7566
    e enquiries@vivamot.com',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['contact_details'] = $box;

  return $export;
}
