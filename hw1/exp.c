#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int factorial(int number) {
  int result = 1, left = number;

  while (left != 0) {
    result *= left;
    left -= 1;
  }
  return result;
}

int main()
{
    double x, result = 1;
    int i, n;

    system("clear");
    printf("enter the x:\n");
    scanf("%lf", &x);
    printf("enter the number of elements:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
      result += pow(x, (double) i) / factorial(i);
    }
    printf("%lf\n", result);

    return 0;
}
