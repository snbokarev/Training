#include <stdio.h>

int main () {
	
	int num, num1;
	
	scanf ("%d", &num);
	
	printf ("%d", num/10000);
	num1 = num % 10000;
	
	printf (" %d", num1/1000);
	num = num1 % 1000;
	
	printf (" %d", num/100);
	num1 = num % 100;
	
	printf (" %d %d", num1/10, num1 % 10);
	

}