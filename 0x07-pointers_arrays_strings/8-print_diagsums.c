#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @y: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *y, int size)
{
	int sum1, sum2, z;

	sum1 = 0;
	sum2 = 0;

	for (z = 0; z < size; z++)
	{
		sum1 = sum1 + y[z * size + z];
	}

	for (z = size - 1; z >= 0; z--)
	{
		sum2 += y[z * size + (size - z - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
