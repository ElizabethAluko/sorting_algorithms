#include "sort.h"

/**
 * bubble_sort - sort an array using bubble sort algorithm.
 * @array: The array to sort.
 * @size: The size of the array to sort.
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, tmp;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
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
