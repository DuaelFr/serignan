<?php
/**
 * @file
 * serignan_context_home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function serignan_context_home_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
