/*Write a program to find the largest digit in a number. Use a function
that takes an integer number as an argument.*/

#include <stdio.h>
int m(int n)
{
    int a,b;

    if(n==0)
        return 0;
    else{
        a = n%10;
        b = m(n/10);
        if(a>b)
            return a;
        else
            return b;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("\n the largest digit is %d",m(n));
    return 0;
}