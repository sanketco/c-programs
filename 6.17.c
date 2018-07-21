/*
Write a function to print the first n terms of the following series:
1, 2, 4, 8, 16, 22, 26, 38, 62, 74, 102, 104, 108, 116, 122, 126, 138, ...
To get each term in the above series you have to multiply all the non-zero
digits of previous number and then add that value to previous number. Thus
with a value like 62, you multiply 6 x 2 and get 12. Now 62 + 12 = 74,
which is the next value in the sequence?
*/

#include <stdio.h>

int main()
{
    int n,p,i,a=1;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int s=1;
        printf("%d ",a);
        int b=a;
        while(b>0)
        {
            p=b%10;
            s=s*p;
            b=b/10;
        }
        a+=s;
    }
    return 0;
}