#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char* concat(char *s1, char *s2) {
    int n1 = strlen(s1), n2 = strlen(s2), i;
    char *a = malloc(n1 + n2 + 1);

    for (i = 0; i <= n1 + n2; i++) {
      if (i < n1) a[i] = s1[i]; // 0..(n1 - 1)
      else a[i] = s2[i - n1];  // n1..(n2 + n1)
    }

    return a;
}


int main() {
  char s1[10], s2[10];

  system("clear");
  printf("enter the strings (length <= 9):\n");
  scanf("%9s%9s", s1, s2);
  printf("%s\n", concat(s1, s2));


  return 0;
}
