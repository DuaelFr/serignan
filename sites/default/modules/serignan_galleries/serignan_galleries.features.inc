<?php
/**
 * @file
 * serignan_galleries.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function serignan_galleries_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function serignan_galleries_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function serignan_galleries_image_default_styles() {
  $styles = array();

  // Exported image style: gallery_home
  $styles['gallery_home'] = array(
    'name' => 'gallery_home',
    'effects' => array(
      4 => array(
        'label' => 'Scale and Smart Crop',
        'help' => 'Similar to "Scale And Crop", but preserves the portion of the image with the most entropy.',
        'effect callback' => 'smartcrop_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'smartcrop',
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => '283',
          'height' => '160',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function serignan_galleries_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Galerie'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  return $items;
}
