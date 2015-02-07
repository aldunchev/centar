<?php
/**
 * @file
 * offer_content_type.features.translations.inc
 */

/**
 * Implements hook_translations_defaults().
 */
function offer_content_type_translations_defaults() {
  $translations = array();
  $translations['bg:field']['255340a9717142849c30cfea6d4ce387'] = array(
    'source' => 'Offer Category',
    'context' => 'field_offer_category:offer:label',
    'location' => 'field:field_offer_category:offer:label',
    'translation' => 'Категория',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['bg:field']['3c0f329517a4817bc6283f98c44451cf'] = array(
    'source' => 'Offer Location',
    'context' => 'field_offer_location:offer:label',
    'location' => 'field:field_offer_location:offer:label',
    'translation' => 'Местоположение',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['bg:field']['534c1a34e4e74c94e7b0076a52e09484'] = array(
    'source' => 'Body',
    'context' => 'body:offer:label',
    'location' => 'field:body:offer:label',
    'translation' => 'Описание',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['bg:field']['b25199f80e9f3590e080c3173f9da716'] = array(
    'source' => 'Offer Images',
    'context' => 'field_offer_images:offer:label',
    'location' => 'field:field_offer_images:offer:label',
    'translation' => 'Добави Снимки',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['bg:field']['bb9a10ff7b48d3a7b97ae03c939081e6'] = array(
    'source' => 'Address',
    'context' => 'field_address:offer:label',
    'location' => 'field:field_address:offer:label',
    'translation' => 'Адрес',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['bg:field']['d3e1938d94c02395cb20bbb8b7cef659'] = array(
    'source' => 'Telephone number',
    'context' => 'field_telephone_number:offer:label',
    'location' => 'field:field_telephone_number:offer:label',
    'translation' => 'Телефон',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['bg:node']['9dc7f62436079524c14d34662045c292'] = array(
    'source' => 'Title',
    'context' => 'type:offer:title_label',
    'location' => 'node:type:offer:title_label',
    'translation' => 'Име',
    'plid' => 0,
    'plural' => 0,
  );
  return $translations;
}
