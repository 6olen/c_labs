#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void recursion(int n) {
  if(n > 0) {
    printf("%d", n%10);
    n/= 10;
    recursion(n);
  }
}

void cycle() {
  int i;
  char c[100], s[100];
  printf("\nEnter a non-negative value for the cycle: ");
  gets(c);
  for(i = 0; i < strlen(c); i++) {
    s[i] = c[strlen(c)-i-1];  
  }
  i = atoi(s);
  printf("%d - the result of the cycle\n", i);
}
 
int main() {
  int n;
  cycle();
  printf("\nEnter a non-negative value for recursion: ");
  scanf("%d", &n);
  recursion(n);
  printf(" - the result of the recursion\n\n");
}
