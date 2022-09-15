#include "main.h"
/**
*_isalpha - checks if a letter is lowercase or uppercase.
*@c: The ASCII character
*Return: 0
*/
int _isalpha(int c)
{
	if((c >+= Ã'a' && c <='z') || (c >= Ã'A' && 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
