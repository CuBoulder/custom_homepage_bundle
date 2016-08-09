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
            var long, lat, query, httpRequest2, httpRequest, response, viewDiv, oldView, options, moreLink;

            // Change more link on the events view block to remove query string.
            /*
            moreLink = document.querySelector('.view-id-admission_events_and_counselors.view-display-id-block .more-link');
            if (moreLink) {
              moreLink.innerHTML = '<a href="' + Drupal.settings.baseUrl + '/admissions/connect/events">more events</a>';
            }
            */

            // Don't do anything if the user has interacted with the search.
            query = window.location.search;
            if (query.indexOf('location') != -1) {
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
                        response = JSON.parse(httpRequest2.responseText);
                        fullViewDiv.innerHTML = response.main_events;
                        featuredViewDiv.innerHTML = response.featured_events;
                    }
                }
            }
        }
    };
})(jQuery);
