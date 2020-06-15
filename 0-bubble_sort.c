#include "sort.h"
/**
 * bubble_sort - bubble sort algo
 * @array: array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
int t;
size_t c, d;
if (!array || !size)
return;
for (c = 0; c < size - 1; c++)
{
for (d = 0; d < size - c - 1; d++)
{
if (array[d] > array[d + 1])
{
t = array[d];
array[d] = array[d + 1];
array[d + 1] = t;
print_array(array, size);
}
}
}
}
