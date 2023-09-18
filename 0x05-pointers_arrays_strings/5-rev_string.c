#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int l;
	int n;
	char tmp;

	l = 0;
	n = 0;

	while (s[l])
	{
		l++;
	}

	while (n < l / 2)
	{
		tmp = s[n];
		s[n] = s[l - 1 - n];
		s[l - 1 - n] = tmp;
		n++;
	}
}
