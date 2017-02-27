<?php require_once('../../private/initialize.php'); ?>
<?php
  if(!isset($_POST['string'])){ redirect_to("Challenge1.php");}
  $string = $_POST['string'];
  for($i=0;$i<26;$i = $i+1){
    $cipher_text = str_rot($string,$i);
    echo $cipher_text . "<br />";
    //echo base64_decode($cipher_text) . "<br /><br />";
  }
