#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet - "check the code for Holberton School students"
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
_putchar(ch++);
_putchar('\n');
}
