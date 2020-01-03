<!DOCTYPE html>
<html>
	<head>
		<title>Software Update</title>
		<link rel = "stylesheet" type = "text/css" href = "../Common/style.css" />
	</head>
	<body>
		<h1>
			Software Update
		</h1>
		<h2>
			Output
		</h2>
<?php
	echo "<pre>";
	system("./update");
	system("./upgrade");
	system("./autoremove");
	system("./clean");
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
