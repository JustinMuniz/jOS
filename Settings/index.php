<?php
	// Check if there is a rotation lock enabled
		// If not, rotate the screen to portrait mode
		exec("../Common/rotateScreen.sh left");
?>

<!DOCTYPE html>
<html>
	<head>
		<title>Settings</title>
		<link rel = "stylesheet" type = "text/css" href = "../Common/style.css" />
	</head>
	<body>
		<h1>
			Settings
		</h1>
		<a class = "ButtonAnchor" href = "jOSUpdate.php">
			Update jOS System
		</a>
		<a class = "ButtonAnchor" href = "softwareUpdate.php">
			Update Software
		</a>
		<a class = "ButtonAnchor" href = "shutdown.php">
			Shutdown
		</a>
		<a class = "ButtonAnchor" href = "restart.php">
			Restart
		</a>
		<a class = "ButtonAnchor" href = "../Home/index.php">
			Home
		</a>
	</body>
</html>