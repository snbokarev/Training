/* Program for 4.26 */

/* Calculate pi */

#include <stdio.h>
#include <math.h>


int main() {
	double pi = 4;
	int k , div = 3 , a = 0, b = 0, c = 0, d = 0;
	double checka, checkb, checkc, checkd;
	
	printf ("%s\n" , "Enter calculation precision:");
	scanf ("%d" , &k);
	
	printf ("%6s%12s%24s\n" , "Member" , "Pi value" , "Member value");
	
	for (int i = 1 ; i <= k ; ++i) {
		if (i%2 != 0)
		   pi-=(double)4/div;
		else
		   pi+=(double)4/div;
		
   	checka = floor(pi*100)/100;
	   checkb = floor(pi*1000)/1000;
	   checkc = floor(pi*10000)/10000;
	   checkd = floor(pi*100000)/100000;
	   
		   
	   if (checka == 3.14 && a == 0) a = i;
	   if (checkb == 3.141 && b == 0) b = i;
	   if (checkc == 3.1415 && c == 0) c = i;
	   if (checkd == 3.14159 && d == 0) d = i;
		   
	   printf ("%6d%12.5f%24d\n" , i , pi , div);
		
	   div+=2;
		
	}
	
	printf ("\n3.14 met on %d member\n" , a);
	printf ("\n3.141 met on %d member\n" , b);
	printf ("\n3.1415 met on %d member\n" , c);
	printf ("\n3.14159 met on %d member\n" , d);
	
   return 0;
} // End of main