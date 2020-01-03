<?php
	exec("./elevatedCommands 4");
	exec("./elevatedCommands 5");
	exec("./elevatedCommands 8");
	exec("./elevatedCommands 7");
	// Check if there is a rotation lock enabled
	// If not, rotate the screen to portrait mode
	exec("../Common/rotateScreen.sh left");
?>

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
		<p>
			Software is up to date
		</p>
		<a class = "ButtonAnchor" href = "index.php">
			Settings
		</a>
		<a class = "ButtonAnchor" href = "../Home/index.php">
			Home
		</a>
	</body>
</html>
?>
