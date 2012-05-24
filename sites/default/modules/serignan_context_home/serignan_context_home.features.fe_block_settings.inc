<?php
/**
 * @file
 * serignan_context_home.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function serignan_context_home_default_fe_block_settings() {
  $export = array();

  // serignan
  $theme = array();

  $theme['serignan_blocks-home_col1'] = array(
    'module' => 'serignan_blocks',
    'delta' => 'home_col1',
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

  $theme['serignan_blocks-home_col2'] = array(
    'module' => 'serignan_blocks',
    'delta' => 'home_col2',
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

  $theme['serignan_blocks-home_col3'] = array(
    'module' => 'serignan_blocks',
    'delta' => 'home_col3',
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
