#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int substr(char *s, char c) {
    int n = strlen(s), i;

    for (i = 0; i < n; i++) {
      if (s[i] == c) return i;
    }

    return -1;
}


int main() {
  char s[10];
  char c;

  system("clear");
  printf("enter the string (length <= 9):\n");
  scanf("%9s", s);
  printf("enter the symbol:\n");
  scanf(" %c", &c);
  printf("%d\n", substr(s, c));


  return 0;
}
