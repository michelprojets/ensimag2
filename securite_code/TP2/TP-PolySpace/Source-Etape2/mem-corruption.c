#include <string.h>
#include <stdio.h>
void main()
{
	char t;
	char t1[8];
	char t2[16];
	int i;
	t = 0;
	for (i = 0; i < 16; i++)
		t2[i] = 2;
	t2[15] = '\0';
	strcpy(t1, t2);
	printf("La valeur de t a change %d \n", t);
	printf("i n'a pas change %d\n", i);
}
