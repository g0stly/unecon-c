#include "stdio.h"
#include "stdlib.h"
#include "math.h"

float distance(float x1, float y1, float x2, float y2) {
  return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}


int main()
{
    float x1, y1, x2, y2;

    system("clear");
    printf("enter the coordinates of the first point:\n");
    scanf("%f %f", &x1, &y1);
    printf("enter the coordinates of the second point:\n");
    scanf("%f %f", &x2, &y2);
    printf("distance:  %.2f\n", distance(x1, y1, x2, y2));

    return 0;
}
