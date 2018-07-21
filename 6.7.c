/*
Write a menu driven program with the following menus:-
1. Area of circle
2. Perimeter of circle
3. Area of rectangle
4. Perimeter of a rectangle
Use functions for each of the menu with proper arguments, return type
and function name.
*/

#include<conio.h>
#include<stdlib.h>
#define pi 3.14

int area (int);
int peri (int);
int arearect (int, int);
int perirect (int, int);

int main()
{
int i,r,l,w,c;
printf("1. area of circle\n");
printf("2. perimeter of circle\n");
printf("3. area of rectangle\n");
printf("4. perimeter of rectangle\n");
printf("5. exit\n\n");
printf("Which task you want to perform : ");
scanf ("%d",&i);
switch(i)
{
case 1:
c=area(r);
printf("Answer = %f\n",c);
break;
case 2:
c=peri(r);
printf("Answer = %f\n",c);
break;
case 3:
c=arearect(l , w);
printf("Answer = %d\n",c);
break;
case 4:
c=perirect(l,w);
printf("Answer = %d\n",c);
break;
case 5 :
exit(0);
break;
default :
printf("Enter valid number\n");
}
}
int area(int r)
{
float c;
scanf("%f",&r);
c = pi*(r*r);
}
int peri(int r)
{
float c;
scanf("%f",&r);
c = 2*pi*r;
}
int arearect(int l, int w)
{
int c;
scanf("%d%d",&l,&w);
c = (l*w);
}
int perirect(int l, int w)
{
int c;
scanf("%d%d",&l,&w);
c = 2*(l+w);
}