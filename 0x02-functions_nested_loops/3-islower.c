#include "main.h"
/**
*_islower - prints lowercase character.
*
*@c: The character in ASCII code
*
*Return: 1 if character is lowercase,o otherwise.
*/
int _islower(intc)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
