#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
int c1,c2,c3,t,min,max,mean,r;
double e;
printf("Enter c1: ");
scanf("%i", &c1);
printf("Enter c2: ");
scanf("%i", &c2);
printf("Enter c3: ");
scanf("%i", &c3);
if (c1 == c2 && c2 == c3 && c1 == c3)
{
printf("The program has ended! Enter different values!");
return EXIT_SUCCESS;
}

if(c1 < c2) {
max = c2;
} else {
max = c1;
}

if (c3 > max) {
max = c3;
}

if (c1 != max) {
c1 = 1;
}
if (c2 != max) {
c2 = 2;
}
if (c3 != max) {
c3 = 3;
}

if (c3 == 3 && c2 == 2) {
min = 2;
mean = 3;
} else {
if (c2 == max) {
min = 3;
mean = 1;
} else {
min = 1;
mean = 2;
}
}

printf("max=%i\n", max);
if(max%3 == 0) {
printf("The difference between the largest value and the sum of the numbers of the remaining values: %i\n", max-(min+mean));
} else {
printf("The quotient of the sum of the parameters and the largest value: %lf\n", ((double)min+(double)mean)/(double)max);
}
}
