#include "holberton.h"
/**
  * _islower - checks for lowercase character
  *
  * @c: parameter character in ascii code
  * Return: 1 if c is lowercase or 0 otherwise
**/
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
