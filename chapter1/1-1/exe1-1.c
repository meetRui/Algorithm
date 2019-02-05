// exercise 1-1
// created by rui on 2019-02-05

// input: three integer
// output: average of input
#include<stdio.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c); // input format of double: %lf
    double ret;
    ret = (a + b + c) / 3;
    printf("%.3f\n", ret); // output format of double: %f
    return 0;
} 


// to compatible with C99, I/O format of double should be specified