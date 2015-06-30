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
      <li><?php print render($content['field_degree_prog_dept_website']); ?></li>
      <li><?php print render($content['field_degree_prog_under_adm_url']); ?></li>
      <li><?php print render($content['field_degree_prog_grad_adm_url']); ?></li>
      <li><?php print render($content['field_degree_prog_deg_reqs_url']); ?></li>
      <li><?php print render($content['field_degree_prog_advising_url']); ?></li>
    </ul>
  </section>
  <section class="degree-program-photo-gallery clearfix">
    <?php print render($content['field_degree_prog_additional_img']); ?>
  </section>
</article>