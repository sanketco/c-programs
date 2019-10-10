/*
. Write a function to print the numbers in a given range whose sum of the
factorials of all its digits is equal to the number itself.
For example: 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
*/


#include<stdio.h>
int main(){
  int num,i,f,r,s=0,temp;

  printf("Enter a number: ");
  scanf("%d",&num);

  temp=num;
  while(num){
      i=1,f=1;
      r=num%10;

      while(i<=r){
         f=f*i;
        i++;
      }
      s=s+f;
      num=num/10;
  }
  if(s==temp)
      printf("%d is a strong number",temp);
  else
      printf("%d is not a strong number",temp);

  return 0;
}
