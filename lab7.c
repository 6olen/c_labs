#include "stdio.h"
#include <stdlib.h>
#include "time.h"
 
int main () {
    int mass[150][150];
    int f, i, j, m, n, tmp;
    srand(time(NULL));
 
    printf("Enter the number of lines: ");
	scanf("%d", &m);    // строки
    printf("Enter number of columns: ");
	scanf("%d", &n);    // столбцы
 
    printf("\nArray before conversion: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", mass[i][j] = 100 + rand() % 100);
            printf("\n");
    }
 
    for (j = 0; j < m - 1; j++) {  
        f = 0;
        for (i = 0; i < m - j; i++)
            if (mass[i][0] < mass[i+1][0]) {
                tmp = mass[i][0];
                mass[i][0] = mass[i+1][0];
                mass[i+1][0] = tmp;
                f = 1;
            }
        if (f < 1) break;
    }
 
    printf("\nArray after conversion: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
        printf("%d ", mass[i][j]);
        printf("\n");
    }
    return 0;
}
