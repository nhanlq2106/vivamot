<?php
/**
 * @file
 * fitting_room.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function fitting_room_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'fitting_items';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Fitting items';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_display_products-block_2',
      'hide_title' => 1,
      'title' => 'Skirt',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_display_products-block_3',
      'hide_title' => 1,
      'title' => 'Blouse',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blouse');
  t('Fitting items');
  t('Skirt');

  $export['fitting_items'] = $quicktabs;

  return $export;
}
