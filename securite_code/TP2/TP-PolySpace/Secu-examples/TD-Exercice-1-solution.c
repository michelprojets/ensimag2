#include <stdio.h>
typedef struct
{
	void (*f) (void);
} st;
void nothing()
{
	printf("Nothing\n");
} int main(int argc, char *argv[])
{
	st *p1;
	char *p2;
	p1 = (st *) malloc(sizeof(st));
	p1->f = &nothing;
	free(p1);
	p1 = (void *)0;
	p2 = malloc(strlen(argv[1]));
	strcpy(p2, argv[1]);
	p1->f();
	return 0;
}
