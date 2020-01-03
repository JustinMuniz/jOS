#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	setuid(0); // for uid to be 0, root
	int commandNumber = atoi (argv[1]);
	switch (commandNumber) {
		case 1:
			char *command = "/sbin/reboot";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		case 2:
			char *command = "/sbin/shutdown -h now";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		case 3:
			char *command = "git pull";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		case 4:
			char *command = "/usr/bin/apt-get update";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		case 5:
			char *command = "/usr/bin/apt-get upgrade";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		case 6:
			char *command = "/usr/bin/apt-get dist-upgrade";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		case 7:
			char *command = "/usr/bin/apt-get clean";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		case 8:
			char *command = "/usr/bin/apt-get autoremove --purge";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		case 9:
			char *command = "/usr/bin/make -f /var/www/html/makefile";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		default:
			return 1;
	}
}
