#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strigns
 *
 * @separator: strign to be printed between strings
 * @n: number of strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *word;
	va_list words;

	va_start(words, n);
	for (i = 0; i < n; i++)
	{
		word = va_arg(words, char *);

		if (word == NULL)
			printf("(nil)");
		printf("%s", word);

		if (i != (n - 1))
			printf("%s", separator ? separator : "");
	}

	va_end(words);
	printf("\n");
}
