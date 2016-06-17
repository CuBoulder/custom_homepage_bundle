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
            var long, lat, query, httpRequest2, httpRequest, response, viewDiv, oldView, options;

            // Don't do anything if the user has interacted with the search.
            query = window.location.search;
            if (query.indexOf('location') != -1) {
                return;
            }

            // Get view content and replace with spinner.
            // Save the view content for now to replace if spinner times out.
            viewDiv = document.querySelector('.view-content');
            oldView = viewDiv.innerHTML;
            viewDiv.innerHTML = '<i class="fa fa-spinner fa-pulse fa-3x fa-fw"></i><span class="sr-only">Loading...</span>';

            /*
            // Code for Google Geolocation API.
            httpRequest = new XMLHttpRequest();
            httpRequest.onreadystatechange = locationView;
            httpRequest.open('POST', 'https://www.googleapis.com/geolocation/v1/geolocate?key=AIzaSyD5LVNF5mw36wdisNAgI3UqNb678zLEqP4');
            httpRequest.setRequestHeader('Content-Type', 'application/json');
            httpRequest.send();
            */

            // Set timeout.
            options = {
                timeout: 5000,
            };

            if (navigator.geolocation) {
                navigator.geolocation.getCurrentPosition(locationView, error, options);
            } else {
                console.log("Geolocation is not supported by your browser");
            }

            function error(err) {
                console.warn('ERROR(' + err.code + '): ' + err.message);
                // Replace view content.
                viewDiv.innerHTML = oldView;
            }


            function locationView(position) {
               /*
               // Code for Google Geolocation API.
                if (httpRequest.readyState === XMLHttpRequest.DONE) {
                    if (httpRequest.status === 200) {

                        response = JSON.parse(httpRequest.responseText);
                        lat = response.location.lat;
                        long = response.location.lng;
                        */

                lat  = position.coords.latitude;
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
                        response = httpRequest2.responseText;
                        viewDiv.innerHTML = response;
                    }
                }
            }
        }
    };
})(jQuery);
