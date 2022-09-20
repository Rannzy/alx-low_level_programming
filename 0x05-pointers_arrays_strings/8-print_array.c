#include "main.h"
#include <stdio.h> 

/**
 * print_array - print the n elements
 * @a: input array
 * @n: input n elements
 * Return: none
 */
void print_array(int *a, int n)
{
	int i = 0;

	for(; i < n; i++)
	{
		printf("%d", *(a + i));
		if(i != (n - 1))
			printf(", ");
	}
	printf("\n");
}

