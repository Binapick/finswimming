<?php
/*----------------- php source file -----------------
  @file      : frontend/top_menus.inc
  belongs to : mysql DB
  contact    : Andreas Steiner   (astone@stoneship.at)
  @copyright 2016
  <!-- phpDesigner :: Timestamp [25.06.2016 11:18:36] -->
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