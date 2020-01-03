#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	setuid(0); // for uid to be 0, root
	if(argc > 0) {
		char commandArgument [64];
		strcpy(commandArgument, argv[1]);
		if (strcmp(commandArgument, "reboot") == 0) {
			char *command = "/sbin/reboot";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		}
		//printf("%i", atoi(argv[1]));
		/*if (atoi(argv[1]) == 1) {
			char *command = "/sbin/reboot";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		}*/
		//if (commandArgument == 2) {
		//	char *command = "/sbin/shutdown -h now";
		//	execl(command, command, NULL);
		//	return 0; // just to avoid the warning (since never returns)
		//}
		/*
		if (atoi(argv[1]) == 3) {
			char *command = "/usr/bin/git -C /var/www/html pull";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		}
		if (atoi(argv[1]) == 4) {
			char *command = "/usr/bin/apt-get update";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		}
		if (atoi(argv[1]) == 5) {
			char *command = "/usr/bin/apt-get upgrade";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		}
		if (atoi(argv[1]) == 6) {
			char *command = "/usr/bin/apt-get dist-upgrade";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		}
		if (atoi(argv[1]) == 7) {
			char *command = "/usr/bin/apt-get clean";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		}
		if (atoi(argv[1]) == 8) {
			char *command = "/usr/bin/apt-get autoremove --purge";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		}
		if (atoi(argv[1]) == 9) {
			char *command = "/usr/bin/make -f /var/www/html/makefile";
			execl(command, command, NULL);
			return 0; // just to avoid the warning (since never returns)
		}
		return 1;*/
	}
}
