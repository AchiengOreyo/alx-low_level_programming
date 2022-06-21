#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase.
 * @c: pointer to the string to  be converted
 * Return: the converted string.
 */
char *string_toupper(char *c)
{
int k;
k = 0;
while (c[k] != '\0')
{
if (c[k] >= 'a' && c[k] <= 'z')
c[k] -= 'a' - 'A';
k++;
}
return (c);
}
