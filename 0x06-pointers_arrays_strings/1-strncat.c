/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to print
 * Return: pointer to the resulting string destination
 */
char *_strncat(char *dest, char *src, int n)
{
int k, j;
k = 0;
for (j = 0; dest[j] != '\0'; j++)
;
while (src[k] != '\0' && k < n)
{
dest[j + k] = src[k];
k++;
}
return (dest);
}
