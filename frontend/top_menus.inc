<?php
/*----------------- php source file -----------------
  @file      : frontend/top_menus.inc
  belongs to : mysql DB
  contact    : Andreas Steiner   (astone@stoneship.at)
  @copyright 2016
  <!-- phpDesigner :: Timestamp [29.06.2016 10:50:22] -->
  ------HoC------
 ----------------------------------------------------*/

function getNavMain(){
  $z = "
    <ul id=\"topMain\" class=\"nav nav-pills nav-main\">\n
      <li class=\"\"><!-- HOME -->\n
        <a class=\"\" href=\"#\">HOME</a>\n
      </li>\n
    </ul>\n
       
";
  return $z;
}

function getTopBar($lang){
  $z = "
    <!-- Top Bar -->
		<div id=\"topBar\">\n
		  <div class=\"container\">\n

				<!-- right -->\n
				<ul class=\"top-links list-inline pull-right\">\n
					<li class=\"text-welcome hidden-xs\">".$lang["welcome"].", <strong>John Doe</strong></li>\n
					<li>
						<a class=\"dropdown-toggle no-text-underline\" data-toggle=\"dropdown\" href=\"#\"><i class=\"fa fa-user hidden-xs\"></i> ".$lang["account"]."</a>
						<ul class=\"dropdown-menu pull-right\">
							<li><a tabindex=\"-1\" href=\"#\"><i class=\"fa fa-bookmark\"></i> ".$lang["profile"]."</a></li>
							<li><a tabindex=\"-1\" href=\"#\"><i class=\"fa fa-edit\"></i> ".$lang["competition"]."</a></li>
							<li class=\"divider\"></li>
							<li><a tabindex=\"-1\" href=\"#\"><i class=\"glyphicon glyphicon-off\"></i> ".$lang["logout"]."</a></li>
						</ul>
					</li>";
					
// TODO: Login, Logout script          
          
  $z .= " <li><a href=\"index.php?l=".$lang["set_language"]."&mo=log\">".$lang["login"]."</a></li>
					<li><a href=\"index.php?l=".$lang["set_language"]."&mo=log\">".$lang["register"]."</a></li>


				</ul>

					<!-- left -->
					<ul class=\"top-links list-inline\">
						<li class=\"hidden-xs\"><a href=\"index.php?l=".$lang["set_language"]."&mo=con\">".$lang["contact"]."</a></li>
						<li>";
  if($lang["set_language"] == "en"){ 
    $z .= "
      <a class=\"dropdown-toggle no-text-underline\" data-toggle=\"dropdown\" href=\"#\"><img class=\"flag-lang\" src=\"assets/images/flags/us.png\" width=\"16\" height=\"11\" alt=\"lang\" /> ".$lang["lang_en"]."</a>\n
      <ul class=\"dropdown-langs dropdown-menu\">\n
  			<li><a tabindex=\"-1\" href=\"#\"><img class=\"flag-lang\" src=\"assets/images/flags/us.png\" width=\"16\" height=\"11\" alt=\"lang\" /> ".$lang["lang_en"]."</a></li>\n
  			<li class=\"divider\"></li>
  			<li><a tabindex=\"-1\" href=\"index.php?l=de\"><img class=\"flag-lang\" src=\"assets/images/flags/de.png\" width=\"16\" height=\"11\" alt=\"lang\" /> ".$lang["lang_de"]."</a></li>\n
  			<li><a tabindex=\"-1\" href=\"index.php?l=hu\"><img class=\"flag-lang\" src=\"assets/images/flags/hu.png\" width=\"16\" height=\"11\" alt=\"lang\" /> ".$lang["lang_hu"]."</a></li>\n";
  }
	elseif($lang["set_language"] == "de") { 
    $z .= "
      <a class=\"dropdown-toggle no-text-underline\" data-toggle=\"dropdown\" href=\"#\"><img class=\"flag-lang\" src=\"assets/images/flags/de.png\" width=\"16\" height=\"11\" alt=\"lang\" /> ".$lang["lang_de"]."</a>				
			<ul class=\"dropdown-langs dropdown-menu\">
  			<li><a tabindex=\"-1\" href=\"index.php?l=en\"><img class=\"flag-lang\" src=\"assets/images/flags/us.png\" width=\"16\" height=\"11\" alt=\"lang\" /> ".$lang["lang_en"]."</a></li>\n
  			<li class=\"divider\"></li>
  			<li><a tabindex=\"-1\" href=\"#\"><img class=\"flag-lang\" src=\"assets/images/flags/de.png\" width=\"16\" height=\"11\" alt=\"lang\" /> ".$lang["lang_de"]."</a></li>\n
  			<li class=\"divider\"></li>
        <li><a tabindex=\"-1\" href=\"index.php?l=hu\"><img class=\"flag-lang\" src=\"assets/images/flags/hu.png\" width=\"16\" height=\"11\" alt=\"lang\" /> ".$lang["lang_hu"]."</a></li>\n";
  }	
	elseif($lang["set_language"] == "hu") { 
    $z .= "
      <a class=\"dropdown-toggle no-text-underline\" data-toggle=\"dropdown\" href=\"#\"><img class=\"flag-lang\" src=\"assets/images/flags/hu.png\" width=\"16\" height=\"11\" alt=\"lang\" /> ".$lang["lang_hu"]."</a>				
			<ul class=\"dropdown-langs dropdown-menu\">
  			<li><a tabindex=\"-1\" href=\"index.php?l=en\"><img class=\"flag-lang\" src=\"assets/images/flags/us.png\" width=\"16\" height=\"11\" alt=\"lang\" /> ".$lang["lang_en"]."</a></li>\n
  			<li><a tabindex=\"-1\" href=\"index.php?l=de\"><img class=\"flag-lang\" src=\"assets/images/flags/de.png\" width=\"16\" height=\"11\" alt=\"lang\" /> ".$lang["lang_de"]."</a></li>\n
  			<li class=\"divider\"></li>
        <li><a tabindex=\"-1\" href=\"#\"><img class=\"flag-lang\" src=\"assets/images/flags/hu.png\" width=\"16\" height=\"11\" alt=\"lang\" /> ".$lang["lang_hu"]."</a></li>\n";
  }	
  $z .= "
							</ul>
						</li>
					</ul>
				</div>
			</div>
			<!-- /Top Bar -->";
  return $z;
}

function getButtons(){
  $z = "
    <ul class=\"pull-right nav nav-pills nav-second-main\">\n
		  <!-- SEARCH -->\n
  		<li class=\"search\">\n
				<a href=\"javascript:;\">\n
					<i class=\"fa fa-search\"></i>\n
				</a>\n
				<div class=\"search-box\">\n
					<form action=\"\" method=\"get\">\n
						<div class=\"input-group\">
							<input type=\"text\" name=\"src\" placeholder=\"Search\" class=\"form-control\" />\n
							<span class=\"input-group-btn\">\n
								<button class=\"btn btn-primary\" type=\"submit\">Search</button>\n
							</span>\n
						</div>\n
					</form>\n
				</div> \n
			</li>\n
			<!-- /SEARCH -->\n
    </ul>\n";
  return $z;
}

function getLogo(){
  $z = "		  
    <!-- Logo -->\n
		<a class=\"logo pull-left\" href=\"index.php\">\n
		  <img src=\"assets/images/logo_tsvoe.png\" alt=\"\" />\n
		</a>\n";
  return $z;
}

?>