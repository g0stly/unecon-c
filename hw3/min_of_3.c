#include "stdio.h"
#include "stdlib.h"

float min_of_3 (float num1, float num2, float num3) {

    if (num1 < num2) {
      if (num1 < num3)
        return num1;
      else
        return num3;
    }
    else {
      if (num2 < num3)
        return num2;
      else
        return num3;
    }
  }

int main()
{
    float num1, num2, num3;

    system("clear");
    printf("enter the numbers:\n");
    scanf("%f%f%f", &num1, &num2, &num3);
    printf("the minimum: %f\n", min_of_3(num1, num2, num3));

    return 0;
}
