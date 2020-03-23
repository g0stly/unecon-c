#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1}, i, ans = 1;

    srand(time(NULL));
    system("clear");

    printf("array:\n");
    for (i = 0; i < 10; i++) {
      /*
      a[i] = rand() % 100;
      */
      printf("%d ", a[i]);
    }

    for (i = 0; i < 5; i++) {
      if (a[i] != a[9 - i]) {
        ans = 0;
        break;
      }
    }

    if (ans == 1)
      printf("\nthe array is symmetric\n");
    else
      printf("\nthe array is not symmetric\n");

    return 0;
}
