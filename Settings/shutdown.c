#include <stdlib.h>
#include <sys/types.h>

int main() {
	char *command = "/sbin/shutdown -h now";
	execl(command, command, NULL);
	return 0; // just to avoid the warning (since never returns)
}