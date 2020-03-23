#include "stdio.h"
#include "stdlib.h"

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
    int num;

    system("clear");
    printf("enter the number:\n");
    scanf("%d", &num);
    printf("%d\n", factorial(num));
}
