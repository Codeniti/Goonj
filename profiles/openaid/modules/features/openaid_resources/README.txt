OpenAid Resources Feature

Feature Dependencies:
OpenAid Base
OpenAid Tags Topics

Modules Used:
apachesolr/apachesolr_search - http://drupal.org/project/apachesolr
apachesolr_search_block - Custom module in sites/all/modules/custom/apachesolr_search_block
facetapi/current_search - http://drupal.org/project/facetapi
views - http://drupal.org/project/views

Description:
The OpenAid Resources Feature creates a Resource node type with fields for description, language, file, tags, topics and resource type. The language and resource type taxonomy vocabularies are also created by the Feature. An Apache Solr custom search page is created at the /resources path and added to the Main navigation menu. The custom search page uses the resources_solr context to add a default view (displayed only when the search page has no search terms or facets using a hook in the openaid_resources_extra module) and it also adds the search block and facet interface to the sidebar.

Caveats:

