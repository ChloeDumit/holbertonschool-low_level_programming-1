#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list_t list
 * @h: pointer that points to header
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t a = 0;

while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
a++;
}
return (a);
}
