<?php hide($content['links']); ?>
<?php if($view_mode == 'teaser'): ?>
  <div class="person-view-mode-teaser clearfix"> 
    <?php if(!empty($content['field_person_photo'])): ?>
      <?php print render($content['field_person_photo']); ?>
    <?php endif; ?>
    <div class="person-view-mode-teaser-content">
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <div class="person-job-titles"><?php print $content['job_titles']; ?></div>
      <div class="person-departments"><?php print $content['departments']; ?></div>
      <?php if(!empty($content['body'])): ?>
        <div class="people-bio">
          <?php print render($content['body']); ?>
        </div>
      <?php endif; ?>
      <?php
        $person_contact = array();
        if (!empty($content['field_person_email'])) {
          $person_contact[] = '<i class="fa fa-envelope"></i> ' . render($content['field_person_email']);
        }
        if (!empty($content['field_person_phone'])) {
          $person_contact[] = '<i class="fa fa-phone"></i> ' . render($content['field_person_phone']);
        }
        $contact = join(' &nbsp;&nbsp;&nbsp; ' , $person_contact);
      ?>
      <div class="person-view-mode-teaser-contact"><?php print $contact; ?></div>
      
    </div>
  </div>
<?php elseif($view_mode == 'grid'): ?>
  <div class="person-view-mode-grid grid-person clearfix <?php if (isset($content['grid_classes'])) { print $content['grid_classes']; } ?>"> 
    <?php if(!empty($content['field_person_photo'])): ?>
      <?php print render($content['field_person_photo']); ?>
    <?php else: ?>
      <?php global $base_url; ?>
      <a href="<?php print $node_url; ?>"><img src="<?php print $base_url; ?>/<?php print drupal_get_path('module', 'people_content_type'); ?>/images/avatar320.jpg" class="image-large_square_thumbnail" alt="<?php print $title; ?>" /></a>
    <?php endif; ?>
    <strong><a href="<?php print $node_url; ?>"><?php print $title; ?></a></strong>
    <div class="person-view-mode-grid-content">
      <div class="person-job-titles-grid"><?php print $content['job_titles']; ?></div>
      <div class="person-departments-grid"><?php print $content['departments']; ?></div>
    </div>
  </div>
<?php elseif($view_mode == 'table'): ?>
  <strong><a href="<?php print $node_url; ?>"><?php print $title; ?></a></strong>
      <div class="person-job-titles"><?php print $content['job_titles']; ?></div>
      <div class="person-departments"><?php print $content['departments']; ?></div>
  
  
  
<?php else: ?>

  <div class="person-photo"><?php print render($content['field_person_photo']); ?></div>
  
  <?php
    if (!empty($content['field_person_title'])) {
      $person_title[] = render($content['field_person_title']);
    }
    if (!empty($content['field_person_department']['#items'])) {
      $person_title[] = render($content['field_person_department']);
    }
    $title = join(' &bull; ' , $person_title);
    //print $title;
  ?>
  <div class="person-job-titles"><?php print $content['job_titles']; ?></div>
  <div class="person-departments"><?php print $content['departments']; ?></div>
  <?php if(!empty($content['field_person_email']) || !empty($content['field_person_phone'])): ?>
  <div class="people-contact people-section">
    <?php if(!empty($content['field_person_email'])): ?>
      <div class="person-email"><i class="fa fa-envelope"></i> <?php print render($content['field_person_email']); ?></div>
    <?php endif; ?>
    <?php if(!empty($content['field_person_phone'])): ?>
      <div class="person-phone"><i class="fa fa-phone"></i> <?php print render($content['field_person_phone']); ?></div>
    <?php endif; ?>
  </div>
  <?php endif; ?>
  
  <?php if(!empty($content['field_person_website'])): ?>
  <div class="people-links people-section">
    <?php print render($content['field_person_website']); ?>
  </div>
  <?php endif; ?>
  
  <?php if(!empty($content['field_person_address']) || !empty($content['field_person_office_hours'])): ?>
  <div class="people-office people-section">
    <?php if(!empty($content['field_person_address'])): ?>
      <?php print render($content['field_person_address']); ?>
    <?php endif; ?>
    <?php if(!empty($content['field_person_office_hours'])): ?>
      <?php print render($content['field_person_office_hours']); ?>
    <?php endif; ?>
  </div>
  <?php endif; ?>
  
  
  <?php if(!empty($content['body'])): ?>
    <div class="people-bio">
      <?php print render($content['body']); ?>
    </div>
  <?php endif; ?>
  
<?php endif; ?>