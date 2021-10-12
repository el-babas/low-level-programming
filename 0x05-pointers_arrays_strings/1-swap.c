#include "main.h"
/**
 * swap_int - Change value
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
