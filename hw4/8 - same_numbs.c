#include "stdio.h"
#include "stdlib.h"

int main() {
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int b[] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
  int i, j, count = 0, current;

  system("clear");
  for (i = 0; i < 10; i++)
    printf("%d ", a[i]);

  printf("\n");

  for (i = 0; i < 10; i++)
    printf("%d ", b[i]);


  for (i = 1; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      if (a[i] == b[j])
        count += 1;
    }
  }
  printf("\n%d\n", count);



  return 0;
}
