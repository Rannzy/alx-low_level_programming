#include "main.h"

/**
*_isalpha - prints letter characters
*
*@c: The character in ASCII code
*
*Return: 1 if is a letter. 0 otherwise.
*/
int _isalpha(int c)
{
	if((c >= 97 && c <= 122 || (c >=65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
