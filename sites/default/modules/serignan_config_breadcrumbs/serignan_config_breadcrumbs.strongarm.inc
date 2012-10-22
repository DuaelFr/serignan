<?php
/**
 * @file
 * serignan_config_breadcrumbs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function serignan_config_breadcrumbs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'crumbs_weights';
  $strongarm->value = array(
    'serignan_commons' => 0,
    'menu.hierarchy.main-menu' => 1,
    'taxonomy.termReference.field_section_main.*' => 2,
    'path' => 3,
    'menu.hierarchy.navigation' => 4,
    '*' => 5,
  );
  $export['crumbs_weights'] = $strongarm;

  return $export;
}
