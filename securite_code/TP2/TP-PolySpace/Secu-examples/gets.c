/* Pour rentrer ligne vide contrôle D */

#include <stdio.h>
#include <stdlib.h>
int IsPasswordOK(void)
{
	char Password[12];
	gets(Password);
	return 0 == strcmp(Password, "goodpass");
}

int main(void)
{
	int status1, status2;
	puts("Enter password x 2");
	status1 = IsPasswordOK();
	status2 = IsPasswordOK();
	if (status1 == 0)
		puts("Access denied");
	else
		puts("OK");
	if (status2 == 0)
		puts("Access denied");
	else
		puts("OK");
}
