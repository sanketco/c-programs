/*
Define a recursive function for reversing a number or printing the sum of
digits of a number using a user choice.
*/

#include <stdio.h>
int reversDigits(int num)
{
    int rev_num = 0;
    while(num > 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    return rev_num;
}

int main()
{
    int num,c,result ;
    scanf("%d",&c);
    if(c==1){
            scanf("%d",&num);
    printf("Reverse of no. is %d", reversDigits(num));

    getchar();}
    if(c==2)
    {
    int sum (int a);
     printf("Enter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of digits in %d is %d\n", num, result);}
    return 0;}

int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
}}