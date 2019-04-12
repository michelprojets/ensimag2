#include <stdio.h>
#include <string.h>
#define BUFSIZE 12

void complain(const char *msg)
{
	static const char prefix[] = "Error: ";
	static const char suffix[] = "\n";
	char buf[BUFSIZE];
	strcpy(buf, prefix);
	strcat(buf, msg);
	strcat(buf, suffix);
	fputs(buf, stderr);
}
