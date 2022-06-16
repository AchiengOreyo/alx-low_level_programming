#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of s
 */
int _strlen(char *s)
{
int k = 0;
while (*(s + k))
k++;
return (k);
}
