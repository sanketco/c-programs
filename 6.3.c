// Write a program that accepts three numbers and using a function returns
// the largest among the numbers.

#include<stdio.h>
#include<conio.h>
int large(int a,int b,int c);
void main(){
int a,b,c,max;
printf("\nenter the three numbers");
scanf("%d%d%d",&a,&b,&c);
max=large(a,b,c);
printf("\n %d is the largest number among the three numbers",max);
return 0;
}
int large(int a,int b,int c)
{
if(a>b)
{
if(a>c)

return a;
else
return c;
}
else{
if(b>c)
return b;
else
return c;
}
}