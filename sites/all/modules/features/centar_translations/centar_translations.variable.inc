<?php
/**
 * @file
 * centar_translations.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function centar_translations_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['bg'] = array(
  'site_name' => 'center.bg',
  'site_slogan' => '',
  'user_mail_register_no_approval_required_body' => '[user:name],

Благодарим Ви че се регистрирахте в [site:name]. Може да влезете в система като копирате линка по-долу във Вашия браузър:

[user:one-time-login-url]

Този линк може да се използва само еднократно. Той води към страница за задаване на паролата Ви.

След като зададете парола за Вашия акаунт, ще може да влезете в [site:login-url] използвайки:

Потребителско име: [user:name]
парола: Вашата парола

--  Екипът на [site:name]',
  'user_mail_register_no_approval_required_subject' => 'Добре дошъл [user:name] в [site:name]',
);

return $realm_variables;
}
