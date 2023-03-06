/**
 * main - starting point
 *
 * Return: 0 success
 */

#include <unistd.h>

int _putchar(char c)
{
	return(write(1, &c, 1));
}
