<?php
/*----------------- php source file -----------------
  @file      : index.php
  belongs to : Maria DB
  contact    : Andreas Steiner   (astone@stoneship.at)
  copyright 2016
  <!-- phpDesigner :: Timestamp [24.06.2016 10:32:31] -->
  ------HoC------
 ----------------------------------------------------*/
ini_set("display_errors",1);
error_reporting(E_ALL|E_STRICT);

include_once("./assets/lib/fu_html.inc");

$o  = HTML_Header();

$o .= "<div id=\"wrapper\">\n
        <div id=\"header\" class=\"sticky header-md clearfix\">\n";


$o .= "	<!-- TOP NAV -->\n
				<header id=\"topNav\">\n
					<div class=\"container\">\n";

$o .= "		<!-- BUTTONS -->
						<ul class=\"pull-right nav nav-pills nav-second-main\">\n

							<!-- SEARCH -->
							<li class=\"search\">
								<a href=\"javascript:;\">
									<i class=\"fa fa-search\"></i>
								</a>
								<div class=\"search-box\">
									<form action=\"page-search-result-1.html\" method=\"get\">
										<div class=\"input-group\">
											<input type=\"text\" name=\"src\" placeholder=\"Search\" class=\"form-control\" />
											<span class=\"input-group-btn\">
												<button class=\"btn btn-primary\" type=\"submit\">Search</button>
											</span>
										</div>
									</form>
								</div> 
							</li>
							<!-- /SEARCH -->
            </ul>";


$o .= "		  <!-- Logo -->
						<a class=\"logo pull-left\" href=\"index.html\">
							<img src=\"assets/images/logo_dark.png\" alt=\"\" />
						</a>";


$o .= "	  </div>\n
				</header>\n
				<!-- /Top Nav -->\n";


$o .= " </div>\n";

$o .= "</div>\n";

$o .= HTML_Bottom();
print $o;
?>