<?php
/**
 * @file
 * serignan_sections.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function serignan_sections_taxonomy_default_vocabularies() {
  return array(
    'section' => array(
      'name' => 'Rubrique',
      'machine_name' => 'section',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'metatags' => array(),
    ),
  );
}
