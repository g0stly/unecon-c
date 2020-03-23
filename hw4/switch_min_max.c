#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main()
{
    int a[10], i, i_min = 0, i_max = 0, temp;

    srand(time(NULL));
    system("clear");

    printf("before:\n");
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

    temp = a[i_max];
    a[i_max] = a[i_min];
    a[i_min] = temp;

    printf("\nafter:\n");
    for (i = 0; i < 10; i++) {
      printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
