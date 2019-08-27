#include <stdio.h>

/* The program checks multiplicity of two numbers*/
int main () {

 int num1, num2;

 printf ("Enter two numbers, we will check its multiplicity\n");
 scanf ("%d%d", &num1,&num2);

  if (num1 % num2 == 0) { printf ("Number %d is multiple of %d", num1, num2);}
  if (num1 % num2 != 0) { printf ("Number %d is not multiple of %d", num1, num2);}

 return 0;

    
}