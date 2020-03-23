#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, counter = 0;

    system("clear");
    printf("enter the number:\n");
    scanf("%d", &num);

    while (num != 0) {
      if (num % 10 == 7) counter += 1;
      num = num / 10;
    }
    printf("number of sevens: %d\n", counter);

    return 0;
}
