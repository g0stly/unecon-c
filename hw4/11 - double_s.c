#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char* double_s(char *s) {
    int n = strlen(s), i;
    char *a = malloc(n * 2 + 1);

    for (i = 0; i < n; i++) {
      a[i] = a[i + n] = s[i];
    }

    return a;
}


int main() {
  char s[10];

  system("clear");
  printf("enter the string (length <= 9):\n");
  scanf("%9s", s);
  printf("%s\n", double_s(s));


  return 0;
}
