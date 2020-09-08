/* Program for exercise 5.45 */
/* It needs to calculate the distance between two points with coordinates x1, y1 and x2, y2. */

#include <stdio.h>
#include <math.h>

float distance(float, float, float, float); //Prototype

main()
{
	float coord_x1, coord_x2, coord_y1, coord_y2;
	
	printf("%s\n", "Enter the coordinates of the first point");
	scanf("%f%f", &coord_x1, &coord_y1);
	
	printf("%s\n", "Enter the coordinates of the second point");
	scanf("%f%f", &coord_x2, &coord_y2);
	
	printf("The distance between them is: %.2f\n", distance(coord_x1, coord_y1, coord_x2, coord_y2));
	
	
} // End of main

float distance(float x1, float y1, float x2, float y2)
{
	float dist;
	dist = pow(pow(fabs(x1 - x2), 2) + pow(fabs(y1 - y2), 2), 0.5);
	return dist;
	
} // End of distance
