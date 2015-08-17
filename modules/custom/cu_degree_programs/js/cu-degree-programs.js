(function ($) {
  $(document).ready(function(){ 
  
    prepareProgramSelect();
    
    $("body").bind("ajaxComplete", function(e, xhr, settings){
      prepareProgramSelect();
      if ($('.view-id-degree_programs .view-content').offset() != null) {
        $('html, body').animate({scrollTop: ($('.view-id-degree_programs .view-content').offset().top)-100}, 500);
        $('.view-id-degree_programs .view-content').focus();
      }
    });
  });
  
  
  
  function prepareProgramSelect() {
  // Hide select links on load
    $('.view-id-degree_programs .views-widget').addClass('element-invisible');
    $('.view-id-degree_programs .views-submit-button input, .view-id-degree_programs .views-reset-button input').addClass('element-invisible');
    // alter label text
    $('.view-id-degree_programs label').each(function(){
      var labelText = $(this).text();
      $(this).text('Explore by ' + labelText + ' +');
      $(this).attr('aria-expanded', 'false');
    });
    // Add click events to labels to hide select links and scroll to area clicked
    $('.view-id-degree_programs label').click(function() {
      $('.view-id-degree_programs .views-widget').addClass('element-invisible');
      $('.view-id-degree_programs label').attr('aria-expanded', 'false');
      $(this).attr('aria-expanded', 'true');
      $(this).next().removeClass('element-invisible').focus();
      
      if ($(this).offset() != null) {
        $('html, body').animate({scrollTop: ($(this).offset().top)-100}, 500);
      }
      return false;
    });
    // Add click events to hide select links and scroll to view content area
    $('.view-id-degree_programs .bef-select-as-links a').click(function(){
      $('.view-id-degree_programs .views-widget').addClass('element-invisible');
      
      return false;
    });

  }
})(jQuery);
 