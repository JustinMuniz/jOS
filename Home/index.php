<?php
	// Check if there is a rotation lock enabled
		// If not, rotate the screen to portrait mode
		exec("../Common/rotateScreen.sh left");
?>

<!DOCTYPE html>
<html>
	<head>
		<title>Home</title>
		<link rel = "stylesheet" type = "text/css" href = "../Common/style.css" />
	</head>
	<body>
		<h1>
			jPhone
		</h1>
		<a class = "ButtonAnchor" href = "../Phone/index.php">
			Phone
		</a>
		<a class = "ButtonAnchor" href = "../Text/index.php">
			Text
		</a>
		<a class = "ButtonAnchor" href = "../Phone/index.php">
			Web
		</a>
		<a class = "ButtonAnchor" href = "../Settings/index.php">
			Settings
		</a>
	</body>
</html>