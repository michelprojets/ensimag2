#include "any.h"

/*@ requires \valid(t+(0..size-1));
  @ requires size >= 0; // précondition ou bien prog def
  @ assigns \nothing;
  @ ensures
  @   (0 <= \result < size && t[\result] == v) ||
  @   (\result == -1 && \forall int k; 0 <= k < size ==> t[k] != v);
  @*/
int linear_search(int v, int* t, int size) {
  int i = size-1;
L:
  // TODO: fix implementation and provide loop annotations.
  /*@ loop invariant i <= \at(i,L);
    @ loop invariant i >= -1;
    @ loop invariant \forall int j; i < j < size ==> t[j] != v; // pas i <= j car après le i--, on ne sait pas encore si v a été trouvé ou pas
    @ loop assigns i;
    @ loop variant i; */
  while (i >= 0 && t[i] != v) i--;
  return i;
}


int main() {
  int t[] = { 10, 30, 20, 50, 7 };
  int v=any();
  int k=linear_search(v,t,5);
  /*@ assert (k != -1 ==> t[k] == v); */
  return k;
}
