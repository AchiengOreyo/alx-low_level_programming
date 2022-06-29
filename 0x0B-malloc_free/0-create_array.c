#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - creates an array of char, initialize it with a specific char
 *@size:size of array
 *@c:char for initialization
 *
 *Return - a pointer to the char if malloc fails
 */
char *create_array(unsigned int size, char c)

{
unsigned int k;
char *b;
if (size == 0)
return (NULL);
b = malloc(size * sizeof(char));
if (b == 0)
{
return (NULL);
}
for (k = 0; k < size; k++)
{
b[k] = c;
}
return (b);
}
