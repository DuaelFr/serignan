<?php
/**
 * @file
 * serignan_context_slideshows.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function serignan_context_slideshows_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function serignan_context_slideshows_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function serignan_context_slideshows_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: slideshow
  $nodequeues['slideshow'] = array(
    'qid' => '1',
    'name' => 'slideshow',
    'title' => 'Slideshow Home',
    'subqueue_title' => '',
    'size' => '5',
    'link' => 'Ajouter au diaporama "Accueil"',
    'link_remove' => 'Retirer du diaporama "Accueil"',
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

  // Exported nodequeues: slideshow_live
  $nodequeues['slideshow_live'] = array(
    'qid' => '3',
    'name' => 'slideshow_live',
    'title' => 'Slideshow Live',
    'subqueue_title' => '',
    'size' => '5',
    'link' => 'Ajouter au diaporama "Vivre à Sérignan"',
    'link_remove' => 'Retirer du diaporama "Vivre à Sérignan"',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '1',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'event',
      1 => 'news',
      2 => 'zoom',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: slideshow_news_events
  $nodequeues['slideshow_news_events'] = array(
    'qid' => '4',
    'name' => 'slideshow_news_events',
    'title' => 'Slideshow News-Events',
    'subqueue_title' => '',
    'size' => '5',
    'link' => 'Ajouter au diapo "Actualités - Agenda"',
    'link_remove' => 'Retirer du diapo "Actualités - Agenda"',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '1',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'event',
      1 => 'news',
      2 => 'zoom',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: slideshow_services
  $nodequeues['slideshow_services'] = array(
    'qid' => '5',
    'name' => 'slideshow_services',
    'title' => 'Slideshow Services',
    'subqueue_title' => '',
    'size' => '5',
    'link' => 'Ajouter au diaporama "Mairie - Services"',
    'link_remove' => 'Retirer du diaporama "Mairie - Services"',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '1',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'event',
      1 => 'news',
      2 => 'zoom',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: slideshow_tourism
  $nodequeues['slideshow_tourism'] = array(
    'qid' => '2',
    'name' => 'slideshow_tourism',
    'title' => 'Slideshow Tourism',
    'subqueue_title' => '',
    'size' => '5',
    'link' => 'Ajouter au diaporama "Sortir - Découvri"',
    'link_remove' => 'Retirer du diaporama "Sortir - Découvri"',
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

/**
 * Implements hook_image_default_styles().
 */
function serignan_context_slideshows_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow.
  $styles['slideshow'] = array(
    'name' => 'slideshow',
    'effects' => array(
      5 => array(
        'label' => 'Scale and Smart Crop',
        'help' => 'Similar to "Scale And Crop", but preserves the portion of the image with the most entropy.',
        'effect callback' => 'smartcrop_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'smartcrop',
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => '1015',
          'height' => '466',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
