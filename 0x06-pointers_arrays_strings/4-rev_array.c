/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to reverse
 * @n: size of elements in the array
 */
void reverse_array(int *a, int n)
{
int k, temp;
k = temp =  0;
n -= 1;
while (k <= n)
{
temp = a[n];
a[n--] = a[k];
a[k++] = temp;
}
}
