#include "stdio.h"
#include "stdlib.h"

int is_prime(int num) {
    int i;

    if (num > 1) {
      for (i = 2; i <= num - 1; i++) {
        if (num % i == 0)
          return 0;
      }
      return 1;
    }
    else
      return 1;
}

int main()
{
    int number;

    system("clear");
    printf("enter the number:\n");
    scanf("%d", &number);

    if (is_prime(number) == 1)
      printf("the number is prime\n");
    else
      printf("the number is not prime\n");

    return 0;
}
