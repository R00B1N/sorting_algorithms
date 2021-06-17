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
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: the array of integers
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t c, d, index;
	int min;

	if (!array || size < 2)
		return;

	for (c = 0; c < size - 1; c++)
	{
		min = array[c];
		index = c;
		for (d = c + 1; d < size; d++)
		{
			if (array[d] < min)
			{
				min = array[d];
				index = d;
			}
		}
		if (index != c)
		{
			swapping_integers(array + c, array + index);
			print_array((const int *)array, size);
		}
	}
}
