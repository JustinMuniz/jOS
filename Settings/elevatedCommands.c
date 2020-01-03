#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	setuid(0); // for uid to be 0, root
	if (strcmp(argv[1], "reboot")) {
		char *command = "/sbin/reboot";
		execl(command, command, NULL);
		return 0; // just to avoid the warning (since never returns)
	}
	if (strcmp(argv[1], "shutdown")) {
		char *command = "/sbin/shutdown -h now";
		execl(command, command, NULL);
		return 0; // just to avoid the warning (since never returns)
	}
	if (strcmp(argv[1], "josupdate")) {
		char *command = "git pull";
		execl(command, command, NULL);
		return 0; // just to avoid the warning (since never returns)
	}
	if (strcmp(argv[1], "aptupdate")) {
		char *command = "/usr/bin/apt-get update";
		execl(command, command, NULL);
		return 0; // just to avoid the warning (since never returns)
	}
	if (strcmp(argv[1], "softwareupdate")) {
		char *command = "/usr/bin/apt-get upgrade";
		execl(command, command, NULL);
		return 0; // just to avoid the warning (since never returns)
	}
	if (strcmp(argv[1], "distupdate")) {
		char *command = "/usr/bin/apt-get dist-upgrade";
		execl(command, command, NULL);
		return 0; // just to avoid the warning (since never returns)
	}
	if (strcmp(argv[1], "aptclean")) {
		char *command = "/usr/bin/apt-get clean";
		execl(command, command, NULL);
		return 0; // just to avoid the warning (since never returns)
	}
	if (strcmp(argv[1], "aptremove")) {
		char *command = "/usr/bin/apt-get autoremove --purge";
		execl(command, command, NULL);
		return 0; // just to avoid the warning (since never returns)
	}
	if (strcmp(argv[1], "make")) {
		char *command = "/usr/bin/make -f /var/www/html/makefile";
		execl(command, command, NULL);
		return 0; // just to avoid the warning (since never returns)
	}
	return 1;
}
