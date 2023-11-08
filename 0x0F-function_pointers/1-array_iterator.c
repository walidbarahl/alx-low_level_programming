#include "function_pointers.h"

/**
 * array_iterator - maps an array through a func pointer
 * @array: the array size
 * @action: function pionter
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size;

	if (array && size && action)
	{
		while (array <= end)
		{
			action(*array);
			array++;
		}
	}
}
