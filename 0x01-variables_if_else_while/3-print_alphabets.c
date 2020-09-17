#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the alphabet with only 2 putchar and without q and e
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int ch = 'a';
int hc = 'A';
while (ch <= 'z')
putchar(ch++);
while (hc <= 'Z')
putchar(hc++);
putchar('\n');
return (0);
}
