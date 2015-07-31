(function($){
  Drupal.behaviors.cu_homepage_admissions = {
    attach: function(context, settings) {
      // When someone clicks on one of the SHS inputs, hide the view content.
      // This will not hide the required input text that is shown initially.
      $(".shs-select", context).click(function() {
        $(".view-content").addClass("element-invisible");
      });
    }
  };
})(jQuery);
