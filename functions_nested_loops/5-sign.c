#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The integer to check the sign of.
 *
 * Return: 1 if n is positive, 
 *         0 if n is zero, 
 *        -1 if n is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+'); /* Print '+' for positive numbers */
		return (1); /* Return 1 for positive numbers */
	}
	else if (n == 0)
	{
		_putchar('0'); /* Print '0' for zero */
		return (0); /* Return 0 for zero */
	}
	else
	{
		_putchar('-'); /* Print '-' for negative numbers */
		return (-1); /* Return -1 for negative numbers */
	}
}
