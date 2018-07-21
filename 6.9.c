/*
Write a function that converts temperature given in Celsius to Fahrenheit..
*/

#include <stdio.h>
void main()
{
void Fahrenheit(float c);
float c;
printf("\nEnter the Temperature in Celsius : ");
scanf("%f", &c);
Fahrenheit(c);
}
void Fahrenheit(float c)
{
printf("\nThe Temperature is %0.2f Fahrenheit.", ( 9 * c) / 5 + 32);
return 0;
}