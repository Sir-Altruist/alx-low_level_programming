#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: then number
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 10)
	{
		lastdigit *= -1;
	}
	_putchar(lastdigit + '0');
	return (0);
}
