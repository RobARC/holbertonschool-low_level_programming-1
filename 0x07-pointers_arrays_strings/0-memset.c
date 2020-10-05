#include "holberton.h"
/**
  * _memset - Fills memory with a constant byte
  * @s: string
  * @b: constant byte or character
  * @n: numbert of bytes
  * Return:  pointer to the memory area s
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
