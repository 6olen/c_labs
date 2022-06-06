#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

int main()
{

int Elem;
srand(time(NULL));

printf("\nEnter the number of array elements: \n");
scanf("%d", &Elem);

int arr[Elem];
int arr2[100] = {};

for (int j = 0; j < Elem; j++) {
arr[j] = rand() % 1000 - 500;
}

for (int i = 0; i < Elem; i++) {
 printf("%d ", arr[i]);
}

// Каждый последующий элемент сложить
for (int i = 0; i < sizeof arr / sizeof arr[0]-1; i++) {
if (i <= sizeof arr / sizeof arr[0]) {
arr2[i] = arr[i] + arr[i+1];
}
}

// Найти минимальное значение
int i, k, j;
for (i = 0; i < Elem; i++)
for (j = i + 1; j < Elem; j++)
if (arr[i] < arr[j]) {
k = arr[i];
arr[i] = arr[j];
arr[j] = k;
}

// Найти максимальное значение
int value_arr = sizeof arr / sizeof arr2[0]-1;
int p, d, n;
for (p = 0; p < value_arr; p++)
for (n = p + 1; n < value_arr; n++)
if (arr2[p] < arr2[n]) {
d = arr2[p];
arr2[p] = arr2[n];
arr2[n] = d;
}

int Max = arr2[0];
int Min_1 = arr[Elem-1];
int Min_2 = arr[Elem-2];

int Sum1 = Max + Min_2;
int Sum2 = Max + Min_1;
printf("\n");

for (int i = 0; i < Elem; i++) {
 if (Min_1 == arr[i]) {
 arr[i] = Sum1;
 }
 if (Min_2 == arr[i]) {
 arr[i] = Sum2;
 }
 printf("%d ", arr[i]);
}

 

}
