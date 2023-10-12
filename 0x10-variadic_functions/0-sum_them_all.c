#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all the parameters
 *
 * @n: number of arguments
 * Return: int
 */

int sum_them_all(unsigned int n, ...)
{
	unsigned int i, num, sum = 0;

	va_list nums;

	if (n == 0)
		return (0);
	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(nums, int);
		sum += num;
	}
	return (sum);
}
