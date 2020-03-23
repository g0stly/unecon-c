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
      if (a[i] % 2 == a[i + 1] % 2) {
        ans = 0;
        break;
      }
    }

    if (ans == 1)
      printf("\neven and odd numbers do alternate\n");
    else
      printf("\neven and odd numbers do not alternate\n");

    return 0;
}
