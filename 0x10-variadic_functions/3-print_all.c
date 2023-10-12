#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 *
 * @format: type of argument
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char *str, *separator = "";
	va_list words;
	int i = 0;

	va_start(words, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(words, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(words, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(words, double));
				break;
			case 's':
				str = va_arg(words, char *);
				if (str == NULL)
					printf("(nil)");
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(words);
	printf("\n");
}
