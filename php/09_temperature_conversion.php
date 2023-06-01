<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<form action=""method="POST">
    <input type="text" name="num" placeholder="enter your number">
    <label for="">celc</label>
    <input type="radio" name="units" value="cel">
    <label for="">fehr</label>
    <input type="radio" name="units" value="feh">
    <input type="submit" value="submit" name="submit">
</form>

    <p>
    <?php
    if(isset($_POST['submit'])){
        $num=$_POST['num'];
        $temp=$_POST['units'];
        if($temp=="cel"){
            echo "celcius";
            echo $num;
        }
        else{
            echo "fahrenheit";
            echo $num;
            
        }
    }
    ?>
    </p>
</body>
</html>