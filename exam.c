#include <stdio.h>
#include <conio.h>
#include <math.h>

float main(void)
{
    double y = 16;
    double x = 3;
    double z = fmod(y, x);
    // y = ++x;


    printf("X is: %f\n", x);
    printf("Y is: %f\n", y);
    printf("Z is: %f\n", z);

    return (0);
}
