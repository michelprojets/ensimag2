#include "any.h"

int main() {

  int x = any();
  int y = 0;
  int z = 1;

  if (x <= -5 || x >= 20) { x=20; }

L: /* exemple d'un label du C */

  // TODO 1: modify this loop annotations in order to ensure assertions below.
  // TODO 2: can you add a variant in order to ensure termination of the loop ?
  /*@ loop invariant \at(x,L) <= x; // x increases !
    @ loop invariant x <= 20; // pour assert (y<=48);
    @ loop invariant y == (x-\at(x,L))*2; // pour assert (y<=48);
    @ loop invariant z == \at(z,L); // pour assert (z==1);
    @ loop variant 19-x; */  // pour assurer la terminaison de la boucle
                             // (si x==20, on ne rentre meme pas dans la boucle)
                             // le corps de la boucle, le variant doit etre positif et décroissant à chaque itération
  while (x <= 19) {
    x++;
    y+=2;
  }

  /*@ assert (y<=48); */
  /*@ assert (z==1); */

  return y;
}
