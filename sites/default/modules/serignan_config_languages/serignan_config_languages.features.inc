<?php
/**
 * @file
 * serignan_config_languages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function serignan_config_languages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
