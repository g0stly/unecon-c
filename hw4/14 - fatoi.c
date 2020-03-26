#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"

int fatoi(const char *str) {
    int n = strlen(str), i, ans = 0; // n = 6

    for (i = 0; i < n; i++) {
      if (48 <= str[i] && str[i] <= 57)
        ans += (str[i] - 48) * pow(10, n - i - 1); // 1 * 10^5
      else {
        ans /= pow(10, n - i);
        break;
      }
    }

    return ans;
}


int main() {
  char s[10]; //example: 123ass

  system("clear");
  printf("enter the number (length <= 9):\n");
  scanf("%9s", s);
  printf("%d\n", fatoi(s));


  return 0;
}
