<?php

/**
 * Implementation of hook_views_default_views().
 */
function stanford_cap_api_profiles_views_default_views() {
  $views = array();

  // Exported view: cap_api_manage_profiles
  $view = new view;
  $view->name = 'cap_api_manage_profiles';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Stanford CAP API: Manage profiles';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Manage profiles';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer cap api';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'bulk';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_cap_sync_date_value' => 'field_cap_sync_date_value',
    'field_cap_profile_link_url' => 'field_cap_profile_link_url',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_cap_sync_date_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_cap_profile_link_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['style_options']['operations'] = array(
    'views_bulk_operations_comment_setting_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_assign_owner_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_node_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'label' => 'Remove profile',
    ),
    'node_mass_update-a27b9efabcd054685a549378b174ad11' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'system_message_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_make_sticky_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_make_unsticky_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-c4d3b28efb86fd703619a50b74d43794' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_fields_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
      'settings' => array(
        'php_code' => 0,
        'show_tokens' => 0,
        'display_fields' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'views_bulk_operations_taxonomy_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_promote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-14de7d028b4bffdf2b4a266562ca18ac' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-9c585624b9b3af0b4687d5f97f35e047' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_publish_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'system_goto_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_unpromote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-8ce21b08bb8e773d10018b484fe4815e' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_save_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'system_send_email_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'stanford_cap_api_profiles_profile_stop_sync_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'label' => '',
    ),
    'node_mass_update-0ccad85c1ebe4c9ceada1aa64293b080' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_unpublish_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['style_options']['execution_type'] = '1';
  $handler->display->display_options['style_options']['display_type'] = '0';
  $handler->display->display_options['style_options']['display_result'] = 1;
  $handler->display->display_options['style_options']['merge_single_action'] = 1;
  $handler->display->display_options['style_options']['hide_selector'] = 0;
  $handler->display->display_options['style_options']['preserve_selection'] = 1;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = '';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No CAP profiles are being stored in the site. You can <a href="/admin/settings/cap/config/import">add profiles</a> or <a href="/admin/settings/cap/config/group">add groups</a>.';
  $handler->display->display_options['empty']['area']['format'] = '2';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date last synced (field_cap_sync_date) */
  $handler->display->display_options['fields']['field_cap_sync_date_value']['id'] = 'field_cap_sync_date_value';
  $handler->display->display_options['fields']['field_cap_sync_date_value']['table'] = 'node_data_field_cap_sync_date';
  $handler->display->display_options['fields']['field_cap_sync_date_value']['field'] = 'field_cap_sync_date_value';
  $handler->display->display_options['fields']['field_cap_sync_date_value']['label'] = 'Date last synced';
  $handler->display->display_options['fields']['field_cap_sync_date_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cap_sync_date_value']['link_to_node'] = 0;
  /* Field: Content: CAP profile link (field_cap_profile_link) */
  $handler->display->display_options['fields']['field_cap_profile_link_url']['id'] = 'field_cap_profile_link_url';
  $handler->display->display_options['fields']['field_cap_profile_link_url']['table'] = 'node_data_field_cap_profile_link';
  $handler->display->display_options['fields']['field_cap_profile_link_url']['field'] = 'field_cap_profile_link_url';
  $handler->display->display_options['fields']['field_cap_profile_link_url']['label'] = 'Operations';
  $handler->display->display_options['fields']['field_cap_profile_link_url']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['alter']['text'] = 'View in CAP';
  $handler->display->display_options['fields']['field_cap_profile_link_url']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['alter']['path'] = '[field_cap_profile_link_url]';
  $handler->display->display_options['fields']['field_cap_profile_link_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_cap_profile_link_url']['label_type'] = 'custom';
  $handler->display->display_options['fields']['field_cap_profile_link_url']['format'] = 'url';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cap_stanford_profile' => 'cap_stanford_profile',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/settings/cap/config/manage';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Manage profiles';
  $handler->display->display_options['menu']['weight'] = '0';

  $views[$view->name] = $view;

  return $views;
}
