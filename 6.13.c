/*
Print the prime factors of a given number using a function.
*/

#include<stdio.h>
#include<conio.h>
void prime(int x)
{
 int a;
 for( a = 2; a <= x; a++ )
 {
  if( x % a == 0 )
  {
   printf("%d ",a);
   prime(x/a);
   break;
  }
 }
}

int main()
{
 int number;
 printf("\n\nEnter a number: ");
 scanf("%d", &number);
 prime(number);
 printf("\n\n");
 return 0;
}