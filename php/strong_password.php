<?php
    $length = 12;
    $symbol_pool = "!&%^&()*";
    $symbol_size = rand(1,3);
    $remaining = $length - $symbol_size;
    $upper_size = rand(1,4);
    $remaining = $remaining - $upper_size;
    $num_size = rand(1,3);
    $lower_size = $remaining - $num_size;
    $password = '';
    for($i=0;$i<$symbol_size;$i++) {
      $password .= $symbol_pool[rand(0,strlen($symbol_pool)-1)];
    }
    for($i=0;$i<$upper_size;$i++) {
      $password .= chr(rand(0,25)+65);
    }
    for($i=0;$i<$lower_size;$i++) {
      $password .= chr(rand(0,25)+97);
    }
    for($i=0;$i<$num_size;$i++) {
      $password .= chr(rand(0,9)+10);
    }
    $password = str_shuffle($password);
    echo $password;
?>
