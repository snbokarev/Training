/* Program for 4.28 */

/* It needs to enter data for employees and calculate their salary. */

#include <stdio.h>

int main () {
	int code = 0 , week, hour , item , count1 = 0, count2 = 0 , count3 = 0 , count4 = 0;
	float sal_week , sal_hour ,  sal_item , sales , sum1=0 , sum2 = 0 , sum2_int = 0 , sum3 = 0 , sum4 = 0 , out;
	
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
   	          
   	       case 3: 
   	          printf ("%s\n" , "How many weeks the employee worked?");
   	          scanf ("%d" , &week);
   	          printf ("%s\n" , "Enter sales value:");
   	          scanf ("%f" , &sales);
	             out = (float) 250*week + sales*0.057;
	              printf ("The employee's salary is %.2f\n\n" , out);
	             sum3+=out;
	             ++count3;
	             break; // End of case 3
	             
	          case 4:
	             printf ("%s\n" , "How many items the employee has produced?");
	             scanf ("%d" , &item);
	             printf ("%s\n" , "Enter salary per item");
	             scanf ("%f" , &sal_item);
	             out = (float)item*sal_item;
	             printf ("The employee's salary is %.2f\n\n" , out);
	             sum4+=out;
	             ++count4;
	             break; // End of case 4
	             
	          default:
	             printf ("%s\n\n" , "Wrong input, the code has to be in 1 - 4 range, try again");
	             break; // End of default       	     	       
	       	
	       } // End of switch    	
       } //End of while
    
    if (count1 >= 1) {
    	printf ( "Total salary of %d employee(s) with code 1 is: %.2f\n" , count1 , sum1);	
    }
    if (count2 >= 1) {
    	printf ( "Total salary of %d employee(s) with code 2 is: %.2f\n" , count2 , sum2);	
    }
    if (count3 >= 1) {
    	printf ( "Total salary of %d employee(s) with code 3 is: %.2f\n" , count3, sum3);	
    }
    if (count4 >= 1) {
    	printf ( "Total salary of %d employee(s) with code 3 is: %.2f\n" , count4, sum4);	
    }
    printf ( "\nTotal employees processed: %d\n" ,  count1 + count2 + count3 + count4);
    printf ("Total salary: %.2f\n" , sum1 + sum2 + sum3 + sum4);
    
    
    return 0;
	
} //End of main