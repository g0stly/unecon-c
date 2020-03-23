#include "stdio.h"
#include "stdlib.h"

int main()
{
    int n, i, num, min;

    system("clear");
    printf("enter the number of elements:\n");
    scanf("%d%d", &n, &min);

    for (i = 1; i <= n - 1; i++) {
      scanf("%d", &num);
      if (num < min) {
        min = num;
      }
    }
    printf("the minimum is %d\n", min);
    return 0;
}
