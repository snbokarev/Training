/* Program for exercise 5.17 */
/* It needs to check if second value can be divided by first one without remainder */

#include <stdio.h>

int multiple (int , int); //Prototype

main()
{
	int val1 , val2;
	printf ("%s\n" , "Enter pair of values, -1 to exit");
	scanf("%d%d" , &val1 , &val2);
	
	if (val1 == -1|| val2 == -1)
	   printf ( "%s\n" , "Exiting");
	while (val1>=0 && val2>=0)
	{
   	printf ("The first value is: %d\n" , val1);
	   printf ("The second value is: %d\n" , val2);
	
   	printf ("%d is multiple to %d: %d\n\n" , val2, val1 , multiple (val1 , val2));
   	
   	printf ("%s\n" , "Enter pair of values, -1 to exit");
   	scanf("%d%d" , &val1 , &val2);
	
	   if (val1 == -1|| val2 == -1)
	      printf ( "%s\n" , "Exiting");
 	} // End of while
	
} // End of main


int multiple (int x , int y)
{
	if (y%x == 0)
	   return 1;
	else
	   return 0;
} // End of definition