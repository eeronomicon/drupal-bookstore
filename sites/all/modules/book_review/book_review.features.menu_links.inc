<?php
/**
 * @file
 * book_review.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function book_review_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_book-review:node/add/book-review.
  $menu_links['navigation_book-review:node/add/book-review'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/book-review',
    'router_path' => 'node/add/book-review',
    'link_title' => 'Book Review',
    'options' => array(
      'attributes' => array(
        'title' => 'Review a book!',
      ),
      'identifier' => 'navigation_book-review:node/add/book-review',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Book Review');

  return $menu_links;
}
