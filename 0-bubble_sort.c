#include "sort.h"
/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, i, tmp = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (i = 0; i < size; i++)
		{
			if (array[i] > array[i + 1] && array[i + 1])
			{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			print_array(array, size);
			}
		}
}
