#include  <stdio.h>
#include  <stdlib.h>
char buffer[128];
_Bool IsPasswordOK(void)
{
	char Password[12];
	fgets(buffer, sizeof buffer, stdin);
	if (buffer[strlen(buffer) - 1] == '\n')
		buffer[strlen(buffer) - 1] = 0;
	strcpy(Password, buffer);
	return 0 == strcmp(Password, "goodpass");
}

int main(void)
{
	int status1, status2;
	puts("Enter  password  x  2");
	status1 = IsPasswordOK();
	status2 = IsPasswordOK();
	if (status1 == 0)
		puts("Access  denied");
	else
		puts("OK");
	if (status2 == 0)
		puts("Access  denied");
	else
		puts("OK");
}
