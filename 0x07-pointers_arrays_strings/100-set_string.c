#include "main.h"
/**
 * set_string - a function that sets the value of a pointer to char
 * @s: pointer address
 * @to: target address
 * Return: 0 always
 */
void set_string(char **s, char *to)
{
	*s = to;
}
