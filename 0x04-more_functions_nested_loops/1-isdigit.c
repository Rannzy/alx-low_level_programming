#include "main.h"

/**
 * _isdigit - checks the parameter of number given
 * @c: input number
 * Return: 1 if number is between (0 to 9), 0 otherwise
 */
int _isdigit(int c)
{
	if(c >= 48 && c <=57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

