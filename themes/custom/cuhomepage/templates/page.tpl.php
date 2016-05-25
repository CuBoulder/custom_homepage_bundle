<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<div id="page" class="<?php print $classes; ?>">
  <div id="header-wrapper" class="section-wrapper">
    <header class="header" id="header" role="banner">
      <div id="branding">
        <?php print render($page['branding']); ?>
        <div class="mobile-menu-toggle">
          <a id="toggle" href="#zone-menu" title="Menu">Menu <i class="fa fa-reorder"></i></a>
        </div>
      </div>

      <div id="search">
        <?php print render($page['search_box']); ?>
      </div>
    </header>
  </div>
  <?php if (theme_get_setting('use_action_menu') == FALSE): ?>
  <div id="secondary-menu-wrapper" class="section-wrapper">
    <div id="secondary-navigation">
      <div class="secondary-nav-inner clearfix">
        <?php print render($page['secondary_menu']); ?>
      </div>
    </div>
  </div>
  <?php endif; ?>
  <div id="main-menu-wrapper" class="section-wrapper">
    <div id="navigation">
      <div class="nav-inner clearfix">
        <?php print render($page['menu']); ?>
      </div>
    </div>
  </div>
  <div id="mobile-navigation-wrapper">


    <div id="mobile-navigation">
      <div id="mobile-search">
        <?php print render($page['search_box']); ?>
      </div>
      <nav id="mobile-menu" role="navigation">
      <?php if (isset($mobile_menu) && !empty($mobile_menu)): ?>
        <?php print theme('links', array('links' => $mobile_menu, 'attributes' => array('id' => 'main-menu-mobile', 'class' => array('links', 'clearfix')), 'heading' => array('text' => t('Mobile menu'),'level' => 'h2','class' => array('element-invisible')))); ?>

      <?php else: ?>
        <?php print theme('links', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu-mobile', 'class' => array('links', 'clearfix')), 'heading' => array('text' => t('Mobile menu'),'level' => 'h2','class' => array('element-invisible')))); ?>
        <?php print theme('links', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary-menu-mobile', 'class' => array('links', 'clearfix')), )); ?>
        <?php print theme('links', array('links' => $footer_menu, 'attributes' => array('id' => 'footer-menu-mobile', 'class' => array('links', 'clearfix')), )); ?>
      <?php endif; ?>
      </nav>
    </div>
  </div>

  <?php if (!empty($page['alerts'])): ?>
  <div id="alerts-wide-wrapper" class="section-wrapper">
    <div id="alerts" class="clearfix">
      <?php print render($page['alerts']); ?>
    </div>
  </div>
  <?php endif; ?>

  <?php if (!empty($page['intro'])): ?>
  <div id="intro-wide-wrapper" class="section-wrapper">
    <?php print render($page['intro']); ?>
  </div>
  <?php endif; ?>

  <?php if (!empty($page['slider'])): ?>
  <div id="slider-wrapper" class="section-wrapper <?php if (!empty($page['slider_sidebar'])) { print 'has-slider-sidebar'; } ?>">
    <div id="slider" class="clearfix">
      <div class="slider-main"><?php print render($page['slider']); ?></div>
      <?php if (!empty($page['slider_sidebar'])): ?>
        <div class="slider-sidebar"><?php print render($page['slider_sidebar']); ?></div>
      <?php endif; ?>

    </div>
  </div>
  <?php endif; ?>

  <?php if (isset($title_image) && !drupal_is_front_page()): ?>
    <div id="page-title-image-wrapper" class="section-wrapper" style="background-image:url(<?php print $title_image; ?>);">
      <div id="page-title-image">
        <div class="page-title-image-inner">
          <h1 id="page-title-image-title"><?php print drupal_get_title(); ?></h1>
        </div>
      </div>
    </div>
    <div class="clear"></div>
  <?php endif; ?>
  <div id="messages-wrapper">
    <?php print $messages; ?>
  </div>
  <?php
    // Main content template
    print $main_content;
  ?>
    <?php if (!empty($page['wide_2'])): ?>
  <div id="post-wide-wrapper" class="section-wrapper">
    <?php print render($page['wide_2']); ?>
  </div>
  <?php endif; ?>

  <?php if (!empty($page['after_content'])): ?>
  <div id="after-content-wrapper" class="section-wrapper">
    <div id="after-content">
      <?php print render($page['after_content']); ?>
    </div>
  </div>
  <?php endif; ?>

  <?php if (!empty($page['lower'])): ?>
  <div id="after-content2-wrapper" class="section-wrapper">
    <div id="after-content-2">
      <?php print render($page['lower']); ?>
    </div>
  </div>
  <?php endif; ?>


  <div id="footer-section">
    <?php if (!empty($page['footer']) || !empty($page['footer_top']) || !empty($page['footer_bottom'])): ?>
    <div id="footer-wrapper" class="section-wrapper">
      <div id="footer-top">
        <?php print render($page['footer_top']); ?>
      </div>
      <div id="footer">
        <?php print render($page['footer']); ?>
      </div>
      <div id="footer-bottom">
        <?php print render($page['footer_bottom']); ?>
      </div>
    </div>
    <?php endif; ?>

    <?php if (isset($footer_menu) && !empty($footer_menu)): ?>
      <div id="footer-menu-wrapper" class="section-wrapper <?php print $footer_menu_color; ?>">
        <div id="footer-navigation">
          <div class="nav-inner clearfix">
            <nav id="footer-menu">
            <?php print theme('links__footer_menu', array('links' => $footer_menu, 'attributes' => array('id' => 'footer-menu-links', 'class' => array('links', 'inline-menu', 'clearfix')), 'heading' => array('text' => t('Footer menu'),'level' => 'h2','class' => array('element-invisible')))); ?>
            </nav>
          </div>
        </div>
      </div>
    <?php endif; ?>
    <div id="site-info-wrapper" class="section-wrapper">
      <div id="site-info">
        <?php print render($page['site_info']); ?>
      </div>
    </div>
  </div>



</div>


<?php print render($page['bottom']); ?>
