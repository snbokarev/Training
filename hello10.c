#include <stdio.h>

/* Even numbers detection */

int main () {
  
  int num;
  printf ("Enter your digit\n");
  scanf ("%d", &num);
  
  if ((num % 2) == 0) {
      printf ("%d is an even number\n", num);
   }

  if ((num % 2) != 0) {
      printf ("%d is an odd number\n", num);

  }


  return 0;




}