#include "holberton.h"
/**
  * _strlen_recursion - returns the lenght of a string.
  * @s: string coming
  * Return: lenght of a string
**/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
