#include <stdio.h>
#include <math.h>

int main() 
{
	double x;
	printf("Enter x: ");
	scanf("%lf", &x);
	if (-10.0 <= x && x <= 10.0) 
	{
		double y = -log(x+2) - log(x-2);
		double z = sqrt(3*y - pow(y, 3));
		printf("y(x) = %lf\nz(y) = %lf\n", y, z);
	}
	else
	{
		printf("Incorrect value!");
	}
	return 0;
}
