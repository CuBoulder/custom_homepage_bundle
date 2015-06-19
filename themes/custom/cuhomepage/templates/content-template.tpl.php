<div id="breadcrumb-wrapper">
  <div class="breadcrumbs">
    <?php print $breadcrumb; ?>
  </div>
</div>
<div id="content-wrapper" class="section-wrapper">
  <div id="main" class="clearfix">
    <div id="content" class="column" role="main">        
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="page__title title <?php if (isset($title_hidden)) { print 'element-invisible'; } ?>" id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <div class="tabs"><?php print render($tabs); ?></div>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>

    
    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php if (theme_get_setting('primary_sidebar') == 'primary-sidebar-first'): ?>
          <?php print $sidebar_first; ?>
          <?php print $sidebar_second; ?>
        <?php else: ?>
          <?php print $sidebar_second; ?>
          <?php print $sidebar_first; ?>
        <?php endif; ?>
        
      </aside>
    <?php endif; ?>

  </div>
</div>