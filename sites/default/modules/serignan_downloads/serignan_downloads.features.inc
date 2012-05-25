<?php
/**
 * @file
 * serignan_downloads.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function serignan_downloads_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function serignan_downloads_node_info() {
  $items = array(
    'download' => array(
      'name' => t('Téléchargement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  return $items;
}
