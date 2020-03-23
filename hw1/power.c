#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, result = 1;

    system("clear");
    scanf("%d%d", &x, &y);

    while (y != 0) {
      result *= x;
      y -= 1;
    }
    printf("%d\n", result);

    return 0;
}
