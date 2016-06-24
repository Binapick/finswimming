<?php
/*----------------- php source file -----------------
  @file      : index.php
  belongs to : Maria DB
  contact    : Andreas Steiner   (astone@stoneship.at)
  copyright 2016
  <!-- phpDesigner :: Timestamp [24.06.2016 09:13:04] -->
  ------HoC------
 ----------------------------------------------------*/
ini_set("display_errors",1);
error_reporting(E_ALL|E_STRICT);

include_once("./assets/lib/fu_html.inc");

$o  = HTML_Header();





$o .= HTML_Bottom();
print $o;
?>