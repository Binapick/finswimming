<?php
/*----------------- php source file -----------------
  @file      : index.php
  belongs to : Maria DB
  contact    : Andreas Steiner   (astone@stoneship.at)
  copyright 2016
  <!-- phpDesigner :: Timestamp [29.06.2016 14:25:22] -->
  ------HoC------
 ----------------------------------------------------*/
ini_set("display_errors",1);
error_reporting(E_ALL|E_STRICT);
(isset($_GET["l"]))? $top_bar["set_language"] = $_GET["l"] : $top_bar["set_language"] = "en";
(isset($_GET["mo"]))? $mo = $_GET["mo"] : $mo = "con";
(isset($_GET["a"]))? $a = $_GET["a"] : $a = "10";

include_once("./assets/lib/fu_html.inc");
include_once("./assets/lib/".$top_bar["set_language"]."_lang.inc");
include("./frontend/top_menus.inc");
include("./frontend/sliders.inc");

$o  = HTML_Header();

$o .= "<div id=\"wrapper\">\n";
$o .= getTopBar($top_bar, $mo, $a);
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
elseif($mo == "sec"){ $o .= include("/frontend/mo_secure.inc"); }


$o .= include("/frontend/footer.inc");

$o .= "</div>\n";

$o .= HTML_Bottom($mo);
print $o;
?>