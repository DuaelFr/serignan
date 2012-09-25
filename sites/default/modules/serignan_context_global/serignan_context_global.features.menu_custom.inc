<?php
/**
 * @file
 * serignan_context_global.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function serignan_context_global_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => 'Menu du pied de page',
  );
  // Exported menu: menu-top-menu.
  $menus['menu-top-menu'] = array(
    'menu_name' => 'menu-top-menu',
    'title' => 'Top menu',
    'description' => 'Menu en haut à droite',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu');
  t('Menu du pied de page');
  t('Menu en haut à droite');
  t('Top menu');


  return $menus;
}
