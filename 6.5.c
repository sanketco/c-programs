/*5. Write a program that reads a number and finds the factorial using a
function that takes an integer number.*/

#include <stdio.h>

int fact(int);

int main()
{
    int num;
    int result;

    printf("Enter a number to find it's Factorial: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial of negative number not possible\n");
    }
    else
    {
        result = fact(num);
        printf("The Factorial of %d is %d.\n", num, result);
    }
    return 0;
}
int fact(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return(num * fact(num - 1));
    }
}