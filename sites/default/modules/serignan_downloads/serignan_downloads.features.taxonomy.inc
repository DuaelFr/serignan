<?php
/**
 * @file
 * serignan_downloads.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function serignan_downloads_taxonomy_default_vocabularies() {
  return array(
    'downloads_category' => array(
      'name' => 'Catégorie de téléchargements',
      'machine_name' => 'downloads_category',
      'description' => 'Concerne la Presse, les Publications et les Téléchargements',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'metatags' => array(),
    ),
  );
}
