#include "sort.h"

/**
 * swapping_integers - function that swaps two integers
 * @a: First integer
 * @b: Second integer
 */

void swapping_integers(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

/**
 * bubble_sort - bubble sort algorithm
 * @array: array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j = 0, k = 0;
	int swp = 1;

	if (!array || size < 2)
	{
		return;
	while (swp != 0)
	{
		swp = 0;
		for (k = 0; k < size - 1 - j; k++)
		{
			if (array[k] > array[k + 1])
			{
				swapping_integers(array +  k, array + (k + 1));
				print_array((const int *)array, size);
				swp = 1;
			}
		}
		j++;
		if (swp == 0)
			break;
	}
	}
}
