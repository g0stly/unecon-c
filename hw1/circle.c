#include <stdio.h>
#include <stdlib.h>

float diameter (float radius) {
  return 2 * radius;
}

float perimeter (float radius, float pi) {
  return 2 * pi * radius;
}

float square (float radius, float pi) {
  return pi * radius * radius;
}

int main()
{
    const float pi = 3.14159;
    float r;

    system("clear");
    printf("enter the radius:\n");
    scanf("%f", &r);

    printf("diameter: %.2f \n", diameter(r));
    printf("perimeter: %.2f\n", perimeter(r, pi));
    printf("square: %.2f\n", square(r, pi));

    return 0;
}
