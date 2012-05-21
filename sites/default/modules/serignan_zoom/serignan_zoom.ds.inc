<?php
/**
 * @file
 * serignan_zoom.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function serignan_zoom_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|zoom|home';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'zoom';
  $ds_fieldsetting->view_mode = 'home';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|zoom|home'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function serignan_zoom_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|zoom|home';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'zoom';
  $ds_layout->view_mode = 'home';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_picture',
        1 => 'title',
        2 => 'field_subtitle',
        3 => 'body',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_picture' => 'ds_content',
      'title' => 'ds_content',
      'field_subtitle' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|zoom|home'] = $ds_layout;

  return $export;
}
