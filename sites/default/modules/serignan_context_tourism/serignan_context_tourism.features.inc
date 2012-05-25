<?php
/**
 * @file
 * serignan_context_tourism.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function serignan_context_tourism_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function serignan_context_tourism_views_api() {
  return array("version" => "3.0");
}
