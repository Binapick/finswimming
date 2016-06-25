<?php
/*----------------- php source file -----------------
  @file      : index.php
  belongs to : Maria DB
  contact    : Andreas Steiner   (astone@stoneship.at)
  copyright 2016
  <!-- phpDesigner :: Timestamp [25.06.2016 17:25:31] -->
  ------HoC------
 ----------------------------------------------------*/
ini_set("display_errors",1);
error_reporting(E_ALL|E_STRICT);

include_once("./assets/lib/fu_html.inc");
include("./frontend/top_menus.inc");
include("./frontend/sliders.inc");

$o  = HTML_Header();

$o .= "<div id=\"wrapper\">\n
        <div id=\"header\" class=\"sticky header-md clearfix\">\n";


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

$o .= "			<!-- CALLOUT -->
			<div class=\"alert alert-transparent bordered-bottom\">
				<div class=\"container\">

					<div class=\"row\">

						<div class=\"col-md-9 col-sm-12\"><!-- left text -->
							<h3>Call now at <span><strong>+800-565-2390</strong></span> and get 15% discount!</h3>
							<p class=\"font-lato weight-300 size-20 nomargin-bottom\">
								We truly care about our users and our product.
							</p>
						</div><!-- /left text -->

						
						<div class=\"col-md-3 col-sm-12 text-right\"><!-- right btn -->
							<a href=\"#purchase\" rel=\"nofollow\" target=\"_blank\" class=\"btn btn-primary btn-lg\">PURCHASE NOW</a>
						</div><!-- /right btn -->

					</div>

				</div>
			</div>
			<!-- /CALLOUT -->";






$o .= "</div>\n";

$o .= HTML_Bottom();
print $o;
?>