#include <stdlib.h>
#include <sys/types.h>

int main() {
	char *command = "/usr/bin/apt-get dist-upgrade";
	execl(command, command, NULL);
	return 0; // just to avoid the warning (since never returns)
}