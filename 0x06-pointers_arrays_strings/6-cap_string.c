#include "main.h"
/**
 * cap_string - capitalizes all words of a strig
 * @s: input string
 * Return: pointer to dest
 */

char *cap_string(char *s)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a'&& *(s + I) , + 'z ')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <=12; j++)
				{
					if (a[j] == *(s + i  - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s) ;
}

