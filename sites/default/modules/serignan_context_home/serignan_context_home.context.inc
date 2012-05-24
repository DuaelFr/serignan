<?php
/**
 * @file
 * serignan_context_home.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function serignan_context_home_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Page d\'accueil du site';
  $context->tag = 'Layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-nodequeue_1-block' => array(
          'module' => 'views',
          'delta' => 'nodequeue_1-block',
          'region' => 'header_first',
          'weight' => '-10',
        ),
        'views-news-block_home' => array(
          'module' => 'views',
          'delta' => 'news-block_home',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'serignan_blocks-home_col1' => array(
          'module' => 'serignan_blocks',
          'delta' => 'home_col1',
          'region' => 'preface_first',
          'weight' => '-9',
        ),
        'views-events-block_home' => array(
          'module' => 'views',
          'delta' => 'events-block_home',
          'region' => 'preface_second',
          'weight' => '-10',
        ),
        'serignan_blocks-home_col2' => array(
          'module' => 'serignan_blocks',
          'delta' => 'home_col2',
          'region' => 'preface_second',
          'weight' => '-9',
        ),
        'views-zoom-block_home' => array(
          'module' => 'views',
          'delta' => 'zoom-block_home',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
        'serignan_blocks-home_col3' => array(
          'module' => 'serignan_blocks',
          'delta' => 'home_col3',
          'region' => 'preface_third',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout');
  t('Page d\'accueil du site');
  $export['front'] = $context;

  return $export;
}
