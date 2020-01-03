#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>

int main() {
	puts("test");
	setuid(0); // for uid to be 0, root
	FILE *shellOutput;
	char outputCharacter;
	shellOutput = popen("/usr/bin/git -C /var/www/html pull", "r");
	if (shellOutput == NULL) {
		puts("ERROR, unable to open process");
	}
	else {
		while ( (outputCharacter = fgetc(shellOutput)) != EOF ) {
			putchar(outputCharacter);
		}
	}
	//char *command = "/usr/bin/git";
	//char *argument1 = "-C";
	//char *argument2 = "/var/www/html";
	//char *argument3 = "pull";
	//execl(command, command, argument1, argument2, argument3, NULL);
	pclose(shellOutput);
	return 0; // just to avoid the warning (since never returns)
}
