/*
. Write a C program to print all the non-Fibonacci numbers using a
function up to a particular limit n. For example if n is 10 your program
should display 4, 6, 7, 9, 10. Do not use arrays in the program.
*/

#include <stdio.h>

int fib(int);

int main()
{
    int i,j,n;
    printf("Enter the limit \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=n;j++)
        {
        if(i==fib(j))
            c++;
        }
        if(c<1)
            printf("%d  ",i);
    }
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