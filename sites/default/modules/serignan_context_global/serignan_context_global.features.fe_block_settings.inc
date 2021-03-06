<?php
/**
 * @file
 * serignan_context_global.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function serignan_context_global_default_fe_block_settings() {
  $export = array();

  // serignan
  $theme = array();

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'serignan',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['megamenu-main-menu'] = array(
    'module' => 'megamenu',
    'delta' => 'main-menu',
    'theme' => 'serignan',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu',
    'theme' => 'serignan',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-top-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-top-menu',
    'theme' => 'serignan',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['print-print-links'] = array(
    'module' => 'print',
    'delta' => 'print-links',
    'theme' => 'serignan',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'serignan',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['serignan_blocks-follow_us'] = array(
    'module' => 'serignan_blocks',
    'delta' => 'follow_us',
    'theme' => 'serignan',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['serignan_blocks-magazine'] = array(
    'module' => 'serignan_blocks',
    'delta' => 'magazine',
    'theme' => 'serignan',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['serignan_blocks-sidebar_links'] = array(
    'module' => 'serignan_blocks',
    'delta' => 'sidebar_links',
    'theme' => 'serignan',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['serignan_blocks-weather'] = array(
    'module' => 'serignan_blocks',
    'delta' => 'weather',
    'theme' => 'serignan',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['simplenews-0'] = array(
    'module' => 'simplenews',
    'delta' => '0',
    'theme' => 'serignan',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Newsletter',
    'cache' => '1',
  );

  $theme['text_resize-0'] = array(
    'module' => 'text_resize',
    'delta' => '0',
    'theme' => 'serignan',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $export['serignan'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
