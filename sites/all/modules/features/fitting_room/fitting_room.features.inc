<?php
/**
 * @file
 * fitting_room.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fitting_room_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fitting_room_views_api() {
  return array("version" => "3.0");
}
