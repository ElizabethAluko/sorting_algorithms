#include "sort.h"

/**
 * selection_sort - sorts an array of integers using selection sort
 * @array: array to sort.
 * @size: Size of the array to sort.
 *
 * Return: void.
 */
void selection_sort(int *array, size_t size)
{
	int tmp = 0;
	size_t i, j, p;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		p = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[p])
				p = j;
		}
		if (p != i)
		{
			tmp = array[i];
			array[i] = array[p];
			array[p] = tmp;
			print_array(array, size);
		}
	}
}
