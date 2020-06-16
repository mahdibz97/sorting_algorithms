#include "sort.h"
/**
 * swap - swap
 * @a: point
 * @b: point
 */
void swap(int *a, int *b)
{
int t;

t = *a;
*a = *b;
*b = t;
}
/**
 * partition - part
 * @arr: array
 * @low: low
 * @high: high
 * @size: size
 * Return: dkvj
 */
int partition(int arr[], int low, int high, size_t size)
{
int p = high;
int i = low;
int j;

for (j = low; j < high; j++)
{
if (arr[p] > arr[j])
{
if (j != i)
{
swap(&arr[i], &arr[j]);
print_array(arr, size);
}
i++;
}
}
if (arr[p] < arr[i])
{
swap(&arr[i], &arr[p]);
print_array(arr, size);
}
return (i);
}
/**
 * quicksort - quick sort func
 * @arr: array
 * @low: low
 * @high: high
 * @size: size
 */
void quicksort(int arr[], int low, int high, size_t size)
{
if (low < high)
{
int pi = partition(arr, low, high, size);
quicksort(arr, low, pi - 1, size);
quicksort(arr, pi + 1, high, size);
}
}
/**
 * quick_sort - quick sort algo
 * @array: array
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
if (!array || !size)
return;
quicksort(array, 0, size - 1, size);
}
