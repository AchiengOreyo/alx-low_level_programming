#include <stdio.h>
/**
 * main - Assigns a random number to int n everytime
 *It execute it and print it
 * Return: Always 0 (Success)
 */
int main(void)
{
int(n);
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
{
else if (n == 0)
}
prinf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
