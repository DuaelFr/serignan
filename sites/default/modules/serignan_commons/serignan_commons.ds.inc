<?php
/**
 * @file
 * serignan_commons.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function serignan_commons_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'home';
  $ds_view_mode->label = 'Home';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'user' => 'user',
  );
  $export['home'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'list';
  $ds_view_mode->label = 'List';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'user' => 'user',
  );
  $export['list'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'slideshow';
  $ds_view_mode->label = 'Slideshow';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['slideshow'] = $ds_view_mode;

  return $export;
}
