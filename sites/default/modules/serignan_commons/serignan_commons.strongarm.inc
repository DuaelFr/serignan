<?php
/**
 * @file
 * serignan_commons.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function serignan_commons_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'front';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
