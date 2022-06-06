#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
int c1,c2,c3,t,min,max,mean,r;
double e;
scanf("%i%i%i", &c1, &c2, &c3);
if (c1 == c2 && c2 == c3 && c1 == c3) {
printf("Работа программы завершена! Введите разные значения!");
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

if (c3 == 3 && c3 != max) {
 min = 2;
 mean = 3;
} else {
 if (c2 != max) {
 min = 2;
 mean = 1;
 } else {
 min = 1;
 mean = 2;
 }
}

printf("max=%i\n", max);
if(max%3 == 0) {
printf("Разность наибольшего числа и суммы оставшихся параметров: %i\n", max-(min+mean));
} else {
printf("Частное наибольшего значения и суммы параметров: %lf\n", ((double)min+(double)mean)/(double)max);
}
}
