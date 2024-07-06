To login session we use

<?php 
require_once ('config.php');
$errormessage = "";

if(isset($_POST['username']) && isset($_POST['password'])){
    $username =$db->escape_string($_POST['username']);
    $password = $db->escape_string($_POST['password']);
    $password= hash('sha256',$password);
  

    $rs = $db->query("SELECT *FROM users where username ='$username' AND password='$password'");
    if($rs->num_rows){
        $user = $rs->fetch_object();
  

    $_SESSION['admin'] = true;

    header("location:index.php");
   exit;

} else{
    $errormessage = "information is not complete";
}  

}
?>
