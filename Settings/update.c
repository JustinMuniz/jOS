#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	setuid(0); // for uid to be 0, root
	char *command = "/usr/bin/apt-get";
	char *argument1 = "update";
	execl(command, command, argument1, NULL);
	return 0; // just to avoid the warning (since never returns)
}