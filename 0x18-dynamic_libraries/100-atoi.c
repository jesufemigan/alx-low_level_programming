#include "main.h"

/**
 * _atoi - a fucntion
 *
 * @s: pointer
 *
 * Return: int
 */

int _atoi(char *s)
{
	int result = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
	}
	return (result);
}
