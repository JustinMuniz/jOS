#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	setuid(0); // for uid to be 0, root
	char *command = "/usr/bin/git -C /var/www/html pull";
	execl(command, command, NULL);
	return 0; // just to avoid the warning (since never returns)
}