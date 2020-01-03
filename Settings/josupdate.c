#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	setuid(0); // for uid to be 0, root
	char *command = "/usr/bin/git";
	char *argument1 = "-C";
	char *argument2 = "/var/www/html";
	char *argument3 = "pull";
	execl(command, command, argument1, argument2, argument3, NULL);
	return 0; // just to avoid the warning (since never returns)
}