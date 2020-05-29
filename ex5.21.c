/* Program for exercise 5.21 */
/* It needs to create functions which draws figures using entered symbol */

#include <stdio.h>

void quad (char , int); // Prototype
void quadBorder (char , int); 
void quadBorder2 (char , int);
void quadBorder3 (char , int);
void rhomb (char , int);
void rhombBorder (char , int);

main() 
{
	int side;
	char symbol;
	
	printf ("%s\n" , "Enter the symbol to fill");
	scanf ("%c" , &symbol);
	printf ("%s\n" , "Enter the figure size");
	scanf ("%d" , &side);
	
	printf ("%s\n" , "The quadrate is:");
	quad(symbol , side);
	puts(" ");
	
	printf ("%s\n" , "The quadrate border is:");
	quadBorder(symbol , side);
	puts(" ");
	
	printf ("%s\n" , "The quadrate border 2 is:");
	quadBorder2(symbol , side);
	puts(" ");
	
	printf ("%s\n" , "The quadrate border 3 is:");
	quadBorder3(symbol , side);
	puts(" ");
	
	printf ("%s\n" , "The rhomb is:");
	rhomb(symbol , side);
	puts(" ");
	
	printf ("%s\n" , "The rhomb border is:");
	rhombBorder(symbol , side);
	puts(" ");
	
	
	
	return 0;
} // End of main

void quad (char fillChar , int size)
{
	for (int i = 1; i <= size; ++i)
	{
	   for (int j = 1; j <= size; ++j)
	   {
		   printf ("%c" , fillChar);
    	} // end of  for j
        printf ("%s\n" , "");
	} // end of for i
} // End of definition for quad

void quadBorder (char fillChar , int size)
{
	for (int i = 1; i <= size; ++i)
	   for (int j = 1; j <= size; ++j)
	      {
	      	if (i == 1 || i == size)
	      	{
	      		if (j == size)
		             printf ("%c\n" , fillChar);
		          else
		             printf ("%c" , fillChar);
	      	} // end of if i=1 or i=x
	      	if (i > 1 && i < size)
	      	{
	      		if (j == size)
		             printf ("%c\n" , fillChar);
	      		else
	      		   if (j == 1)
	      		      printf ("%c" , fillChar);
	      		   else
	      		      printf ("%s" , " ");
	      	} // end of if 1<i<x		      
       	} // end of  for
} // End of definition quadBorder

void quadBorder2 (char fillChar , int size)
{
	for (int i = 1; i <= size; ++i)
	{
	   for (int j = 1; j <= size; ++j)
	   {	     
	       if (i == 1 || i == size) 
	          printf ("%c" , fillChar);
	       else
	          if (j == 1 || j == size)
	             printf ("%c" , fillChar);
	          else
	             printf ("%s" , " ");
       } // end of  for j
       printf ("%s\n" , "");
	} // end of  for i
} // End of definition quadBorder2

void quadBorder3 (char fillChar , int size)
{
	for (int i = 1; i <= size; ++i)
	{
	   printf ("%c" , fillChar);
	   for (int j = 1; j <= (size - 2); ++j)
	      if (i == 1 || i == size)
	         printf ("%c" , fillChar);
	      else
	         printf ("%s" , " ");
	   printf ("%c" , fillChar);
       printf ("%s\n" , "");
	} // end of  for i
} // End of definition quadBorder3

void rhomb (char fillChar , int size)
{
	int k , l = 1;
	k = (size - 1)/2;
	
	for (int i = 1 ; i <= size ; ++i) {
		for (int j = 1 ; j <= k ; ++j) 
		   printf ("%s" , " ");
		for (int j = 1 ; j <= l ; ++j)
		   printf ("%c" , fillChar);
		for (int j = 1 ; j <= k ; ++j) 
		   printf ("%s" , " ");
		
		if (i <= (size - 1)/2 ){
		   k -= 1;
		   l += 2;	
  	  }  else {
  	     k += 1;
  	     l -= 2;	
  	  }
  	  printf ("%s\n" , "");
	} // End of for
	
} // End of definition rhomb

void rhombBorder (char fillChar , int size)
{
	int k , l = 1;
	k = (size - 1)/2;
	
	for (int i = 1 ; i <= size ; ++i) {
		for (int j = 1 ; j <= k ; ++j) 
		   printf ("%s" , " ");
		for (int j = 1 ; j <= l ; ++j) {
		   if (j == 1 || j == l)
		      printf ("%c" , fillChar);
		   else
		      printf ("%s" , " ");
		}
		for (int j = 1 ; j <= k ; ++j) 
		   printf ("%s" , " ");
		
		if (i <= (size - 1)/2 ){
		   k -= 1;
		   l += 2;	
  	  }  else {
  	     k += 1;
  	     l -= 2;	
  	  }
  	  printf ("%s\n" , "");
	} // End of for
	
} // End of definition rhombBorder
