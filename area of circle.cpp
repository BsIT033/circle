#include <stdio.h>
#include <math.h>
int main ()
{
	int r;
	float pi = 3.14,area;
	printf ("\nEnter the radius of the circle\n");
	scanf ("%d", &r);
	area = pi * r * r;
	printf("Area of the circle = %f",area);
	return 0;
}
