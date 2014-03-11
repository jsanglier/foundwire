Foundwire Demo Profile
======================

Version 0.3

A Profile for the ProcessWire CMS using Foundation 5.2.0
--------------------------------------------------------

NOTE: This was built with PW 2.4

This demo profile uses the Foundation 5.2.0 framework from Zurb

It demonstrates how ProcessWire can work with Foundation and shows a small selection of the Foundation components:

- Tob Bar menu
- Orbit Slideshow
- Content Drop Down
- Tabs
- Gallery

INITIALISING FOUNDATION
-----------------------

Foundation needs to be initialised on each template with

    <script>
      $(document).foundation();
    </script>

This are being called individually on each template so that it can also include any additional initialisation or parameters for any Foundation plugins such as Orbit - see home.php for an example. Do not try and initialise foundation globally and then add parameters seperately. This results in Foundation being initialised twice which causes problems with the topbar menu (and possibly other functions)

SCSS
----

The installation includes the Foundation SCSS files and these were very slightly customised and output to foundation.css. I used the Scout Windows app, which is one of the quickest ways of starting to work with SASS - http://mhs.github.io/scout-app/

TEMPLATES
---------

Only a handful of templates are used and they can be found in the /site/templates/ directory. Additional markup can be found in the includes directory.

CSS
---

In addition to foundation.css and normalize.css, the installtion also includes site.css which has non-Foundation css classes and editor.css which has some Foundation typography markup for TinyMCE

JS
--

I am using foundation.js and am adding the plugins on a page by page basis rather than calling them all at once with foundation.min.js.

In each template there are three footer includes: 

footer.inc - any common end-of-page mark up
footscripts.inc - any common scripts for all template files such as jquery and foundation.js
foot.inc - wrapping the page up

On each template, additional plugins can be called after footscripts.inc - see the comments on the templates.

INSTALLATION
------------

Download the dev version of PW and replace the appropriate folders with the ones from this archive as you would do normally.

Don't forget the TinyMCE one!


Joss

CHANGELOG
---------

v 0.3 - updated to Foundation 5.2