
You can add this bundle from packages_base by using: 
`drush dslm-add-custom cu_homepage_bundle`

To add the contrib modules if they weren't added by the command above:
`drush dslm-add-contrib addressfield better_exposed_filters feeds feeds_tamper geocoder geofield geofield_map geophp job_scheduler postal_code shs term_merge term_reference_tree views_block_filter_block views_responsive_grid`

## Admissions Section

There are a couple of custom parts to the Admissions section of the homepage site that are worth explaining in more detail. 

### Connect With Us Section

Once or so a year, the admissions team rearranges their counselors in order to target incoming students more effectively. When this happens, the pages under "admissions/connect/counselors" can change. This year, the single page was split up into four separate pages to accomodate a change in how the counselors divided up their territories. Next year, it could go down to two or up to seven, who knows. The Web Express team is given spreadsheets with data to aid in importing and updating the counselors and events.

#### Find A Counselor

The counselor search tool uses a combination of the Simple Hierarchical Select (shs) module and Views exposed filters. All counselors are tagged with the locations they cover which can have a number of parent and child relationships. For example, you might have:

`United States -> CO -> Denver -> Big High School`

Searching at the CO level would give you all counselors tagged with Denver as well as other metro areas, but searching at the Denver level won't give you the other metro areas. The locations aren't really something to ponder as their relationship goes:

`location1 -> location2 -> location3 -> location4`

#### Feeds Import

When importing this data via Feeds, the locations need to be in the correct order with those headers at the top corresponding to how many location levels are in the supplied spreadsheet. 

There is a Feeds importer for each level of the location data so that child terms can associate themselves with the parent after the parent has been imported. To import the data correctly you will need to:
1. Look at the Excel sheet provided by Admissions and make sure there are headers with "location1, location2..." If not there, then you have to add the headers. Make sure the levels make sense. Sometimes the locations might be in a different order than from less specfic to more specific. Corrects headers are "person_nid,lastname,location1,location2,location3,location4,location5,location6,comments" in that order. 

2. After preparing the locations spreadsheet, split it into separate sheets based on the type of student being recruited. The top levels of the location hierarchy can change from year to year, so the number of sheets could vary. Currently, they are "Domestic Freshman, Domestic Transfer, and International Undergrad". The spreadhseet you are given should include these terms in the first two location columns.

3. You now have to prepare the Person content type to match up the locations to counselors. First, start by making a taxonomy vocabulary for each new recruitment category prefixing with the current year, e.g. "2017 Admissions Locations Domestic Freshman".

4. Then, you need to use a Feeds Importer to associate the locations to the new taxonomies. You will start with the location importers at the level where the locations start to differ. For "Domestic Freshman," the import would start at "location4" since that is where the counselors start to differentiate themselves.

5. Next you would run the remaining location importers. For "Domestic Freshman", you would then run the "location5" importer after the "location4" importer. The Feeds importer will look for any parent terms imported in step four and associate them with the current term being imported. This process of parent/child matching is how the final hierarchical select list is built.

6. Once you are done with one recruitment category, you can move onto the next one and import locations, e.g. go from "Domestic Freshman" to "Domestic Transfer". You will need to edit the Feeds importer for the location columns to add to the next taxonomy vocabulary before you use any of the importers for that recrutiment category. If we move onto importing "Domestic Transfer", then we need to change the vocabulary on the "Settings for Taxonomy term processor" in the importer to the vocabulary matching Domestic Transfer.

7. Now, we can start to add those terms to the Person content type. Since we are creating new taxonomies to use in order preserve the old ones, we also need to create new fields on the person content type that reference the taxonomies we just created. Those fields need to automatically select the parent, be collapsed by default, show a track list, and have unlimited values. All of these are options given to you when creating the field. Place the new term reference fields in a field group denoting they are locations for the year you are importing.  

8. You will also need to prepare the sheets for matching counselors to recruitment locations. There is a tool to help you do this at: "admin/config/content/admissions". The sheets you create in step two probably won't have all their commas in the right place. You will need to check and see that the CSV file has proper amounts of commas or else the CSV data transformation tool will be off by one and the export won't be usable. Historically, this has meant only placing one comma after the last column header. Once prepared, upload the spreadhseet and you should get a new sheet with one counselor per row with all locations in the "all_terms" column.  

9. You can now use the person location importer to match locations to counselors. You will first have to change which field to import to based on the locations fields you added to the person content type. When you switch that field in the Feeds Importer UI, you will need to check the Tamper tab (needs feeds_tamper_ui enabled) to see that the locations field is set to have an "Explode" plugin enabled using a pipe, "|", separator. You will also need to add the person NID to the CSV you are importing under a "person_nid" column. If you try to match by lastname of the counselor being unique, Feeds will still end up making new person nodes when you want the locations tied to existing person nodes.  

10. The last step is to change the field the views are filtering on when users interact with the counselor search. There is one view that has four different blocks related to finding a counselor. Once you change that filter field and remove the filter pointing to the old locations field, you should test to make sure that the correct counselors show up in the search. 

11. If all goes well, switch over all of the Views filters to use the new fields on the Person content type and then delete the old fields and taxonomies relating to the previous year. You shouldn't do this immediately, but make a note to come back and do the cleanup process in a couple of week. 

#### Search Pages

Now that you have everything imported, you need to make sure the contexts and views for each separate location taxonomy are up-to-date. To make it easier for the site owner to add content and update each search, separate pages are added for each taxonomy. To place the view blocks in Express, you need to do so via context. So, you will have as many view blocks and contexts as location taxonomies. Each view block will only vary filtering results by taxonomy, and each context will have a separate path loading the appropriate view blocks. 

On each separate location page, the user keeps choosing from a tree of options untill they get to a specific location where they want to search for counselors. When the search is submitted, counselors are shown that cover those locations.  

#### Geolocation Events Feature

There is also a way to search for recruitment events. This search used to be tied to the recruitment locations, but thankfully now it is only based on the address of the event. A user can submit their address and proximity range to manually search for events.

However, there are also results returned by geolocation data. The user is prompted whether or not they want to share thier location and then if they do share, results are returned within 50 miles of their current position. 

On Chrome browsers, and likely others to follow, the HTML5 geolocation feature only works over HTTPS. Until www.colorado.edu switches to all HTTPS traffic, this means that the page the events search is on and the AJAX request path for more geolocated events need to be added to the Secure Pages configuration. The page the search is on needs to use the system path, "node/xxx", while the AJAX request can just use the path in hook_menu() since that is the true system path.

There are separate views for the geolocated returned results and the manual event search results. This was done initially because the maunal events search used the location taxonomies to return results. It still needed since sending in address data and geolocation data requires different processes. 

Once the user has agreed to share location data, an AJAX call is made that will return events according to their location. If the location is not shared the original results are used. The original results should just be the events listed in chronological order. After a manual search has been made, a query parameter is added to the URL so on the next page load the user isn't prompted for their geolocation. 

The address to geo coordinates conversion is done via a function in the geocoder module that uses a Google service.
