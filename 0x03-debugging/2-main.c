#include "main.h"

int main(void)
{
	int a;
	int b;
	int c;
	int largest;

	a = 10;
	b = -98;
	c = 0;

	largest = largest_number(a, b, c);

	printf("The largest number is %d", largest);

	return (0);

}
