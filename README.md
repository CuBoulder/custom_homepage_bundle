
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

When importing this data via Feeds, the locations need to be in the correct order with those headers at the top corresponding to how many location levels are in the supplied spreadsheet. 

There is a Feeds importer for each level of the location data so that child terms can associate themselves with the parent after the parent has been imported. To import the data correctly you will need to:
1.
2.


The user keeps choosing from a tree of options untill they get to a specific location where they want to search for counselors. When the search is submitted, 

####Geolocation Events Feature


