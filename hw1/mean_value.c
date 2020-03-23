#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e;

    system("clear");
    printf("enter the numbers:\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    printf("the average is %d\n", (a + b + c + d + e) / 5);

    return 0;
}
