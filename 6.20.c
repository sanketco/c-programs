/*
Write a complete C program that reads an integer n and computes and
prints the first n terms of the following series using a function.
a 1 = 1, a 2 = 2, a 3 = 3, and for k > 3 : a k = a k−2 + 2 × a k−3 .
Assume n > 0. Do not use arrays.
Below is the output from a sample run of the program:
Enter n: 7
Output : 1, 2, 3, 4, 7, 10, 15
*/

#include <stdio.h>

int ser(int n)
{
	if(n<4)
		return n;
	else
		return ser(n-2)+(2*ser(n-3));
}

int main()
{
	int n;
	printf("Enter Limit for Series : ");
	scanf("%d",&n);
	for(int i=1;i<= n;i++)
        printf("%d ",ser(i));
	return 0;
}