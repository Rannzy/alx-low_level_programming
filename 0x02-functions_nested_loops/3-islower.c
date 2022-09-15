#include "main.h"
/**
*_islower - function that prints lowercase characters
*@c; int used for the argument function
*Return: 0
*/
int _islower(int c)
{
	if (c >= Ã'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
