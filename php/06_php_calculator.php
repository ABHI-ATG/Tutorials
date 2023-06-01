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
        <input type="text" placeholder="enter number" name="num1">
        <input type="text" placeholder="enter number" name="num2">
        <select name="operation" id="">
            <option value="add">add</option>
            <option value="sub">sub</option>
            <option value="mult">mult</option>
            <option value="div">div</option>
        </select>
        <input type="submit" value="submit1" name="submit">
        <div>
            <p>
                <?php
                if(isset($_POST['submit'])){
                $n1=$_POST['num1'];
                $n2=$_POST['num2'];
                // echo "{$n1} {$n2}";
                $op=$_POST['operation'];
                if($op=="add"){
                    $r=$n1+$n2;
                }
                elseif($op=="sub"){
                    $r=$n1-$n2;

                }
               elseif($op=="mult"){
                $r=$n1*$n2;

                }
                else{
                    $r=$n1/$n2;

                }
                echo "$n1 $op $n2 = $r";
                }
                ?>
            </p>
        </div>
    </form>
</body>
</html>