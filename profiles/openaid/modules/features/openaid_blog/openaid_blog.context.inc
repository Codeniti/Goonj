<?php
/**
 * @file
 * openaid_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openaid_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_archive';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog/archive' => 'blog/archive',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_posts-block_2' => array(
          'module' => 'views',
          'delta' => 'blog_posts-block_2',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-blog_posts_by_topic-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_posts_by_topic-block_1',
          'region' => 'sidebar_first',
          'weight' => '-21',
        ),
        'views-blog_posts_by_topic-block' => array(
          'module' => 'views',
          'delta' => 'blog_posts_by_topic-block',
          'region' => 'sidebar_first',
          'weight' => '-20',
        ),
        'views-blog_authors-block' => array(
          'module' => 'views',
          'delta' => 'blog_authors-block',
          'region' => 'sidebar_first',
          'weight' => '-19',
        ),
        'views-blog_authors-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_authors-block_1',
          'region' => 'sidebar_first',
          'weight' => '-18',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['blog_archive'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_contributor';
  $context->description = '';
  $context->tag = 'section';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'author_profile' => 'author_profile',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_authors-block' => array(
          'module' => 'views',
          'delta' => 'blog_authors-block',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'views-blog_authors-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_authors-block_1',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('section');
  $export['blog_contributor'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_contributors';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contributor' => 'contributor',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        // 'views-blog_authors-block_3' => array(
        //   'module' => 'views',
        //   'delta' => 'blog_authors-block_3',
        //   'region' => 'content',
        //   'weight' => '-10',
        // ),
        'views-blog_authors-block_2' => array(
          'module' => 'views',
          'delta' => 'blog_authors-block_2',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['blog_contributors'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_landing_page';
  $context->description = 'The blog page at /blog';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog' => 'blog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_posts_by_topic-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_posts_by_topic-block_1',
          'region' => 'sidebar_first',
          'weight' => '-16',
        ),
        'views-blog_posts_by_topic-block' => array(
          'module' => 'views',
          'delta' => 'blog_posts_by_topic-block',
          'region' => 'sidebar_first',
          'weight' => '-16',
        ),
        'views-blog_posts-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_posts-block_1',
          'region' => 'sidebar_first',
          'weight' => '-16',
        ),
        'views-blog_authors-block' => array(
          'module' => 'views',
          'delta' => 'blog_authors-block',
          'region' => 'sidebar_first',
          'weight' => '-16',
        ),
        // 'views-blog_authors-block_1' => array(
        //   'module' => 'views',
        //   'delta' => 'blog_authors-block_1',
        //   'region' => 'sidebar_first',
        //   'weight' => '-15',
        // ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('The blog page at /blog');
  t('page');
  $export['blog_landing_page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_lists';
  $context->description = 'Other blog page views';
  $context->tag = 'section';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'blog_series' => 'blog_series',
        'countries' => 'countries',
        'tags' => 'tags',
        'topics' => 'topics',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
    'views' => array(
      'values' => array(
        'blog_posts:page_2' => 'blog_posts:page_2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_posts_by_topic-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_posts_by_topic-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-blog_posts_by_topic-block' => array(
          'module' => 'views',
          'delta' => 'blog_posts_by_topic-block',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'views-blog_posts-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_posts-block_1',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-blog_authors-block' => array(
          'module' => 'views',
          'delta' => 'blog_authors-block',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        // 'views-blog_authors-block_1' => array(
        //   'module' => 'views',
        //   'delta' => 'blog_authors-block_1',
        //   'region' => 'sidebar_first',
        //   'weight' => '-6',
        // ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Other blog page views');
  t('section');
  $export['blog_lists'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_menu';
  $context->description = '';
  $context->tag = 'section';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'author_profile' => 'author_profile',
        'blog_post' => 'blog_post',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'blog' => 'blog',
        'blog/*' => 'blog/*',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'blog',
    'menu' => 'blog',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('section');
  $export['blog_menu'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_post';
  $context->description = 'Blog post context.';
  $context->tag = 'section';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog_post' => 'blog_post',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_posts_by_topic-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_posts_by_topic-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-blog_posts_by_topic-block' => array(
          'module' => 'views',
          'delta' => 'blog_posts_by_topic-block',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'views-blog_posts-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_posts-block_1',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-blog_authors-block' => array(
          'module' => 'views',
          'delta' => 'blog_authors-block',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        // 'views-blog_authors-block_1' => array(
        //   'module' => 'views',
        //   'delta' => 'blog_authors-block_1',
        //   'region' => 'sidebar_first',
        //   'weight' => '-6',
        // ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog post context.');
  t('section');
  $export['blog_post'] = $context;

  return $export;
}
