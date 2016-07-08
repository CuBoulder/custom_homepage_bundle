(function ($) {
  $(function(){
    $("#atozsearch").autocomplete({
      source: function( request, response ) {
        $.ajax({
          url: 'http://atozapi.colorado.edu',
          dataType: "jsonp",
          data: {
            s: request.term
          },
          success: function(data) {
            var base_url = $("#atozsearch").data('base-url');
            response(
              $.map(data.org_units.results, function(item) {
                return { 
                  label: item.description,
                  value: item.description,
                  url: base_url + '/atoz/show/' + item.id
                }
              })
            );
          }
        });
      },
      minLength: 2,
      select: function(event, ui) {
        /* Display the AtoZ Loading Area */
        $("#atozloading").show();
        /* Send the browser to the url */
        location.href = ui.item.url;
      }
    });
  })
  
  
})(jQuery);
(function ($) {
  $(document).ready(function(){
    $(".item-list .orgunit-members").hide();
    $(".item-list .orgunit h3 a").addClass("expand");
    $(".item-list .orgunit h3 a").toggle(function(){
      var showthis = $(this).attr("href");
      $(showthis).fadeIn();
      $(this).removeClass("expand").addClass("collapse");
      return false;
    }, function(){
      var showthis = $(this).attr("href");
      $(showthis).fadeOut();
      $(this).removeClass("collapse").addClass("expand");
      return false;
    });
  });
})(jQuery);