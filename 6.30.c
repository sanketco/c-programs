/*
A child is running up a ladder with n steps, and can hop either 1 step or 2
steps at a time. Calculate how many possible ways the child can run up
the ladder.
*/



// A C program to count number of ways to reach n't stair when
// a person can climb 1, 2, ..m stairs at a time.
#include<stdio.h>

// A simple recursive program to find n'th fibonacci number
int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}

// Returns number of ways to reach s'th stair
int countWays(int s)
{
    return fib(s + 1);
}

// Driver program to test above functions
int main ()
{
  int s =4;
  printf("Number of ways = %d", countWays(s));
  getchar();
  return 0;
}