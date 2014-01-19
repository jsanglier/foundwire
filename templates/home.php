<?php 

/**
 * Home template
 *
 */

include("./includes/head.inc"); 
?>
<!-- Main Page Markup goes here -->

<div class="wrapper"><!-- Using a wrapper to give the main contents area a background colour -->

  <div class="row slideshow show-for-medium-up">
    <!-- include the slideshow function from functions.inc -->
  	<?php homeSlideshow(); ?>
  </div><!-- /row -->

  <div class="row mainrow ">

    <!-- This is the main Title and Body -->
    <div class="medium-8 columns">
    	<h1><?php echo $page->title; ?></h1>
    	<?php echo $page->body; ?>
    </div>

    <!-- This is the side bar with the dropdown info box -->
    <div class="medium-4 columns info">
    	<p><a href="#" class="button right pwbg" data-dropdown="contentDrop"><?php echo $page->info_box_title; ?></a></p>
    	<div id="contentDrop" class="f-dropdown content medium"><?php echo $page->body2; ?></div>
    </div>

  </div><!-- /row -->

</div><!--/wrapper-->
<!-- /End main page markup -->

<?php 
/* Included common footer markup */
include("./includes/footer.inc");
?>

<!-- add any post footer specific to the page here -->

<?php
/* Included common <scripts> */
include("./includes/footscripts.inc");
?>

<!-- add any scripts like foundation plugins specific to this page here -->

<script src="<?php echo $config->urls->templates?>js/foundation/foundation.orbit.js"></script>
<script src="<?php echo $config->urls->templates?>js/foundation/foundation.dropdown.js"></script>

<!-- some bits for orbit -->
<script type="text/javascript">
$(document).foundation({
  orbit: {
    animation: 'slide',
    timer_speed: 2000,
    pause_on_hover: true,
    animation_speed: 800,
    navigation_arrows: true,
    bullets: false,
    next_on_click: true
  }
});

</script>
<?php
/* Wrapping up the page */
include("./includes/foot.inc"); 

