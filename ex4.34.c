/* Program for 4.34 */

/* It needs to output decimal, binary, oct and hex */

#include <stdio.h>

int main () {
	
   int razr_bin = 0, razr_oct = 0 , val , val_bin , bin , count_bin = 1 , val_oct , oct , count_oct = 1 , val_hex , hex , count_hex = 1;
	
   printf ("%4s%8s%8s%11s\n" , "Decimal" , "Binary" , "Oct" , "Hex");
	
  for (val = 1 ; val <= 256 ; ++val) {
	
	while (count_bin < val) {
       count_bin *= 2;
	} // End of while
	if (count_bin > val) {
		count_bin /= 2;
	} // End of if
	
	while (count_oct < val) {
       count_oct *= 8;
	} // End of while
	if (count_oct > val) {
		count_oct /= 8;
	} // End of if
	
	while (count_hex < val) {
       count_hex *= 16;
	} // End of while
	if (count_hex > val) {
		count_hex /= 16;
	} // End of if
	
	printf ("%-*d" , 9, val);
	
	/* Binary block */
	printf ("%s" , "");
    val_bin = val;
    do {
    	bin = val_bin / count_bin;
    	printf ("%d" , bin);
    	val_bin %= count_bin;
    	count_bin /= 2;
    	++razr_bin;	
    } while (count_bin > 0);
   // puts ("");
   
    /* Oct block */
    val_oct = val;
    printf ("%-*s" , 11 - razr_bin, " "); 
    do {
    	oct = val_oct / count_oct;
    	printf ("%d" , oct);
    	val_oct %= count_oct;
    	count_oct /= 8;	
    	++razr_oct;
    } while (count_oct > 0);
   // puts ("");
    
    /* Hex block */
    val_hex = val;
    printf ("%-*s" , 11 - razr_oct , " ");
    do {
    	hex = val_hex / count_hex;
    	
    	switch (hex) {
    		
    	case 10:
    	printf ("%s" , "A");
    	break;
    	
    	case 11:
    	printf ("%s" , "B");
    	break;
    	
    	case 12:
    	printf ("%s" , "C");
    	break;
    	
    	case 13:
    	printf ("%s" , "D");
    	break;
    	
    	case 14:
    	printf ("%s" , "E");
    	break;
    	
    	case 15:
    	printf ("%s" , "F");
    	break;
    	
    	default:
    	printf ("%d" , hex);
    	
    	} // End of switch
    	
    	val_hex %= count_hex;
    	count_hex /= 16;	
    } while (count_hex > 0);
    
    printf ("%s\n" , "");
   
    razr_bin = 0;
    razr_oct = 0;
    count_bin = 1;
    count_oct = 1;
    count_hex = 1; 

  } // End of big for	
	
	
	return 0;
} // End of main