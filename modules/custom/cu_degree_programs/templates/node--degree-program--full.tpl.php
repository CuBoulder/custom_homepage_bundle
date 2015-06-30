<?php print render($content['field_degree_prog_image']); ?>
<div class="degrees-offered">
  Degrees Offered: <?php print render($content['field_degree_prog_degrees_offer']); ?>
</div>

<article class="degree-program-content-wrapper clearfix">
  <section class="degree-program-content">
    <?php print render($content['body']); ?>
    <?php print render($content['field_degree_prog_under_opp']); ?>
    <?php print render($content['field_degree_prog_grad_studies']); ?>
    <?php print render($content['field_degree_prog_online_opp']); ?>
  </section>
  
  <section class="degree-program-sidebar">
    <?php print render($content['field_degree_prog_videos']); ?>
    <ul class="degree-program-links list-style-nobullet">
      <?php if (!empty($content['field_degree_prog_dept_website'])): ?>
        <li><?php print render($content['field_degree_prog_dept_website']); ?></li>
      <?php endif; ?>
      <?php if (!empty($content['field_degree_prog_under_adm_url'])): ?>
        <li><?php print render($content['field_degree_prog_under_adm_url']); ?></li>
      <?php endif; ?>
      <?php if (!empty($content['field_degree_prog_grad_adm_url'])): ?>
        <li><?php print render($content['field_degree_prog_grad_adm_url']); ?></li>
      <?php endif; ?>
      <?php if (!empty($content['field_degree_prog_deg_reqs_url'])): ?>
        <li><?php print render($content['field_degree_prog_deg_reqs_url']); ?></li>
      <?php endif; ?>
      <?php if (!empty($content['field_degree_prog_advising_url'])): ?>
        <li><?php print render($content['field_degree_prog_advising_url']); ?></li>
      <?php endif; ?>
    </ul>
  </section>
  <?php if (!empty($content['field_degree_prog_additional_img'])): ?>
  <section class="degree-program-photo-gallery clearfix">
    <h3>Photos</h3>
    <?php print render($content['field_degree_prog_additional_img']); ?>
  </section>
  <?php endif; ?>
</article>