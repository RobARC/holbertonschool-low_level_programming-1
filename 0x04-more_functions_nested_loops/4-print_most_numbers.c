#include "holberton.h"
/**
  * print_numbers - prints the numbers, from 0 to 9
  *
  * Return: void
**/
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 50 || n == 52)
			n++;
		_putchar (n);
	}
	_putchar ('\n');
}
