to insert data in database and file uploading


<?php 
require_once('../config.php');

if(isset($_POST['Submit'])){

    
    $title = $_POST['title'];
    $sub_heading = $_POST['sub_heading'];
    $birth_date = $_POST['birth_date'];
    $age = $_POST['age'];
    $website_url = $_POST['website_url'];
    $degree = $_POST['degree'];
    $phone_no = $_POST['phone_no'];
    $email_id = $_POST['email_id'];
    $city = $_POST['city'];
    $freelance = $_POST['freelance'];
    $description = $_POST['description'];
    

    // if(isset($_FILES['avatar'])) {
    //     $fileName = $_FILES['avatar']['name'];
    //     move_uploaded_file($_FILES["avatar"]["tmp_name"], '../../img/'.$fileName);}

        if(isset($_FILES['image'])){
            $fileName = $_FILES['image']['name'];
            move_uploaded_file($_FILES['image']['tmp_name'],'../../assets/img/all_images/' .$fileName);
        }
    


$db->query("INSERT INTO about (image,title,sub_heading,birth_date,age,website_url,degree,phone_no,email_id,city,freelance,description) VALUES
('$fileName','$title','$sub_heading','$birth_date','$age','$website_url','$degree','$phone_no','$email_id','$city','$freelance','$description')");
}

<?php
