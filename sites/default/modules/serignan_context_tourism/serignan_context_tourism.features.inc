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

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function serignan_context_tourism_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: slideshow_tourism
  $nodequeues['slideshow_tourism'] = array(
    'qid' => '2',
    'name' => 'slideshow_tourism',
    'title' => 'Slideshow Tourism',
    'subqueue_title' => '',
    'size' => '5',
    'link' => 'Ajouter au diaporama tourisme',
    'link_remove' => 'Retirer du diaporama tourisme',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '1',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '1',
    'subqueues' => '1',
    'types' => array(
      0 => 'event',
      1 => 'news',
      2 => 'zoom',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
