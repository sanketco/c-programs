/*
Find the nth Fibonacci number using a recursive function.
*/

#include <stdio.h>

int fib(int);

int main()
{
    int n;
    printf("Enter n to find nth term of Fibonacci Series : ");
    scanf("%d",&n);
    printf("%d term of Fibonacci Series is %d ",n,fib(n));
    return 0;
}

int fib(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}