#include "sort.h"
/**
 * bubble_sort - sorts a array of numbers with a bubble sort algorithm
 * @array: array of ints
 * @size: len of array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j;

	if (!size || !array)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);

			}
		}
	}
}
