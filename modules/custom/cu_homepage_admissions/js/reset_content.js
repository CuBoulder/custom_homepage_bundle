(function ($) {
  Drupal.behaviors.cu_homepage_admissions = {
    attach: function (context, settings) {
      // When someone clicks on one of the SHS inputs, hide the view content.
      // This will not hide the required input text that is shown initially.
      $(".shs-select", context).click(function () {
        $(".view-content").addClass("element-invisible");
        document.querySelector("#edit-field-geofield-distance-distance").setAttribute('value', '');
        document.querySelector("#edit-field-geofield-distance-origin-lat").setAttribute('value', '');
        document.querySelector("#edit-field-geofield-distance-origin-lon").setAttribute('value', '');
      });
    }
  };

  /*
  Drupal.behaviors.cu_homepage_admissions_geolocation = {
    attach: function (context, settings) {
      var response, proximity_distance, long, lat, submit;
      if (document.querySelector("#edit-field-geofield-distance-distance").getAttribute('geolocated') === 'yes') {
        return;
      }
      // Get location of user.
      httpRequest = new XMLHttpRequest();

      if (!httpRequest) {
        alert('Giving up :( Cannot create an XMLHTTP instance');
        return false;
      }
      httpRequest.onreadystatechange = alertContents;
      httpRequest.open('POST', 'https://www.googleapis.com/geolocation/v1/geolocate?key=AIzaSyD5LVNF5mw36wdisNAgI3UqNb678zLEqP4');
      httpRequest.setRequestHeader('Content-Type', 'application/json');
      httpRequest.send();

      function alertContents() {
        if (httpRequest.readyState === XMLHttpRequest.DONE) {
          if (httpRequest.status === 200) {
            response = JSON.parse(httpRequest.responseText);
            console.log(response.location);
            proximity_distance = document.querySelector("#edit-field-geofield-distance-distance").setAttribute('value', '100');
            document.querySelector("#edit-field-geofield-distance-distance").setAttribute('geolocated', 'yes');
            lat = document.querySelector("#edit-field-geofield-distance-origin-lat").setAttribute('value', response.location.lat);
            long = document.querySelector("#edit-field-geofield-distance-origin-lon").setAttribute('value', response.location.lng);
            //long.setAttribute('value', response.location.lng);
            submit = document.querySelector('#edit-submit-admission-events-and-counselors').click();
            console.log(proximity_distance, long, lat);
          } else {
            alert('There was a problem with the request.');
          }
        }
      }
    }
  };
  */
})(jQuery);
