
You can add this bundle from packages_base by using: 
`drush dslm-add-custom cu_homepage_bundle`

To add the contrib modules if they weren't added by the command above:
`drush dslm-add-contrib addressfield better_exposed_filters feeds feeds_tamper geocoder geofield geofield_map geophp job_scheduler postal_code shs term_merge term_reference_tree views_block_filter_block views_responsive_grid`

##Admissions Section

There are a couple of custom parts to the Admissions section of the homepage site that are worth explaining in more detail. 

###Connect With Us Section

Once or so a year, the admissions team rearranges their counselors in order to target incoming students more effectively. When this happens, the pages under "admissions/connect/counselors" can change. This year, the single page was split up into four separate pages to accomodate a change in how the counselors divided up their territories. Next year, it could go down to two or up to seven, who knows. The Web Express team is given spreadsheets with data to aid in importing and updating the counselors and events.

####Find A Counselor

The counselor search tool uses a combination of the Simple Hierarchical Select (shs) module and Views exposed filters. All counselors are tagged with the locations they cover which can have a number of parent and child relationships. For example, you might have:

`United States -> CO -> Denver -> Big High School`

Searching at the CO level would give you all counselors tagged with Denver as well as other metro areas, but searching at the Denver level won't give you the other metro areas. The locations aren't really something to ponder as their relationship goes:

`location1 -> location2 -> location3 -> location4`

####Feeds Import

When importing this data via Feeds, the locations need to be in the correct order with those headers at the top corresponding to how many location levels are in the supplied spreadsheet. 

There is a Feeds importer for each level of the location data so that child terms can associate themselves with the parent after the parent has been imported. To import the data correctly you will need to:
* Look at the Excel sheet provided by Admissions and make sure there are headers with "location1, location2..." If not there, then you have to add the headers. Make sure the levels make sense. Sometimes the locations might be in a different order than from less specfic to more specific
* After preparing the locations spreadsheet, split it into separate sheets based on the top levels. The top levels of the location hierarchy can change from year to year, so the number of sheets could vary.
* Each spearate sheet will need to have a taxonomy associated to it.
* Take each inidivual sheet and start importing with the location level where differentiation beigns. For example, one sheet might have "Domestic, Freshman, United States, CA" and the differentiation starts at the state level so you can start at the fourth level importer.
* There are currently six different feeds importers for location that import parent terms first and then associate child terms with them on the next run. So, the fourth level importer will look for the third level parents and then import the fourth level terms and so on and so forth. 
* Instead of making many different importers for each taxonomy, the the taxonomy the locations are imported into can be changed manually for each import. Import each level of locations for each taxonomy remembering to switch the associated taxonomy.

Now that the locations are imported, you have to attach them to counselors. There is one importer for this task. You will also need to prepare the sheets for this import. There is a tool to help you do this at: "admin/config/content/admissions". Take each sheet as is, upload the file, and you should get a new sheet with one counselor per row with all locations in the "all_terms" column.  

Use the person location importer this time changing the field mappings for each separate taxonomy. You'll also have to lookup the NID for each person node, make a "person_nid" column, and add that column to the field mapping. 

Then, import each sheet changing the field mapping to each corresponding taxonomy. You'll have to check out Feeds Tamper for the "all_terms" colum and make sure it is set to "explode" with the pipe character as the separator. 

####Search Pages

Now that you have everything imported, you need to make sure the contexts and views for each separate location taxonomy are up-to-date. To make it easier for the site owner to add content and update each search, separate pages are added for each taxonomy. To place the view blocks in Express, you need to do so via context. So, you will have as many view blocks and contexts as location taxonomies. Each view block will only vary filtering results by taxonomy, and each context will have a separate path loading the appropriate view blocks. 

On each separate location page, the user keeps choosing from a tree of options untill they get to a specific location where they want to search for counselors. When the search is submitted, counselors are shown that cover those locations.  

####Geolocation Events Feature

There is also a way to search for recruitment events. This search used to be tied to the recruitment locations, but thankfully now it is only based on the address of the event. A user can submit their address and proximity range to manually search for events.

However, there are also results returned by geolocation data. The user is prompted whether or not they want to share thier location and then if they do share, results are returned within 50 miles of their current position. 

On Chrome browsers, and likely others to follow, the HTML5 geolocation feature only works over HTTPS. Until www.colorado.edu switches to all HTTPS traffic, this means that the page the events search is on and the AJAX request path for more geolocated events need to be added to the Secure Pages configuration. The page the search is on needs to use the system path, "node/xxx", while the AJAX request can just use the path in hook_menu() since that is the true system path.

There are separate views for the geolocated returned results and the manual event search results. This was done initially because the maunal events search used the location taxonomies to return results. It still needed since sending in address data and geolocation data requires different processes. 

Once the user has agreed to share location data, an AJAX call is made that will return events according to their location. If the location is not shared the original results are used. The original results should just be the events listed in chronological order. After a manual search has been made, a query parameter is added to the URL so on the next page load the user isn't prompted for their geolocation. 

The address to geo coordinates conversion is done via a function in the geocoder module that uses a Google service.
