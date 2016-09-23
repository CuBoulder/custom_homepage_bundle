(function ($) {
  Drupal.behaviors.cu_homepage_admissions = {
    attach: function (context, settings) {
      // When someone clicks on one of the SHS inputs, hide the view content.
      // This will not hide the required input text that is shown initially.
      $(".shs-select", context).click(function () {
        $(".view-content").addClass("element-invisible");
      });
    }
  };

  Drupal.behaviors.cu_homepage_admissions_geolocation = {
    attach: function (context, settings) {
      var long, lat, query, httpRequest2, httpRequest, response, fullViewDiv, oldFullView, options, positionData, pager, snake;

      // Replace pager links with location data.
      pagerLinks = document.querySelectorAll('#pager-full a');

      // Get position data from form.
      positionData = document.querySelector('.hidden-position-data').getAttribute('value').split(',');

      // Loop through pager links to add location data to them.
      pagerLinks.forEach(attachPagerLinks);

      function attachPagerLinks(element, index, array) {
        oldLink = element.getAttribute('href');
        newLink = oldLink.replace(/field_geofield_distance\[origin]\[lat]=([^&]*)/g, 'field_geofield_distance[origin][lat]=' + positionData[0]);
        newLink = newLink.replace(/field_geofield_distance\[origin]\[lon]=([^&]*)/g, 'field_geofield_distance[origin][lon]=' + positionData[1]);
        element.setAttribute('href', newLink);
      }

      // Place pager outside of view since the view only works with AJAX
      // and the page needs refreshed for this to work.
      pager = document.querySelector('.pager').innerHTML;
      document.querySelector('.pager').innerHTML = '';
      snake = document.querySelector('.sneaky-snake .pager');
      snake.innerHTML = pager;

      // Don't do anything if the user has interacted with the search.
      query = window.location.search;
      if (query.indexOf('field_person_address_value') != -1) {
        return;
      }


      // Code for Google Geolocation API.
      /*
       httpRequest = new XMLHttpRequest();
       httpRequest.onreadystatechange = locationView;
       httpRequest.open('POST', 'https://www.googleapis.com/geolocation/v1/geolocate?key=');
       httpRequest.setRequestHeader('Content-Type', 'application/json');
       httpRequest.send();
       */

      // Set timeout.
      options = {
        timeout: 5000
      };

      if (navigator.geolocation) {
        navigator.geolocation.getCurrentPosition(locationView, error, options);
      } else {
        console.log("Geolocation is not supported by your browser");
        //viewDiv.innerHTML = oldView;
      }

      function error(err) {
        console.log('ERROR(' + err.code + '): ' + err.message);
      }

      function locationView(position) {

        // Get view content to replace if geo lookup fails.
        fullViewDiv = document.querySelector('.admissions-geolocation-full');
        featuredViewDiv = document.querySelector('.admissions-geolocation-featured');

        // Save the view content for now to replace if spinner times out.
        if (fullViewDiv) {
          oldFullView = fullViewDiv.innerHTML;
          fullViewDiv.innerHTML = '<i class="fa fa-spinner fa-pulse fa-3x fa-fw"></i><span class="sr-only">Loading...</span>';
        }

        // Save the view content for now to replace if spinner times out.
        if (featuredViewDiv) {
          oldFeaturedView = featuredViewDiv.innerHTML;
          featuredViewDiv.innerHTML = '<i class="fa fa-spinner fa-pulse fa-3x fa-fw"></i><span class="sr-only">Loading...</span>';
        }

        // Code for Google Geolocation API.
        /*
         if (httpRequest.readyState === XMLHttpRequest.DONE) {
         if (httpRequest.status === 200) {

         response = JSON.parse(httpRequest.responseText);
         console.log(response);
         lat = response.location.lat;
         long = response.location.lng;
         */

        lat = position.coords.latitude;
        long = position.coords.longitude;

        httpRequest2 = new XMLHttpRequest();
        httpRequest2.onreadystatechange = locationReplace;
        httpRequest2.open('POST', Drupal.settings.baseUrl + '/admissions/connect/events/ajax?long=' + long + '&lat=' + lat);
        httpRequest2.setRequestHeader('Content-Type', 'application/json');
        httpRequest2.send();
        //}
        //}

      }

      function locationReplace() {
        if (httpRequest2.readyState === XMLHttpRequest.DONE) {
          if (httpRequest2.status === 200) {
            response = JSON.parse(httpRequest2.responseText);
            fullViewDiv.innerHTML = response.main_events;
            featuredViewDiv.innerHTML = response.featured_events;
          }
        }
      }
    }
  };
})(jQuery);
