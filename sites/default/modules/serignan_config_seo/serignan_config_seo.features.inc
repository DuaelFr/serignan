<?php
/**
 * @file
 * serignan_config_seo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function serignan_config_seo_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
