all: autoremove clean distupgrade josupdate makefiles reboot shutdown update upgrade

autoremove:
	gcc -Wall /var/www/html/Settings/autoremove.c -o /var/www/html/Settings/autoremove
	chown root:www-data /var/www/html/Settings/autoremove
	chmod 4750 /var/www/html/Settings/autoremove

clean:
	gcc -Wall /var/www/html/Settings/clean.c -o /var/www/html/Settings/clean
	chown root:www-data /var/www/html/Settings/clean
	chmod 4750 /var/www/html/Settings/clean

distupgrade:
	gcc -Wall /var/www/html/Settings/distupgrade.c -o /var/www/html/Settings/distupgrade
	chown root:www-data /var/www/html/Settings/distupgrade
	chmod 4750 /var/www/html/Settings/distupgrade

josupdate:
	gcc -Wall /var/www/html/Settings/josupdate.c -o /var/www/html/Settings/josupdate
	chown root:www-data /var/www/html/Settings/josupdate
	chmod 4750 /var/www/html/Settings/josupdate

makefiles:
	gcc -Wall /var/www/html/Settings/makefiles.c -o /var/www/html/Settings/makefiles
	chown root:www-data /var/www/html/Settings/makefiles
	chmod 4750 /var/www/html/Settings/makefiles

reboot:
	gcc -Wall /var/www/html/Settings/reboot.c -o /var/www/html/Settings/reboot
	chown root:www-data /var/www/html/Settings/reboot
	chmod 4750 /var/www/html/Settings/reboot

shutdown:
	gcc -Wall /var/www/html/Settings/shutdown.c -o /var/www/html/Settings/shutdown
	chown root:www-data /var/www/html/Settings/shutdown
	chmod 4750 /var/www/html/Settings/shutdown

update:
	gcc -Wall /var/www/html/Settings/update.c -o /var/www/html/Settings/update
	chown root:www-data /var/www/html/Settings/update
	chmod 4750 /var/www/html/Settings/update

upgrade:
	gcc -Wall /var/www/html/Settings/upgrade.c -o /var/www/html/Settings/upgrade
	chown root:www-data /var/www/html/Settings/upgrade
	chmod 4750 /var/www/html/Settings/upgrade