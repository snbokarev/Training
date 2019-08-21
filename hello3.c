#include <stdio.h>

int main() {
   int int1,int2;
   printf ( "Hi\nDavai vvodi 2 chisla\n");
   scanf ( "%d%d", &int1, &int2);
   
   if (int1 > int2) {
      printf ("This is the biggest %d\n", int1);	
   }
   
   if (int1 < int2) {
   	printf ( "This is the biggest %d\n", int2);
   }

   if (int1==int2) {
   	printf ("These numbers are equal");
   }
   
   return 0;

} /* End of main*/