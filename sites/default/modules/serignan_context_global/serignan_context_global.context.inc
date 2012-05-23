<?php
/**
 * @file
 * serignan_context_global.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function serignan_context_global_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all';
  $context->description = 'Toutes les pages du site';
  $context->tag = 'Layout';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-help' => array(
          'module' => 'system',
          'delta' => 'help',
          'region' => 'content',
          'weight' => '0',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '1',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'menu-menu-top-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-top-menu',
          'region' => 'menu',
          'weight' => '-9',
        ),
        'megamenu-main-menu' => array(
          'module' => 'megamenu',
          'delta' => 'main-menu',
          'region' => 'menu',
          'weight' => '9',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header_second',
          'weight' => '-25',
        ),
        'print-print-links' => array(
          'module' => 'print',
          'delta' => 'print-links',
          'region' => 'header_second',
          'weight' => '-24',
        ),
        'text_resize-0' => array(
          'module' => 'text_resize',
          'delta' => 0,
          'region' => 'header_second',
          'weight' => '-23',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-galleries-block_home_videos' => array(
          'module' => 'views',
          'delta' => 'galleries-block_home_videos',
          'region' => 'postscript_first',
          'weight' => '-9',
        ),
        'simplenews-0' => array(
          'module' => 'simplenews',
          'delta' => 0,
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'views-galleries-block_home_photos' => array(
          'module' => 'views',
          'delta' => 'galleries-block_home_photos',
          'region' => 'postscript_second',
          'weight' => '-9',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
        'views-galleries-block_home_visits' => array(
          'module' => 'views',
          'delta' => 'galleries-block_home_visits',
          'region' => 'postscript_third',
          'weight' => '-9',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer_first',
          'weight' => '0',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'footer_second',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout');
  t('Toutes les pages du site');
  $export['all'] = $context;

  return $export;
}