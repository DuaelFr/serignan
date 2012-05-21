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
}
