#include "sort.h"
#include <stdio.h>

/**
 * swap1 - swaps two values in an array
 *
 * @array: array
 * @i: first value
 * @j: second value
 * @size: size of array
 *
 * Return: Nothing
 */
void swap1(int *array, int i, int j, int size)
{
	int tmp;

	if (array[i] != array[j])
	{
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
		print_array(array, size);
	}
}

/**
 * part - sorts a partition of data in relation to a pivot
 *
 * @array: array
 * @min: Left wall
 * @max: right wall
 * @size: size
 *
 * Return: A pivot
 */
int part(int *array, int min, int max, size_t size)
{
	int i = min, j, p  = array[max];

	for (j = min; j <= max; j++)
	{
		if (array[j] < p)
		{
			swap1(array, i, j, size);
			i++;
		}

	}
	swap1(array, i, max, size);

	return (i);
}

/**
 * quicksort -  sorts an array of integers
 *
 * @array: data to sort
 * @min: Left wall
 * @max: right wall
 * @size: size of data
 *
 * Return: No Return
 */
void sort(int *array, int min, int max, size_t size)
{
	int p;

	if (min < max)
	{
		p = part(array, min, max, size);
		sort(array, min, p - 1, size);
		sort(array, p + 1, max, size);
	}
}

/**
 * quick_sort -  sorts an array of integers
 *
 * @array: data to sort
 * @size: size of data
 *
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	sort(array, 0, size - 1, size);
}
