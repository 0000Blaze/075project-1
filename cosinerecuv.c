#include <stdio.h>
#include <math.h>
#define PI 3.14159

float cosine(float an, int n)
{
    if (an == 0 || n==0 )
        return 1;
    else
        return pow(-1,n)*pow(an,2*n)/factorial(2*n) + cosine(an, n - 1);
}
