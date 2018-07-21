/*
Write a function to print the first n terms of the Fibonacci series.
*/

#include <stdio.h>

int fib(int n);

int main()
{
    int n;
    printf("Enter Limit of Fibonacci Series : ");
    scanf("%d",&n);
     for(int i=1;i<=n;i++)
        printf("%d ",fib(i));
    return 0;}

int fib(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
