#include "main.h"

int last_index(char *s);
int check(char *s, int start, int end, int mod);

/**
 * is_palindrome - check
 *
 * @s: pointer
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * last_index - check last index
 *
 * @s: pointer
 *
 * Return: int
 */

int last_index(char *s)
{
	int n;

	n = 0;

	if (*s > '\0')
	{
		n += last_index(s + 1) + 1;
	}
	return (n);
}

/**
 * check - dksk
 * @s: sds
 * @start: d
 * @end: dkd
 * @mod: sdl
 *
 * Return: int
 */

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (check(s, start + 1, end - 1, mod));
	}
}
