/**
 * factorial - function that returns the factorial of a given number
 * @n: number input
 * Return: -1 if n > 0 ,factorial of the number
 */

#include "main.h"

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
