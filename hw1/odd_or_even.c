#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    system("clear");
    printf("enter the number:\n");
    scanf("%d", &number);

    if (number % 2 == 0)
      printf("the number is even\n");
    else
      printf("the number is odd\n");

    return 0;
}
