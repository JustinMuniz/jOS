<!DOCTYPE html>
<html>
	<head>
		<title>jOS Update</title>
		<link rel = "stylesheet" type = "text/css" href = "../Common/style.css" />
	</head>
	<body>
		<h1>
			jOS Update
		</h1>
		<h2>
			Output
		</h2>
<?php
	echo "<pre>";
	system("./josupdate");
	system("./makefiles");
	echo "</pre>";
?>
		<a class = "ButtonAnchor" href = "index.php">
			Settings
		</a>
		<a class = "ButtonAnchor" href = "../Home/index.php">
			Home
		</a>
	</body>
</html>
