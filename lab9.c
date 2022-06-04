#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main (){
	char str[100], y[10][30];
	int i = 0, j = 0, k = 0, len1 = 0, len2 = 0, l = 0;
 
	printf ("Enter text: \n");
	gets (str);

	for (i = 0; str[i] != '\0'; i++){
		if (str[i] == ' '){
			y[k][j] = '\0';
			k ++;
			j = 0;
		} else {
			y[k][j] = str[i];
			j ++;
		}
	}
 
	y[k][j] = '\0';
 
	j = 0;
	for (i = 0; i < k; i++){
		int present = 0;
		for (l = 1; l < k + 1; l++){
			if (y[l][j] == '\0' || l == i){
				continue;
			}
 
			if (strcmp (y[i], y[l]) == 0){
				y[l][j] = '\0';
				present = present + 1;
			}
		}
		
		
		// Полное удаление найденного слова. Закомментировать, если необходимо оставить первое нахождение.
		if (present > 0){ 
		 	y[i][j] = '\0';
		}
	}
 
	j = 0;
 
	for (i = 0; i < k + 1; i++){
		if (y[i][j] == '\0'){
			continue;
		} else {
			printf ("%s ", y[i]);
		}
	}
 
	printf ("\n");
	return 0;
}
