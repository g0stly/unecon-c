#include "stdio.h"
#include "stdlib.h"

int main()
{
    int n, i, num, result = 0;

    system("clear");
    printf("enter the number of elements:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
      scanf("%d", &num);
      result += num;
    }
    printf("%d\n", result);

    return 0;
}
