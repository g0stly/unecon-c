#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main()
{
    int a[10], i, ans = 1;

    srand(time(NULL));
    system("clear");

    printf("array:\n");
    for (i = 0; i < 10; i++) {
      a[i] = rand() % 100;
      printf("%d ", a[i]);
    }

    for (i = 0; i < 9; i++) {
      if (a[i] > a[i + 1])
        ans = 0;
    }

    if (ans == 1)
      printf("\nthe array is ordered\n");
    else
      printf("\nthe array isn't ordered\n");

    return 0;
}
