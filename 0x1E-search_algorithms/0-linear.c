#include "search_algos.h"

/**
 * linear_search - function that do a linear search
 * @array:  is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located, -1 if array is null
 */
int linear_search(int *array, size_t size, int value)
{
  size_t index;

  if (!array) {
    return -1;
  }

  for (index = 0; index < size; index++) {
    printf("Value checked array[%ld] = [%d]\n", index, array[index]);
    if (array[index] == value) {
      return index;
    }
  }

  return -1;
}
