<?php

/*

Use this file to add any functions that will be included in the site.

*/


// This is an orbit slideshow for the front page.
function homeSlideshow(){

	// The images and associated text are in a repeater field called home_slides

	$slides = wire("page")->home_slides;
	$out ="";


	foreach($slides as $slide){
		$out .="<li>";

		// Check for an image
		if($slide->slide_image){
			$out .="<img src='{$slide->slide_image->url}'>";
		} // endif

		// put the caption together from the title and textarea in the repeater
		$out .="<div class='orbit-caption'>";
		$out .="<h3>{$slide->title}</h3>";
		$out .="<p>{$slide->basic_textarea}</p>";
		$out .="</div>";
		$out .="</li>";
	}



	echo "<ul class='homeslider' data-orbit>{$out}</ul>";

}

// Tabs Page - this adds a tabs function specifically for the More Details page.

function tabs(){

	// The tabs are in a repeater field called "tabs"
	$tabs = wire("page")->tabs;

	// We need the first iteration 
	$firsttab = $tabs->first();

	$out ="";

	// Start with the tabs. We will use the "name" value to create a unique link to the content panel

	$out .="<dl class='tabs' data-tab>";
	foreach($tabs as $tab){
		// We need to add an active class to the first child
		$activeClass = ($tab === $firsttab ? 'active' : ''); 

		$out .="<dd class='{$activeClass}'><a href='#panel1-{$tab->name}'>{$tab->title}</a></dd>";
	}
	$out .="</dl>";

	// The content of the panels go into divs.

	$out .="<div class='tabs-content'>";
	foreach($tabs as $tab){
		// Again we need an active class
		$activeClass = ($tab === $firsttab ? 'active' : ''); 

		$out .="<div class='content {$activeClass}' id='panel1-{$tab->name}'>{$tab->body}</div>";

	}
	$out .="</div>";

	echo $out;
}

// Clearing - this is a very basic implimentation of the Foundation 5 Clearing Lightbox. 

function clearing(){

	// The images are stored as an array in a field called images
	$images = wire("page")->images;

	$out ="";

	foreach($images as $image){
		
		if($image){ // Just checking there is an image around

		// Create a thumbnail
		$thumbnail = $image->size(150,150);
		$out .="<li><a href='{$image->url}'><img data-caption='{$image->description}' src='{$thumbnail->url}'></a></li>";
		} // endif
	}

	echo "<ul class='clearing-thumbs' data-clearing>{$out}</ul>";
}