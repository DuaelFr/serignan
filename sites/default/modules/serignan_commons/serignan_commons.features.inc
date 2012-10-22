<?php
/**
 * @file
 * serignan_commons.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function serignan_commons_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function serignan_commons_views_api() {
  return array("version" => "3.0");
}
