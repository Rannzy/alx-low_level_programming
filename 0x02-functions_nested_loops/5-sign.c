#include "main.h"

/**
 * print_sign - determines if number is greater,equal or less than zero.
 * @n: int that will be used for argument of function
 *
 * Return: 1 if greater than zero, 0 if n is zero, -1 if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

