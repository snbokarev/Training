/* Program for 4.19*/

/* It needs to read 5 pairs - detail number and quantity of sailed. Then it needs to calculate sum of total sales*/

#include <stdio.h>

int main () {
	int num = 0 , q, i = 0;
	float sum=0.00;
	printf ("%s\n" , "Enter pairs: detail number and quantity. To quit enter -1 as detail number");
	while (num >= 0) { // Main while
	   scanf ("%d" , &num);
	   if (num != -1)
	      scanf ("%d" , &q);
	   
	   if (num != -1) { 
   	   while (num < 1 || num> 5) { // Checking while
	         printf ("%d is out of scope, enter pair again\n" , num);	
   	      scanf ("%d" , &num);
	         scanf ("%d" , &q);
   	   } // End of checking while
	   
	      switch (num) {
	      	case 1:
	      	   sum += q*2.52;
	         	break;
	      	
   	       case 2:
	             sum += q*2.54;
   	      	break;
	      	
   	      case 3:
	             sum += q*2.55;
   	      	break;
	      	
   	      case 4:
	             sum += q*2.57;
	         	break;
	      	
	         case 5:
   	          sum += q*2.58;
	         	break;
	      	
	         default:
	             printf ("%s\n" , "Wrong input, try again");
	             break;
	   	
	   	
	      } // End of switch
       } // End of if	      
		
	} // End of Main while
	
	printf ("Total sum is: %.2f\n" , sum);
	
	
   return 0;	
	
} // End of main