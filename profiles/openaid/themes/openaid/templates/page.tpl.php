<div id="page">
  <?php if ($page['top_banner']) : ?>
  <div id="top-banner">
    <div class="container">
      <?php print render($page['top_banner']); ?>
    </div>
  </div>
  <?php endif; ?>

  <div id="header">
    <div class="container">
      <h1 id="logo">
        <?php if ($logo): ?>
          <a href="<?php print $front_page; ?>" title="<?php print t('!site_name | Home', array('!site_name' => $site_name)); ?>" rel="home">
            <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>" />
          </a>
        <?php else: ?>
          <a href="<?php print $base_path; ?>"><?php print $site_name; ?></a>
        <?php endif; ?>
      </h1>
      <?php if ($page['header']) { ?>
          <?php print render($page['header']); ?>
      <?php } // end header ?>
      <?php if ($main_menu): ?>
        <div id="navigation">
          <?php print $main_menu; ?>
        </div> <!-- /#main-menu -->
      <?php endif;  ?>
    </div>
  </div>

  <div id="main">
    <div class="container">

      <?php if ($messages) { ?>
        <div id="messages">
            <?php print $messages; ?>
        </div>
      <?php } // end messages ?>

      <?php if (render($tabs)) { ?>
        <div id="tabs">
          <?php print render($tabs); ?>
        </div>
      <?php } // end tabs ?>

      <div id="main-content">

        <div id="content">

          <?php if (render($breadcrumb)) { ?>
            <div id="breadcrumb">
              <?php print render($breadcrumb); ?>
            </div>
          <?php } // end breadcrumb ?>

          <?php if ($page['highlighted']) { ?>
            <div id="highlighted">
              <?php print render($page['highlighted']); ?>
            </div>
          <?php } // end highlighted ?>

          <?php if ($page['featured']) { ?>
            <div id="featured">
              <?php print render($page['featured']); ?>
            </div>
          <?php } // end featured ?>

          <?php if (!$is_front && strlen($title) > 0) { ?>
            <h1 class="page-title"><?php print $title; ?></h1>
          <?php } ?>

          <div id="content-inner">

          <?php if ($page['help']) { ?>
            <div id="help">
              <?php print render($page['help']); ?>
            </div>
          <?php } // end tabs ?>

          <?php print render($page['content']); ?>

          </div>
        </div>

        <?php if ($page['sidebar_first']) { ?>
          <div id="sidebar-first" class="aside">
            <?php print render($page['sidebar_first']); ?>
          </div>
        <?php } // end sidebar_first ?>

      </div>

    </div>
  </div>

  <div id="footer">
    <div class="container">
      <?php print render($page['footer']); ?>
    </div>
  </div>

  <?php if ($page['admin_footer']) { ?>
    <div id="admin-footer">
      <div class="container">
        <?php print render($page['admin_footer']); ?>
      </div>
    </div>
  <?php } // end admin_footer ?>

</div>
