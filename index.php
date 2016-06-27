<?php
/*----------------- php source file -----------------
  @file      : index.php
  belongs to : Maria DB
  contact    : Andreas Steiner   (astone@stoneship.at)
  copyright 2016
  <!-- phpDesigner :: Timestamp [27.06.2016 17:11:49] -->
  ------HoC------
 ----------------------------------------------------*/
ini_set("display_errors",1);
error_reporting(E_ALL|E_STRICT);
(isset($_GET["l"]))? $language = $_GET["l"] : $language = "en";
(isset($_GET["mo"]))? $mo = $_GET["mo"] : $mo = "con";

include_once("./assets/lib/fu_html.inc");
include_once("./assets/lib/".$language."_lang.inc");
include("./frontend/top_menus.inc");
include("./frontend/sliders.inc");

$o  = HTML_Header();

$o .= "<div id=\"wrapper\">\n";
$o .= getTopBar($language);
$o .= "   <div id=\"header\" class=\"sticky header-md clearfix\">\n";


$o .= "	<!-- TOP NAV -->\n
				<header id=\"topNav\">\n
					<div class=\"container\">\n";

$o .= "		<!-- BUTTONS -->\n";
$o .= getButtons();
$o .= getLogo();
$o .= "		<div class=\"navbar-collapse pull-right nav-main-collapse collapse\">\n
            <nav class=\"nav-main\">\n";
$o .= getNavMain();
$o .= "     </nav>\n
          </div>\n";

$o .= "	  </div>\n
				</header>\n
				<!-- /Top Nav -->\n";

$o .= " </div>\n";

$o .= getRevolutionSlider();



if($mo == "con"){ $o .= include("/frontend/mo_contact.inc"); }


$o .= include("/frontend/footer.inc");

$o .= "</div>\n";

$o .= HTML_Bottom($mo);
print $o;
?>