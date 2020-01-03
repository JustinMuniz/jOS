<?php
	// Check if there is a rotation lock enabled
	// If not, rotate the screen to portrait mode
	exec("../Common/rotateScreen.sh left");
?>

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
		<a class = "ButtonAnchor" href = "index.php">
			Settings
		</a>
		<a class = "ButtonAnchor" href = "../Home/index.php">
			Home
		</a>
		<p>
<?php
	echo "<pre>";
	system("./josupdate");
	system("./makefiles");
	echo "</pre>";
?>
		</p>
	</body>
</html>
