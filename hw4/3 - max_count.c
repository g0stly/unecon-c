#include "stdio.h"
#include "stdlib.h"

int main()
{
    int a[10] = {1, 1, 1, 2, 1, 2, 2, 3, 3, 1};
    int i, j, count, max_count = 0, current;

    system("clear");
    printf("array:\n");
    for (i = 0; i < 10; i++) {
      printf("%d ", a[i]);
    }

    for (i = 0; i < 10; i++) {
      if (a[i] != -1) {
        current = a[i];
        count = 0;
        for (j = 0; j < 10; j++) {
          if (a[j] == current) {
            a[j] = -1;
            count += 1;
          }
        if (count > max_count)
          max_count = count;
        }
      }
    }
    printf("\nmax count:\n%d\n", max_count);


    return 0;
}
