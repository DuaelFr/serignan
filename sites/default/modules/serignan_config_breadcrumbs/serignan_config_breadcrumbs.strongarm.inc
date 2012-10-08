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
    'menu.hierarchy.main-menu' => 0,
    'taxonomy.termReference.field_section_main.*' => 1,
    'path' => 2,
    'menu.hierarchy.navigation' => 3,
    '*' => 4,
  );
  $export['crumbs_weights'] = $strongarm;

  return $export;
}
