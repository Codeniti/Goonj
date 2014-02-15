OpenAid Base Feature

Feature Dependencies:

Modules Used:
apachesolr/apachesolr_search - http://drupal.org/project/apachesolr
context - http://drupal.org/project/context
facetapi/current_search - http://drupal.org/project/facetapi
extlink - http://drupal.org/project/extlink
google_analytics - http://drupal.org/project/google_analytics
views - http://drupal.org/project/views

Description:
The OpenAid Base Feature creates the Basic Page content type and provides three Basic pages: Front (aka Home), RSS and Page Not Found (aka 404). The Feature adds the Home link to the main menu and sets up a new Footer menu. You should customize the pages as necessary. The OpenAid Base provides a Content Editor role so that you can begin to add varying levels of site content administration. The Content Editor role permissions should be reviewed and adjusted when new Features are enabled. The "base_footer", "base_search" and "main_content" contexts are created to manage the blocks in the footer region, search page and sitewide content region respectively. The External Link module is included and preconfigured to open all external links (i.e. links on domains and subdomains outside of the OpenAid site) in tabs by the addition of target="_blank" to link tags. Google Analytics has been included to provide site analytics, but you will need to enter your Web Property ID by going to admin/config/system/googleanalytics. If you do not already have a Web Property ID, you can obtain one by going to http://www.google.com/analytics/.  The OpenAid Base feature also provides an attached files view so that files attached to nodes can be displayed in a separate block instead of in the content region as part of the node.

Caveats:
There is an operations order error that will sometimes manifest as pages being created without content. When this happens, the Feature will display as Overridden. To resolve the problem, click the Overridden link from the Features admin page, check the Content Item option and click the Revert Components button. Doing this will restore the pages to the content specified in the Feature. Note that you will lose any custom content when this is done.
