#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - check the code for Holberton School students.
 * @b: var
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
