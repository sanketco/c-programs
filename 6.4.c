/*Write a program that reads two numbers and swaps them using a
function.*/

#include<stdio.h>

void swap(int *,int *);

int main(){

        int a,b;



    printf("Enter any two integers: ");

    scanf("%d%d",&a,&b);



    printf("Before swapping: a = %d, b=%d",a,b);



    swap(&a,&b);



    printf("\nAfter swapping: a = %d, b=%d",a,b);

    return 0;

}



void swap(int *p,int *q){

    int temp;

    temp = *p;

    *p=*q;

    *q=temp;

}