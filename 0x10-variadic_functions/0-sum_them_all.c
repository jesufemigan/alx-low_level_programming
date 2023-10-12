#include <stdargs.h>
#include <stdio.h>

/**
 * sum_them-all - sum all of its parentheses
 * 
 * @n: number of arguments
 * 
 * Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
        va_list nums;

        int sums = 0;
        int i;

        if (n == 0)
                return (0);
        
        va_start(nums, n);

        for (i = 0; i < n; i++)
        {
                num = va_args(nums, int);
                sum += num;
        }
        va_end(num);
        return (sum);
}