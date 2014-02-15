OpenAid Captcha Feature

Feature Dependencies:

Modules Used:
captcha - http://drupal.org/project/captcha
recaptcha - http://drupal.org/project/recaptcha

Description:
The OpenAid Captcha Feature implements the captcha and recaptcha modules in order to provide protection against spam and automated user registration. The recaptcha public and private keys will need to be reviewed and updated for each site.  

To generate keys for a new site: 
1. Visit https://www.google.com/recaptcha/admin/create
2. Enter the site domain
3. Click Create Key
4. Go to admin/config/people/captcha/recaptcha on the site
5. Paste the public and private keys into the appropriate fields 

Caveats:

