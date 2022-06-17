/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: pointer to the resulting string desination
 */
char *_strcat(char *dest, char *src)
{
int k, j;
k = 0;
for (j = 0; dest[j] != '\0'; j++)
;
while (src[k] != '\0')
{
dest[j + k] = src[k];
k++;
}
return (dest);
}
