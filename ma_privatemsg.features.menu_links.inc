<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function ma_privatemsg_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:messages
  $menu_links['features:messages'] = array(
    'menu_name' => 'features',
    'link_path' => 'messages',
    'router_path' => 'messages',
    'link_title' => 'Messages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Messages');


  return $menu_links;
}
