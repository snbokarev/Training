/* Program for 4.31 */

/* It needs to draw rhombus */

#include <stdio.h>



int main () {
	int k , l = 1 , s;
	printf ("%s\n" , "Enter size of rhombus, it has to be odd number not greater than 19");
	scanf ("%d" , &s);
	while ( s < 1 || s > 19 || ( s%2 == 0)) {
		printf ("%s\n" , "Incorrect input, try again");
		scanf ("%d" , &s);		
	}
	
	k = (s - 1)/2;
	
	for (int i = 1 ; i <= s ; ++i) {
		for (int j = 1 ; j <= k ; ++j) 
		   printf ("%s" , " ");
		for (int j = 1 ; j <= l ; ++j)
		   printf ("%s" , "*");
		for (int j = 1 ; j <= k ; ++j) 
		   printf ("%s" , " ");
		
		if (i <= (s - 1)/2 ){
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