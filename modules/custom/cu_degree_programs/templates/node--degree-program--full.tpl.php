<?php print render($content['field_degree_prog_image']); ?>
<div class="degrees-offered">
  Degrees Offered: <?php print render($content['field_degree_prog_degrees_offer']); ?>
</div>

<article class="degree-program-content-wrapper clearfix">
  <section class="degree-program-content">
    <?php print render($content['body']); ?>
    <?php if (!empty($content['field_degree_prog_under_opp'])): ?>
      <h2>Undergraduate Opportunities</h2>
      <?php print render($content['field_degree_prog_under_opp']); ?>
    <?php endif; ?>
    <?php if (!empty($content['field_degree_prog_grad_studies'])): ?>
      <h2>Graduate Studies</h2>
      <?php print render($content['field_degree_prog_grad_studies']); ?>
    <?php endif; ?>
    <?php if (!empty($content['field_degree_prog_research_opp'])): ?>
      <h2>Research Opportunities</h2>
      <?php print render($content['field_degree_prog_research_opp']); ?>
    <?php endif; ?>
    <?php if (!empty($content['field_degree_prog_online_opp'])): ?>
      <h2>Online Opportunities</h2>
      <?php print render($content['field_degree_prog_online_opp']); ?>
    <?php endif; ?>
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
    <h2>Photos</h2>
    <?php print render($content['field_degree_prog_additional_img']); ?>
  </section>
  <?php endif; ?>
</article>