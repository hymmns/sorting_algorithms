#include "sort.h"

/**
 * selection_sort - sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t current_ind, next_ind, min_val_ind;

	if (size < 2 || array == NULL)
		return;

	for (current_ind = 0; current_ind < (size - 1); current_ind++)
	{

		min_val_ind = current_ind;

		for (next_ind = current_ind + 1; next_ind < size; next_ind++)
			if (array[min_val_ind] > array[next_ind])
				min_val_ind = next_ind;

		if (min_val_ind != current_ind)
		{
			int temp = array[min_val_ind];

			array[min_val_ind] = array[current_ind];
			array[current_ind] = temp;
			print_array(array, size);
		}

	}
}
