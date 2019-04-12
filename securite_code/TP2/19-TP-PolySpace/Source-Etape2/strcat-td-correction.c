#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
#define BUFSIZE 12

void complain(const char *msg)
{
	//errno_t err;
	int err;
	static const char prefix[] = "Error: ";
	static const char suffix[] = "\n";
	char buf[BUFSIZE];

	err = strcpy_s(buf, sizeof(buf), prefix);
	if (err != 0)
	{

		/* Handle error */
	}
	err = strcat_s(buf, sizeof(buf), msg);
	if (err != 0)
	{

		/* Handle error */
	}
	err = strcat_s(buf, sizeof(buf), suffix);
	if (err != 0)
	{

		/* Handle error */
	}
	fputs(buf, stderr);
}
