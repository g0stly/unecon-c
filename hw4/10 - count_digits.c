#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int count_digits(char *s) {
    int i, count = 0;

    for (i = 0; i < strlen(s); i++) {
      if (s[i] == '1' || s[i] == '2' || s[i] == '3' ||
          s[i] == '4' || s[i] == '5' || s[i] == '6' ||
          s[i] == '7' || s[i] == '8' || s[i] == '9' ||
          s[i] == '0')
          count += 1;
    }
    return count;
}


int main() {
  char s[10];

  system("clear");
  scanf("%9s", s);
  printf("%d\n", count_digits(s));


  return 0;
}
