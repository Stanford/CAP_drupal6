<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function stanford_cap_api_orgs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function stanford_cap_api_orgs_node_info() {
  $items = array(
    'stanford_organization' => array(
      'name' => t('Stanford organization'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
