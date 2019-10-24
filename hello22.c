/* Program for exercise 3.18 */

/* It needs to obtain values of:
     account number
     start balance
     expenses
     credits
     balance treshold
     
     as outcome we have to get:
     account number
     balance treshold
     new balance
     info if balance treshold is exceeded */
     
int main () {
   int acc; // account number
   float sb; // start balance
   float ex; // expenses
   float cr; // credits
   float bt; // balance treshold
   float nb; // new balance
   
   puts ("Enter account number (-1 to quit)");
   scanf ("%d", &acc);
   
   if (acc>=0) {
      while (acc>=0) {
         
         puts ("Enter start balance");
         scanf ("%f", &sb); // read start balance
         puts ("Enter expenses");
         scanf ("%f", &ex);  // read expenses
         puts ("Enter credits");
         scanf ("%f", &cr); // read credits
         puts ("Enter treshold");
         scanf ("%f", &bt); // read treshold
         
         nb = sb + ex - cr ;
         
         printf ("\nAccount number: %d\n" , acc);
         printf ("Treshold is: %.2f\n" , bt);
         printf ("New balance is: %.2f\n" , nb);
         
         if (nb > bt) 
            puts ("Treshold is exceeded!");
         
         puts ("Enter account number (-1 to quit)");
         scanf ("%d", &acc);
         
         
      } // end while
      
   	
   } // end if
   else
   puts ("No values were entered");
   
	
	
	
	
} // End of main
     
     