/* Program for exercise 3.46 */

/* It needs to obtain 4bit values. For each digit: add 7 and modulo 10. Then exchange: 1 to 3 and 2 to 4. */

#include <stdio.h>

int main () {
	
	int val , code , bit1 , bit2 , bit3 , bit4;
	int enc1, enc2, enc3, enc4, k1, k2, k3, k4;
	int i = 1 , bitness = 0;
	printf ("Enter 4 bit value\n");
	scanf ("%d", &val);
	
	i = val;
	
	while (i>0) { // While 0
	   i /= 10;
	   bitness += 1;	
	} // End of While 0
	
	while ( bitness != 4) { // While 1
		printf ("%d is %d bit value. Enter 4 bit value\n" , val, bitness);
		scanf ("%d", &val);
		
		i = val;
		bitness = 0;
		
		while (i>0) { // While 2
	       i /= 10;
    	   bitness += 1;	
    	} // End of While 2
		
		
	} // End of While 1
	
	bit1 = val/1000;
    bit2 = val%1000/100;
    bit3 = val%1000%100/10;
    bit4 = val%1000%100%10;
    	
    printf ("Digits of the value are: %d, %d, %d, %d\n" , bit1, bit2, bit3, bit4); 
    
    enc1 = (bit1 + 7)%10;
    enc2 = (bit2 + 7)%10;
    enc3 = (bit3 + 7)%10;
    enc4 = (bit4 + 7)%10;
    
    printf ("Encoded digits are: %d, %d, %d, %d\n" , enc1, enc2, enc3, enc4);
    printf ("Encoded string is: %d%d%d%d\n" , enc3, enc4, enc1, enc2);
    
    k1 = enc3;
    k2 = enc4;
    k3 = enc1;
    k4 = enc2;
    
    
	
	
	
   return 0;	
} // End of main