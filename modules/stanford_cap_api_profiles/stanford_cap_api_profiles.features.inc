<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function stanford_cap_api_profiles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function stanford_cap_api_profiles_node_info() {
  $items = array(
    'cap_stanford_profile' => array(
      'name' => t('Stanford profile'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function stanford_cap_api_profiles_views_api() {
  return array(
    'api' => '3.0',
  );
}
