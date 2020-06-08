/* Program for exercise 5.27 */
/* Function to check if the number is simple */

#include <stdio.h>
#include <math.h>

int isSimpleSqrt (int); // Prototype
int isSimpleHalf (int);

main () 
{
	int max , method;
	
	printf ("%s\n" , "Enter maximum value");
	scanf ("%d" , &max);
	
	printf ("%s\n" , "Which method you chose to count prime numbers? Enter 1 for sqrt(n) or 2 for n/2");
	scanf ("%d" , &method);
	
	if (method == 1 || method == 2) { // if method 1 or 2

    printf ("\n%s\n" ,"The prime numbers are: ");
    
    if (max >= 2)
       printf ("%d\n" , 2);
    else
       printf ("%s\n" , "None");
    if (method == 1)
	for (int j = 1; j <= max; j +=2)
	{
		if (isSimpleSqrt(j) == 1)
		   printf ("%d\n" , j);
	} // end of for
	
	 if (method == 2)
	for (int j = 1; j <= max; j +=2)
	{
		if (isSimpleHalf(j) == 1)
		   printf ("%d\n" ,  j);
	} // end of for
	
	}  else // end of if method 1 or 2
	   printf ("%s\n" , "Incorrect input");
	   
   return 0;
   
} // End of main

int isSimpleSqrt(int val)
{
	int s = 0;
	
	if (val == 1)
       return 0;
    else  { //main else
    
	 // for (int i = 1; i <= val/2; ++i)
//	for (int i = 1; i < val; ++i)
    
	for (int i = 1; i <= sqrt(val); ++i)
	{
		if (val % i == 0)
		   s += 1;
	} // end of for
	if (s == 1)
	   return 1;
	else
	   return 0;
	   
    } // end of main else
	
} // End of isSimpleSqrt

int isSimpleHalf(int val)
{
	int s = 0;
	
	if (val == 1)
       return 0;
    else  { //main else
    
	for (int i = 1; i <= val/2; ++i)
//	for (int i = 1; i < val; ++i)
    
	// for (int i = 1; i <= sqrt(val); ++i)
	{
		if (val % i == 0)
		   s += 1;
	} // end of for
	if (s == 1)
	   return 1;
	else
	   return 0;
	   
    } // end of main else
	
} // End of isSimpleHalf
