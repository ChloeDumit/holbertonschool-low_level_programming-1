#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
  unsigned int a;
  void *ptr;

  if (nmemb == 0 || size == 0)
    {
      return (NULL);
    }
  while (ptr[a] != 0)
    a++;

  ptr = malloc(size * nmemb);
  if (ptr == NULL)
    return (NULL);  

for (a = 0; a <= nmemb; a++)
    {
