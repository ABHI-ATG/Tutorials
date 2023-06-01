<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<form action="" mehtod="POST">
<input type="submit" name="submit" value="submit"/>
</form>
</body>
</html>


<?php
include '16_connection.php';
    echo "start";

    $selectquery="select * from table_test";
    $query= mysqli_query($con,$selectquery);
    while($res=mysqli_fetch_array($query)){
        echo $res['name'] . "<br>";
}

// $nums=mysqli_num_rows($query);
// echo $nums;

// while($i<10){
//     echo $i . "<br>";
//     $i++;
// }


?>