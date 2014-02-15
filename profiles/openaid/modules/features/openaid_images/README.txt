OpenAid Images Feature

Feature Dependencies:
OpenAid Tags Topics

Modules Used:
date/date_api/date_poup - http://drupal.org/project/date
node_embed - http://drupal.org/node/1149106
views - http://drupal.org/project/views

Description:
The OpenAid Images Feature creates most of the functionality surrounding image handling. OpenAid Images creates an Image node with appropriate fields for the image file, The Feature also creates three image styles: "content-inline" for embedding image nodes in other content, "content-large-cropped" for places where larger images are required and "gallery" for thumbnails included on a gallery page. The Galleries taxonomy vocabulary is created to manage Image Galleries (Three empty default galleries are created automatically for ease of use). In order to add an image to a gallery, the image node is simply tagged using the Gallery term. Gallery pages are managed by views, contexts and lightboxing (added in the theme layer).  A Photo Gallery page, which displays a list of Image Galleries, is also created and added to the Main menu.

Caveats:

