/*
Write C code , including a loop, required to calculate y(t) from the
equation:
        {3t + 5, t < 0
y(t) =  {
        { −3t + 5, t ≥ 0
for values of t between -9 and 9 in steps of 3. Display each value of t and
y(t).
*/

#include <stdio.h>

int main()
{
    int t,i;
    for(i=-9;i<0;i++)
    {
        int b=3*(i*i)+5;
        printf("%d , %d \n",i,b);
    }
    for(i=0;i<=9;i++)
    {
        int a=-3*(i*i)+5;
        printf("%d , %d \n",i,a);
    }
    return 0;
}
