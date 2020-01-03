elevatedCommands:
	gcc -Wall /var/www/html/Settings/elevatedCommands.c -o /var/www/html/Settings/elevatedCommands
	chown root:www-data /var/www/html/Settings/elevatedCommands
	chmod 4750 /var/www/html/Settings/elevatedCommands