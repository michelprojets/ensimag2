#include <stdio.h>
#include <limits.h>
#include <malloc.h>

// 
void fonc(unsigned int nb, int *tab)
{
	int *dst;
	int i;
	printf("nb : %u \n", nb);
	dst = (int *)malloc(sizeof(unsigned int) * nb);
	printf("taille : %u \n", sizeof(unsigned int) * nb);
	if (!dst)
	{
		printf("Stop  \n");
		return;
	}

	// printf("adresse : %d \n", (int)(dst));
	for (i = 0; i < nb; i++)

	{
		dst[i] = tab[i];
	}
}

void main()
// UINT_MAX = 2E32 - 1 pour une taille de 4
// c-a-d 4294967295
{
	int *tab;

	// long unsigned int i, res;
	unsigned int nb;
	unsigned int deux30 = 1073741824;

	// printf(" UINT_MAX %u \n", UINT_MAX);
	printf(" taille de unsigned int %u \n", sizeof(unsigned int));
	printf(" Appel OK \n");
	tab = (int *)malloc(sizeof(unsigned int) * 2E8);
	fonc(4, tab);

	// res = 1 ;
	// for (i=0; i <33; i++) { printf(" pour %lu valeur %lu \n", i, res);
	// res=res*2 ;}
	printf(" Appel KO \n");
	fonc((unsigned int)deux30, tab);
}
