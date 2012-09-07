<?php

/**
 * @file
 * Hide then country when only one country is available.
 */

$plugin = array(
  'title' => t('Hide the country when only one is available'),
  'format callback' => 'addressfield_format_address_hide_country',
  'type' => 'address',
  'weight' => -80,
);

/**
 * Format callback.
 *
 * @see CALLBACK_addressfield_format_callback()
 */
function addressfield_format_address_hide_country(&$format, $address, $context = array()) {
  if ($context['mode'] == 'render') {
    // As we are rendering, check how many possible countries there are in
    // this instance and that the country we're rendering is in it
    if (count($context['instance']['widget']['settings']['available_countries']) == 1) {
      if (array_key_exists($address['country'], $context['instance']['widget']['settings']['available_countries'])) {
        $format['country']['#access'] = false;
      }
    }
  } else {
    // As we are rendering the form, we can use our already filtered list
    $format['country']['#access'] = (count($format['country']['#options']) > 1);
  }
}
