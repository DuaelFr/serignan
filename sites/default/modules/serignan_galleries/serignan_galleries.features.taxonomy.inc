<?php
/**
 * @file
 * serignan_galleries.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function serignan_galleries_taxonomy_default_vocabularies() {
  return array(
    'galleries_category' => array(
      'name' => 'Catégorie de galeries',
      'machine_name' => 'galleries_category',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
