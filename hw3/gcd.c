#include "stdio.h"
#include "stdlib.h"

int gcd(int n1, int n2) {

    while (n1 != n2) {
      if (n1 > n2)
        n1 -= n2;
      else
        n2 -= n1;
    }
    return n1;
}

int main()
{
    int num1, num2;

    system("clear");
    printf("enter the numbers:\n");
    scanf("%d%d", &num1, &num2);
    printf("gcd: %d\n", gcd(num1, num2));

    return 0;
}
