/**
 * leet - encodes a string into leetspeek.
 * @s: pointer to input string.
 * Return: Returns pointer to leetspeek string.
 */
char *leet(char *s)
{
int k, j;
char subs[] = "aAeEoOtTlL";
char le[] = "43071";
k = 0;
for (k = 0; s[k] != '\0'; k++)
{
for (j = 0; subs[j] != '\0'; j++)
if (s[k] == subs[j])
s[k] = le[j / 2];
}
return (s);
}
