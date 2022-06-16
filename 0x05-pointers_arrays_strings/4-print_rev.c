#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
int c = 0;
while (*(s + i))
c++;
c = c - 1;
while (c >= 0)
{
_putchar(*(s + c));
c--;
}
_putchar('\n');
}
