#include "main.h"
#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d", a, b);
	return (0);
}
