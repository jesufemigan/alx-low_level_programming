#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: string to be printed between numbers
 * @n: count of numbers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list nums;

	va_start(nums, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}

	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			num = va_arg(nums, int);
			printf("%d", num);

			if (i != (n - 1))
				printf("%s", separator);
		}

		va_end(nums);
		printf("\n");
	}
}
