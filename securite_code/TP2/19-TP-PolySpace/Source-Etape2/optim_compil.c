/* Détecte l'erreur si pas optimisation
   gcc optim-compil-Secu.c -O2
   ne détecte pas l'erreur
   gcc optim-compil-Secu.c -O2 -fno-strict-overflow
   détecte l'erreur
*/

#include <stdio.h>
#include <limits.h>

int g(int a, int b)
{ 
   if ((a > INT_MAX - b) || (b > INT_MAX - a)){
	{printf("erreur de débordement \n");
	 return (-1) ;
	}
   }
   else {
       if (a < 0 || b <=0) 
	 {printf("arguments pas bons \n");
	 return (-1) ;
	 }
	 printf("a+b : %i \n", a+b);
       if (a+b < 0) 
	 {printf("erreur de débordement \n");
	 return (-1) ;
	 }
	 printf("pas d'erreur détectée \n");
	return(a+b) ;
   }
};

//
void main ()
// UINT_MAX = 2^32 - 1  pour une taille de 4
// c-a-d 4294967295

{       int r;

        printf(" Premier appel OK : 4 + 8 \n");
        r=g(4, 8);

        printf(" Second appel KO : 2 + INT_MAX \n");
        r=g(2, INT_MAX);
}

