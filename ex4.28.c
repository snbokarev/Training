/* Program for 4.28 */

/* It needs to enter data for employees and calculate their salary. */

#include <stdio.h>

int main () {
	int code = 0 , week, hour , count1 = 0, count2 = 0 , count3 , count4;
	float sal_week , sal_hour ,  sum1=0 , sum2 = 0 , sum2_int, sum3 , sum4, out;
	
       while (code != -1) {
       	printf ("%s\n" , "Enter employee's code. To finish enter \"-1\"");
	       scanf ("%d" , &code);
	       switch (code) {
	       
	      	case -1:
	      	   printf ("%s\n\n" , "Input is finished");
	       	  break;
	       	   
	          case 1:
	             printf ("%s\n" , "How many weeks the employee worked?");
	             scanf ( "%d" , &week);
	             printf ( "%s\n" , "Enter salary rate per week.");
	             scanf ( "%f" , &sal_week);
	             out = (float)week*sal_week;
	             printf ("The employee's salary is %.2f\n\n" , out);
	             sum1+=out;
	             ++count1;
	             break; // End of case 1
	             
	          case 2:
	             printf ("%s\n" , "Enter salary per hour:");
	             scanf ("%f" , &sal_hour);
	             printf ("%s\n" , "How many weeks the employee worked?");
	             scanf ( "%d" , &week);
	             if (week > 1) {
	             	for (int i = 1; i <= week ; ++i) {
	                     printf ( "How many hours the employee worked per %d week?\n" , i);
	                     scanf ( "%d" , &hour);
	                     if (hour > 40) {
	                     	out = (float)40*sal_hour + (hour - 40)*1.5*sal_hour;
	                     }  else {
	                     	out = (float)hour*sal_hour;   	
	                     } //End of if/else
	                     sum2_int+=out;
	             	} // End of for
	             } else {
	               printf ( "%s\n" , "How many hours the employee worked per week?");
	               scanf ( "%d" , &hour);
	                  if (hour > 40) {
	                     out = (float)40*sal_hour + (hour-40)*1.5*sal_hour;
	                  } else {
	                  	out = (float)hour*sal_hour;   	
	                  } //End of if/else
	               sum2_int+=out;	        	
	             } // End of if else
	             printf ("The employee's salary is %.2f\n\n" , sum2_int);
	             sum2+=sum2_int;
	             ++count2;
	             sum2_int = 0;
   	          break; // End of case 2
	          
	          	
	       
	       
	       	
	       } // End of switch    	
       } //End of while
    
    if (count1 >= 1) {
    	printf ( "Total salary of %d employee(s) with code 1 is: %.2f\n" , count1 , sum1);	
    }
    if (count2 >= 1) {
    	printf ( "Total salary of %d employee(s) with code 2 is: %.2f\n" , count2 , sum2);	
    }
  
    
    return 0;
	
} //End of main