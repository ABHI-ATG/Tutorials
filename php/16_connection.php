<?php
$username="root";
$password="";
$server="localhost";
$database="sql_learning";



// mysqli_connect($server,$username,$password,$database);
$con=mysqli_connect($server,$username,$password,$database);

// if($con){
//     echo "connection is sucessful";
//     ?>
// <script>
// alert("connection successful");
// </script>
// <?php
// }
// else{
//     echo "no connection";
//     // die("no connection". mysqli_connect_error());
// }




//2nd method

// $con=mysqli_connect($server,$username,$password);
// $db2=mysqli_select_db($con,$database);
// if($con){
//     echo "connection is sucessful";
// }
// else{
//     echo "no connection";
//     // die("no connection". mysqli_connect_error());
// }

?>