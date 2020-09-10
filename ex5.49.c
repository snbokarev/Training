/* Program for exercise 5.49 */
/* It needs to evaluate math functions */

#include <stdio.h>
#include <math.h>

main()
{
	float val, val2;
	
	printf("%s\n", "Enter the value:");
	scanf("%f", &val);
	
	printf("%s\n", "Enter the another value. It will be used for Float % and for Power:");
	scanf("%f", &val2);
	
	printf("Square root:\t%.2f\n", sqrt(val));
	printf("Exponent:\t%.2f\n", exp(val));
	printf("Natural log:\t%.2f\n", log(val));
	printf("Decimal log:\t%.2f\n", log10(val));
	printf("Absolute:\t%.2f\n", fabs(val));
	printf("Round down:\t%.2f\n", floor(val));
	printf("Round up:\t%.2f\n", ceil(val));
	printf("Float %%:\t%.2f\n", fmod(val, val2));
	printf("Power:\t\t%.2f\n", pow(val, val2));
	printf("Sinus:\t\t%.2f\n", sin(val));
	printf("Cosinus:\t%.2f\n", cos(val));
	printf("Tangens:\t%.2f\n", tan(val));
	
	return 0;
	
} // End of main
