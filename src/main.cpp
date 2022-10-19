#include "taylor_sine.h"
#include <stdio.h>
#include <stdlib.h>

// Answer to 1.b
int main(int argc, char **argv) {
  double x;
  int n;
  // Loop does tests x-values ranging from -10 to 10, with 0.5 x-value increments
  // for each value of x, 10 different precisions are tested and written. 
  for (x = -10; x < 10; x += 0.5) {
    double ANCI = sin(x);
    printf("\n\nTesting taylor function for sin(%lf)\nANCI C sin function "
           "equivalent: %lf\n", x, ANCI);
    // The precision of the function is added by two, untill the precision hits 20. 
    for (n = 2; n <= 20; n += 2) {
      double test = taylor_sine(x, n);
      printf("\n %lf", test);
    }
  }
  return 0;
}
// Answer to 1.c
  
// The output of the Taylor Function is similar to the ANCI C sin function with any x input that i have tested. 
// But, it appears that the further the input of x is from 0, the higher the precision needs to be 
// for the taylor function to output a result similar to the ANCI C sin function. 
// So for a program to emplement the Taylor Series as a function to computes sin(x)
// This would have to be taken into account, to ensure adequate precision of the output 