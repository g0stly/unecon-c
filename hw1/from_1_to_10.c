#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 1;
    int total = 0;

    system("clear");
    while (counter != 11) {
      total += counter;
      counter += 1;
    }
    printf("%d\n", total);

    return 0;
}
