@atoz
Feature: As an anonymous user, I want to find more information on CU websites, and places.

  Scenario: An anonymous user can page through results of the directory.
    Given I am on "atoz"
    Then I should see "Search Directory by Letter"
    # Initially they should be on the "A" listing page.
    And I should see "Academic calendar"
    When I follow "b"
    Then I should see "Be Boulder Anywhere"

  Scenario: An anonymous user can get more detailed information about a directory listing.
    Given I am on "atoz"
    When I follow "Academic Advising Center"
    Then I should see "Campus Box: 290 UCB, WDBY 10"

  @current
  Scenario: An anonymous user can get more detailed information about the parents of a directory listing.
    Given I am on "atoz/letter/c"
    When I follow "Office of the AVC for IT & CIO"
    Then I should see "Academic Technology"
    And I should see "IT Policy"

  
#  ### Not there currently but nice to have
#
#  Scenario: An anonymous user can search the directory via a filter on the listing page.
#
#  Scenario: An anonymous user can search the directory via a list of tags.
#
#  Scenario: An anonymous user can order results by varying criteria including an affinity ranking system.
#
#  # It would be nice if their were prompts for the user to narrow results.
#  Scenario: Faceted search helps the user filter results.
