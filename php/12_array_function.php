<?php
$students=array("abhi","atg","love");
// sort 
sort($students);
rsort($students);

// pop vs push 
array_pop($students);//remove last element
array_push($students,34);//add element at last

// shift and unshift
array_shift($students);////remove first element
array_unshift($students,"abhi_singhal");//add element at first

echo "<pre>";
print_r($students);// print the array

//implode and explode
// implode - join elements of array as a strig
// explode - convert string to array

$res=implode("",$students);// in double comma , we can add anything between the elements of an array elements 
echo "$res";//become string

$bio="my name is abhi singhal";
$res2=explode("",$bio);
print_r($res2);


//
$arr1=array("abhi","singhal");
$arr2=array("atg","singhal");

$merge=array_merge($arr1,$arr2);

$res=array_unique($merge);
?>
