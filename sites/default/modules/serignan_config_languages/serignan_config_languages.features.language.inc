<?php
/**
 * @file
 * serignan_config_languages.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function serignan_config_languages_locale_default_languages() {
  $languages = array();

  // Exported language: en
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => '-9',
  );
  // Exported language: fr
  $languages['fr'] = array(
    'language' => 'fr',
    'name' => 'French',
    'native' => 'Français',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '2',
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'fr',
    'weight' => '-10',
  );
  return $languages;
}
