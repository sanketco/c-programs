/*
Write a complete C program that does the following.
It asks the user to enter an integer between 100 and 9999. If the entered
number is out of range, the program forces the user to enter more numbers
until one in the correct range is given. Then the program prints the digits
in the number (in reverse) on separate lines. Here is an example of how the
program should work:
Enter an integer between 100 and 9999: 897
7
9
*/

#include <stdio.h>

void rev(int);

int main()
{
    int n;
    do
    {
        printf("Enter a number : ");
        scanf("%d",&n);
    }while(n<100 || n>9999);
    rev(n);
    return 0;
}

void rev(int n)
{
    while(n>0)
    {
        printf("%d\n",n%10);
        n/=10;
    }
}