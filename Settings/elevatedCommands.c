#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	if (strcmp(argv[1], "reboot")) {
		setuid(0); // for uid to be 0, root
		char *command = "/sbin/reboot";
		execl(command, command, NULL);
		return 0; // just to avoid the warning (since never returns)
	}
}