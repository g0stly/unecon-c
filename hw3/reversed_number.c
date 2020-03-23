#include "stdio.h"
#include "stdlib.h"

int reversed(int num) {
    int ans = 0;

    while (num != 0) {
      ans *= 10;
      ans += num % 10;
      num /= 10;
    }
    return ans;
}

int main()
{
    int num;

    system("clear");
    printf("enter the number:\n");
    scanf("%d", &num);
    printf("reversed: %d\n", reversed(num));


    return 0;
}
