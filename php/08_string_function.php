<?php

$str="abhi is my name";
$count=strlen($str);
echo "$count<br>";//to find the lenght of string

$words_count=str_word_count($str);
echo "$words_count<br>";// to find the number of words

$replace=str_replace("abhi", "atg", $str);
echo "$replace";

?>