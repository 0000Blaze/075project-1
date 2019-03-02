#include <stdio.h>
#include <math.h>
#define PI 3.14159

float sine(float an, int n)
{
    if (an == 0 || n == 0)
        return 0;
    else
        return -1*pow(-1,n)*pow(an,2*n-1)/factorial(2*n-1) + sine(an, n - 1);
}
