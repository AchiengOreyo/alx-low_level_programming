/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to input string.
 * Return: Returns pointer to capitalized string.
 */
char *cap_string(char *s)
{
int k, j;
char sep[] = " \t\n,;.!?\"(){}";
k = 1;
if (s[0] >= 'a' && s[0] <= 'z')
s[0] -= ('a' - 'A');
while (s[k] != '\0')
{
for (j = 0; sep[j] != '\0'; j++)
if (s[k - 1] == sep[j] && (s[k] >= 'a' && s[k] <= 'z'))
s[k] -= ('a' - 'A');
k++;
}
return (s);
}
