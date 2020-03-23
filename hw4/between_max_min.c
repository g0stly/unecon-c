#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main()
{
    int a[10], i, i_min = 0, i_max = 0, total = 0;

    srand(time(NULL));
    system("clear");

    printf("array:\n");
    for (i = 0; i < 10; i++) {
      a[i] = rand() % 100;
      printf("%d ", a[i]);
    }

    for (i = 1; i < 10; i++) {
      if (a[i] < a[i_min])
        i_min = i;
      if (a[i] > a[i_max])
        i_max = i;
    }

    if (i_min < i_max)
      for (i = i_min + 1; i < i_max; i++) {
        total += a[i];
      }
    else
      for (i = i_max + 1; i < i_min; i++) {
        total += a[i];
      }
    printf("\ntotal: %d\n", total);

    return 0;
}
