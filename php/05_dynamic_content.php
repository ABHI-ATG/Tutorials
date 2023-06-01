<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="" method="POST">
    Enter your favourite colour : 
    <input type="text" name="favcolor">
        <input type="submit" name="submit" value="click me">
    <p>
    <?php
if(isset($_POST['submit'])){
    $favcol=$_POST['favcolor'];
    echo "MY Fav COL is $favcol";
}
?>
    </p>
</body>
</html>
<!-- 
    _POST is an event 
 -->