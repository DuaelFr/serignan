<?php
/**
 * @file
 * serignan_sections.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function serignan_sections_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_path_section';
  $strongarm->value = 'taxonomy_menu_path_default';
  $export['taxonomy_menu_path_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_rebuild_section';
  $strongarm->value = 0;
  $export['taxonomy_menu_rebuild_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_menu_section';
  $strongarm->value = 'main-menu';
  $export['taxonomy_menu_vocab_menu_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_parent_section';
  $strongarm->value = '0';
  $export['taxonomy_menu_vocab_parent_section'] = $strongarm;

  return $export;
}
