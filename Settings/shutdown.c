#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	setuid(0); // for uid to be 0, root
	char *command = "/sbin/shutdown";
	char *argument1 = "-h";
	char *argument2 = "now";
	execl(command, command, argument1, argument2, NULL);
	return 0; // just to avoid the warning (since never returns)
}