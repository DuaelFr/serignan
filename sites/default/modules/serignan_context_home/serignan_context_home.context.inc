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
        'views-news-block_1' => array(
          'module' => 'views',
          'delta' => 'news-block_1',
          'region' => 'preface_first',
          'weight' => '-16',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'preface_first',
          'weight' => '-15',
        ),
        'views-events-block_1' => array(
          'module' => 'views',
          'delta' => 'events-block_1',
          'region' => 'preface_second',
          'weight' => '-16',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'preface_second',
          'weight' => '-15',
        ),
        'views-zoom-block_1' => array(
          'module' => 'views',
          'delta' => 'zoom-block_1',
          'region' => 'preface_third',
          'weight' => '-16',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'preface_third',
          'weight' => '-15',
        ),
      ),
    ),
    'region' => array(
      'serignan' => array(
        'disable' => array(
          'content' => 'content',
          'sidebar_second' => 'sidebar_second',
          'page_top' => 0,
          'page_bottom' => 0,
          'menu' => 0,
          'branding' => 0,
          'header_first' => 0,
          'header_second' => 0,
          'preface_first' => 0,
          'preface_second' => 0,
          'preface_third' => 0,
          'postscript_first' => 0,
          'postscript_second' => 0,
          'postscript_third' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
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
