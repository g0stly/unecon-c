#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int a, b, c, d;

    system("clear");
    printf("enter the number:\n");
    scanf("%d", &num);

    a = num / 10000;
    b = num / 1000 % 10;
    c = num % 100 / 10;
    d = num % 10;

    if (a == d && b == c)
      printf("the number is palindrom\n");
    else
      printf("the number is not palindrom\n");
    return 0;
}
