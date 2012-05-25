<?php
/**
 * @file
 * serignan_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function serignan_news_taxonomy_default_vocabularies() {
  return array(
    'news_category' => array(
      'name' => 'Catégorie d\'actualités',
      'machine_name' => 'news_category',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'metatags' => array(),
    ),
  );
}
