#include "taylor_sine.h"
#include <math.h>
#include <stdio.h>
// Answer to 1.a

// function for calculating the factorial of a given number
double findFact(int n)
{
    double fact = 1;
    int i;
    /* i counts backwards and multiplies the numbers below the factorial*/
    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }
    return fact;
}
// function for calculating sin(x) by the Taylor series.
double taylor_sine(double x, int n)
{

    double sinx = x;
    /* j is the power and dividing-factorial value */
    int j = 3;
    /* i is used to toggle between add or subtract by being eve/uneven*/
    for (int i = 2; i <= n; i++)
    {
        /* modulus is used to decide even/uneven*/
        if (i % 2 == 0)
        {
            /* if uneven, subtract*/
            sinx -= (pow(x, j) / findFact(j));
        }
        else
        {
            /* if even, add*/
            sinx += (pow(x, j) / findFact(j));
        }
        j += 2;
    }

    return sinx;
}
