#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	setuid(0); // for uid to be 0, root
	char *command = "/usr/bin/make";
	char *argument1 = "-f";
	char *argument2 = "/var/www/html/makefile";
	execl(command, command, argument1, argument2, NULL);
	return 0; // just to avoid the warning (since never returns)
}