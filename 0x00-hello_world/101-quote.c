#include <unistd.h>

/*
 * main - Entry Point
 *
 * Return : this will return 1 based on the task
 */

int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, sizeof(message) - 1);
	return (1);
}
