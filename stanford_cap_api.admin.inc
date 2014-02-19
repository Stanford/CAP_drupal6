<?php
/**
 * @file
 * Administrative pages for Stanford CAP API module.
 */

/**
 * Form builder for details page.
 */
function stanford_cap_api_details_form($form_state) {
  $form = array();

  drupal_add_css(drupal_get_path('module', 'stanford_cap_api') . '/css/stanford_cap_api.css');

  // Status message.
  $status = stanford_cap_api_auth_status();
  if ($status) {
    $status_message = t('Currently, your site can connect to CAP.');
    $additional = NULL;
  }
  else {
    $status_message = t("Currently, your site can't connect to CAP.");
    $additional = t('Please check your settings on the !link.', array('!link' => l(t('settings page'), 'admin/config/cap/config/settings')));
  }

  $form['status'] = array(
    '#value' => theme('cap_status_item', $status, $status_message, $additional),
  );

  return $form;
}

/**
 * Form builder for settings page.
 */
function stanford_cap_api_settings_form($form_state) {
  $form = array();

  drupal_set_title(t('CAP API settings'));

  $form['description_wrapper'] = array(
    '#type' => 'fieldset',
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['description_wrapper']['description'] = array(
    '#value' => t('Welcome to CAP! The first step in setting this module up on your site is to synchronize the CAP settings. This will create a content type in your site that will be used to store information about CAP profiles.'),
  );

  $form['auth'] = array(
    '#type' => 'fieldset',
    '#title' => t('Authorization'),
    '#description' => t('Please enter your authentication information for the CAP API.'),
  );

  $form['auth']['stanford_cap_api_username'] = array(
    '#type' => 'textfield',
    '#title' => t('Client ID:'),
    '#default_value' => variable_get('stanford_cap_api_username', ''),
    '#required' => TRUE,
  );

  $form['auth']['stanford_cap_api_password'] = array(
    '#type' => 'password',
    '#title' => t('Authz secret:'),
  );

  $form['auth']['advanced'] = array(
    '#type' => 'fieldset',
    '#title' => t('Advanced'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#description' => t('Advanced setting for CAP API and authentication URIs'),
  );

  $form['auth']['advanced']['stanford_cap_api_base_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Endpoint'),
    '#description' => t('CAP API endpoint URI, only useful when switching between development/production environment.'),
    '#default_value' => variable_get('stanford_cap_api_base_url', 'https://api.stanford.edu'),
    '#required' => TRUE,
  );

  $form['auth']['advanced']['stanford_cap_api_auth_uri'] = array(
    '#type' => 'textfield',
    '#title' => t('Authentication URI'),
    '#description' => t('CAP API authentication URI.'),
    '#default_value' => variable_get('stanford_cap_api_auth_uri', 'https://authz.stanford.edu/oauth/token'),
    '#required' => TRUE,
  );
  $form['auth']['advanced']['cron'] = array(
    '#type' => 'fieldset',
    '#title' => t('Cron settings'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#description' => t('Here you can configure hours in which maintenance tasks will be executed.'),
  );

  $options = range(0, 23, 1);

  $form['auth']['advanced']['cron']['start_hour'] = array(
    '#type' => 'select',
    '#title' => t('Start hour'),
    '#description' => t('Execution will start after this hour.'),
    '#options' => $options,
    '#default_value' => variable_get('stanford_cap_api_cron_start', 1),
  );

  $form['auth']['advanced']['cron']['stop_hour'] = array(
    '#type' => 'select',
    '#title' => t('Stop hour'),
    '#description' => t('Execution will start before this hour.'),
    '#options' => $options,
    '#default_value' => variable_get('stanford_cap_api_cron_stop', 5),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save settings'),
    '#weight' => 1000,
  );
  // If module not configured yet, button should read 'Next'.
  if (!variable_get('stanford_cap_api_configured', FALSE)) {
    $form['submit']['#value'] = t('Next');
  }

  return $form;
}

/**
 * Validation handler for settings form.
 */
function stanford_cap_api_settings_form_validate($form, &$form_state) {
  // Validates authentication.
  if (!empty($form_state['values']['stanford_cap_api_username']) && !empty($form_state['values']['stanford_cap_api_password'])) {
    $username = $form_state['values']['stanford_cap_api_username'];
    $password = $form_state['values']['stanford_cap_api_password'];
    $auth_uri = $form_state['values']['stanford_cap_api_auth_uri'];
    $auth_token = stanford_cap_api_auth($username, $password, $auth_uri);
    if (!$auth_token) {
      form_set_error('stanford_cap_api_username', t("Error. Can't connect to Stanford CAP API. Please check your username and password."));
      form_set_error('stanford_cap_api_password');
    }
  }
}

/**
 * Submit handler for settings form.
 */
function stanford_cap_api_settings_form_submit($form, &$form_state) {
  $config_vars = array(
    'stanford_cap_api_username',
    'stanford_cap_api_password',
    'stanford_cap_api_base_url',
    'stanford_cap_api_auth_uri',
  );
  $values = $form_state['values'];
  foreach ($config_vars as $config_var) {
    if (!empty($values[$config_var])) {
      variable_set($config_var, $values[$config_var]);
    }
  }
  drupal_set_message(t('Configuration saved.'));
  variable_set('stanford_cap_api_configured', TRUE);
  variable_set('stanford_cap_api_cron_start', $values['start_hour']);
  variable_set('stanford_cap_api_cron_stop', $values['stop_hour']);
}

/**
 * Checks that we can connect to CAP API.
 */
function stanford_cap_api_auth_status() {
  if (stanford_cap_api_request('/profiles/v1')) {
    return TRUE;
  }
  else {
    return FALSE;
  }
}
