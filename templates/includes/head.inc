<?php

/* Foundation Profile Head */

include("./includes/functions.inc");

?>

<!doctype html>
<!--[if IE 9]><html class="lt-ie10" lang="en" > <![endif]-->
<html class="no-js" lang="en">
  <head>
    <meta charset="utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title><?=$pages->get("/content/settings/")->site_title ?> - <?=$page->title ?></title>
    <!-- these first -->
    <link rel="stylesheet" href="<?php echo $config->urls->templates?>css/normalize.css" />
    <link rel="stylesheet" href="<?php echo $config->urls->templates?>css/foundation.css" />
    <link rel="stylesheet" href="<?php echo $config->urls->templates?>font-awesome-4.0.3/css/font-awesome.min.css">
    <!-- This is for any site specific or overrides -->
    <link rel="stylesheet" href="<?php echo $config->urls->templates?>css/site.css" />

    <script src="<?php echo $config->urls->templates?>js/modernizr.js"></script>
  </head>
  <body>

  <!-- top navigation -->

  <nav class="top-bar" data-topbar>
  <ul class="title-area">
    <li class="name">
      <h1 class="show-for-large-up"><a href="/">

      <?php 

      if($pages->get("/content/settings/")->single_image){

        echo "<img src='{$pages->get("/content/settings/")->single_image->url}' alt='{$pages->get("/content/settings/")->single_image->description}'>";
      }else{
        echo $pages->get("/content/settings/")->site_title;
      }
      ?>

      </a></h1>
    </li>

    <li class="toggle-topbar menu-icon"><a href="#">Menu</a></li>

  </ul>
  <section class="top-bar-section">
  <ul class="right">
    <li class="has-form searchform">
      <div class="row collapse">
        <div class="large-8 small-9 columns">
          <input type="text" placeholder="Find Stuff">
        </div>
        <div class="large-4 small-3 columns">
          <a href="#" class="pwbg button expand">Search</a>
        </div>
      </div>
    </li>
  </ul>

  
    <!-- Right Nav Section -->

    	<?php include("./includes/navigation.inc");  ?>
    
	  </section>
	</nav>
<header>
  <div class="row">
    <div class="columns">
      <h2>Foundation driven by ProcessWire</h2>
    </div>
  </div>
</header>