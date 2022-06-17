/**
 * _strcmp - compares two strings, ending at a different byte.
 * @s1: string to be compared
 * @s2: string to compare by
 * Return: the difference between the first character that are not the same
 */
int _strcmp(char *s1, char *s2)
{
int k;
for (k = 0; s1[k] != '\0' && s2[k] != '\0' && s1[k] == s2[k]; k++)
;
return (s1[k] - s2[k]);
}
