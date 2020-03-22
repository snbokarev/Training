/* Program for 4.31 */

/* It needs to draw rhombus */

#include <stdio.h>

int k = 4 , l = 1;

int main () {
	for (int i = 1 ; i <= 9 ; ++i) {
		for (int j = 1 ; j <= k ; ++j) 
		   printf ("%s" , " ");
		for (int j = 1 ; j <= l ; ++j)
		   printf ("%s" , "*");
		for (int j = 1 ; j <= k ; ++j) 
		   printf ("%s" , " ");
		
		if (i < 5) {
		   k -= 1;
		   l += 2;	
  	  }  else {
  	     k += 1;
  	     l -= 2;	
  	  }
	
		printf ("%s\n" , "");
	} // End of for i
	
	return 0;
	
} // End of main