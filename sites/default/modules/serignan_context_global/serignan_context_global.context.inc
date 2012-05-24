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
        'serignan_blocks-magazine' => array(
          'module' => 'serignan_blocks',
          'delta' => 'magazine',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-galleries-block_home_videos' => array(
          'module' => 'views',
          'delta' => 'galleries-block_home_videos',
          'region' => 'postscript_first',
          'weight' => '-8',
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
        'serignan_blocks-follow_us' => array(
          'module' => 'serignan_blocks',
          'delta' => 'follow_us',
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
        'views-galleries-block_home_visits' => array(
          'module' => 'views',
          'delta' => 'galleries-block_home_visits',
          'region' => 'postscript_third',
          'weight' => '-8',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer_first',
          'weight' => '0',
        ),
        'serignan_blocks-weather' => array(
          'module' => 'serignan_blocks',
          'delta' => 'weather',
          'region' => 'footer_second',
          'weight' => '-10',
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not-front';
  $context->description = 'Toutes les pages sauf l\'accueil';
  $context->tag = 'Layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-block_sidebar' => array(
          'module' => 'views',
          'delta' => 'news-block_sidebar',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-events-block_sidebar' => array(
          'module' => 'views',
          'delta' => 'events-block_sidebar',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-zoom-block_sidebar' => array(
          'module' => 'views',
          'delta' => 'zoom-block_sidebar',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'serignan_blocks-sidebar_links' => array(
          'module' => 'serignan_blocks',
          'delta' => 'sidebar_links',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout');
  t('Toutes les pages sauf l\'accueil');
  $export['not-front'] = $context;

  return $export;
}
