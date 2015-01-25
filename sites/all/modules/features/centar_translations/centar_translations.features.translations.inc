<?php
/**
 * @file
 * centar_translations.features.translations.inc
 */

/**
 * Implements hook_translations_defaults().
 */
function centar_translations_translations_defaults() {
  $translations = array();
  $translations['bg:default']['3b5aaf9cdd0b15effb9e8da5530e19f0'] = array(
    'source' => 'minimum cost - maximum comfort',
    'context' => '',
    'location' => '/',
    'translation' => 'Минимум разходи - максимум удобства',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['bg:default']['95bd7e8ac36751e435b69a103d48b32f'] = array(
    'source' => 'login/register',
    'context' => '',
    'location' => '/',
    'translation' => 'Влизане',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['bg:default']['c9bfdbcecd5ba2b1555dd41dc7350f69'] = array(
    'source' => 'add offer',
    'context' => '',
    'location' => '/',
    'translation' => 'Добави Обява',
    'plid' => 0,
    'plural' => 0,
  );
  return $translations;
}
