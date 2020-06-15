#include "sort.h"
/**
 * swap - swap
 * @array: array
 * @a: var
 * @b: var
 */
void swap(int *array, int a, int b)
{
int aux;
aux = array[a];
array[a] = array[b];
array[b] = aux;
}
/**
 * selection_sort - selection sort algo
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, min;
for (i = 0; i < size - 1; i++)
{
min = i;
for (j = i + 1; j < size; j++)
if (array[min] > array[j])
min = j;
if (min != i)
{
swap(array, min, i);
print_array(array, size);
}
}
}
