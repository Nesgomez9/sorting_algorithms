#include "sort.h"
/**
 * selection_sort - sorts a array of numbers
 * @array: array of ints
 * @size: len of array
 */
void selection_sort(int *array, size_t size)
{
	int tmpin, tmpn;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		tmpn = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < tmpn)
			{
				tmpin = j;
				tmpn = array[j];
			}
		}
		if(tmpn < array[i])
		{
			array[tmpin] = array[i];
			array[i] = tmpn;
			print_array(array, size);
		}
	}
}
