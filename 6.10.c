/*
Write a function to calculate compound interest given the principal, rate
of interest and number of years.
*/

#include <stdio.h>
#include <math.h>

float comp(int p,int r,int t);

int main()
{
    int p,r,t;
    printf("Enter principal, rate, time\n");
    scanf("%d%d%d",&p,&r,&t);
    printf("Annual Compound Interest is %f",comp(p,r,t));
    return 0;
}

float comp(int p,int r,int t)
{
    return p*pow(1+r,t);
}