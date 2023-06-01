<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>crud tutorial</title>
</head>
<body>
<h1>
hello , we are learning database
</h1>
<form method="POST">
<input type="text" placeholder="Enter your Name" name="user" value=""/>
<input type="text" placeholder="Enter mobile number" name="mobile" value=""/>
<!-- <input type="text" placeholder="Enter E-Mail" name="email" value=""/>
<input type="text" placeholder="any reference" name="refer" value=""/>
<input type="text" placeholder="Enter your qualifications" name="degree" value=""/>
<input type="text" placeholder="webdeveloper post" name="web" value=""/> -->
<input type="submit" name="submit" title="submit"value="submit"/>
<a href="17_fetch.php">

<input type="submit" title="submit"value="submit2"/>
</a>

<a href="17_fetch.php">
<div class="">
<button>check</button>
</div>
</a>
</form>
</body>
</html>
<?php
include '16_connection.php';
if(isset($_POST['submit'])){
    $name=$_POST['user'];
$number=$_POST['mobile'];
// $email=$_POST['email'];
// $refer=$_POST['refer'];
// $degree=$_POST['degree'];
// $web=$_POST['web'];
$insertquery = "insert into table_test (name,age) values ('$name','$number') ";
$res=mysqli_query($con,$insertquery);
if($res){
    echo "data inserted";
}
else{
    echo "data is not inserted";
}
}
?>