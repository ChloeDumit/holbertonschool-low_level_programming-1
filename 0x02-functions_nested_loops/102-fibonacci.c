#include "holberton.h"
#include <stdio.h>

/**
 * printFibonacciNumbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void printFibonacciNumbers(int n)
{
// Driver Code
int main()
{
printFibonacciNumbers(50);
return 0;
}

int f1 = 0, f2 = 1, i;

if (n < 1)
return;

for (i = 1; i <= n; i++)
{
cout<<f2<<" ";
int next = f1 + f2;
f1 = f2;
f2 = next;
}
}