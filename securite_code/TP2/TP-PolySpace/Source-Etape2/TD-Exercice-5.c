#include <stdio.h>
#define BUFSIZ 12

void complain(const char *msg)
{
	static const char prefix[] = "Error: ";
	static const char suffix[] = "\n";
	char buf[BUFSIZ];
	strcpy(buf, prefix);
	strcat(buf, msg);
	strcat(buf, suffix);
	fputs(buf, stderr);
}
