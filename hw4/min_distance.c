#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"

int main()
{
    int a[10], i, min_i;
    float b, new_d, min_d;

    srand(time(NULL));
    system("clear");

    printf("array:\n");
    for (i = 0; i < 10; i++) {
      a[i] = rand() % 100;
      printf("%d ", a[i]);
    }

    b = rand() % 100;
    printf("\nthe number:\n%.2f", b);

    min_d = fabs(a[0] - b);
    min_i = 0;

    for (i = 1; i < 10; i++) {
      new_d = fabs(a[i] - b);
      if (new_d < min_d) {
        min_d = new_d;
        min_i = i;
      }
    }
    printf("\nmin distance element:\n%d\n", a[min_i]);

    return 0;
}
