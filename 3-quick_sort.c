#include "sort.h"

/**
* swap_integers - function that swaps two integers
* @a: First integer
* @b: Second integer
*/
void swap_integers(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}

/**
* partition - Lomuto partition scheme for Quick Sort algorithm
* This function divides the elements of the array
* that are between First and Last index into
* smaller(on the left) and bigger(on the right) elements than the pivot.
* The pivot is always the last element.
*
* @array: the array
* @First: the index of the first element
* @Last: the index of the last element
* @size: size of the array
* Return: returns the new index of the pivot
*/
int partition(int *array, int First, int Last, size_t size)
{
int i, ipivot = First;
int pivot = array[Last];

for (i = First; i <= Last; i++)
{
if (array[i] < pivot)
{
if (array[i] != array[ipivot])
{
swap_integers(array + i, array + ipivot);
print_array((const int *)array, size);
}
ipivot++;
}
}
if (array[ipivot] != array[Last])
{
swap_integers(array + ipivot, array + Last);
print_array((const int *)array, size);
}
return (ipivot);
}

/**
* QS - recursively sorts an array using the Quick Sort algorithm
* @array: The array of integers
* @First: The index of the first element
* @Last: The index of the last element in the array
* @size: size of the array
*/
void QS(int *array, int First, int Last, size_t size)
{
int ipivot;

if (First >= Last)
return;
ipivot = partition(array, First, Last, size);
QS(array, First, ipivot - 1, size);
QS(array, ipivot + 1, Last, size);
}

/**
* quick_sort - sorts an array of integers in ascending order
* using the Quick sort algorithm:
* the Lomuto partition scheme is implemented and
* the pivot is always the last element
*
* @array: the array of integers
* @size: the size of the array
*/
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;
QS(array, 0, (int)(size - 1), size);
}
