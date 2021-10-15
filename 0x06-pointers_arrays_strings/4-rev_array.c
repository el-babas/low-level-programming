#include "main.h"
/**
 * reverse_array - reverse array int
 * @a: array
 * @n: size array
 */
void reverse_array(int *a, int n)
{
	int len, temp, x;

	len = n / 2;
	n--;
	for (x = 0; x < len; x++)
	{
		temp = *(a + x);
		*(a + x) = *(a + (n - x));
		*(a + (n - x)) = temp;
	}
}
