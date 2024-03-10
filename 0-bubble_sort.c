#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t currentInd, times = 0;

	while (times < (size - 1))
	{
		for (currentInd = 0; currentInd < (size - 1); currentInd++)
		{
			if (array[currentInd] > array[currentInd + 1])
			{
				int temp = array[currentInd];

				array[currentInd] = array[currentInd + 1];
				array[currentInd + 1] = temp;
				print_array(array, size);
			}
		}
		times++;
	}
}
