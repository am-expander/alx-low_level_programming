#include "main.h"
/**
  * _islower - Return 1 if the input is a lowercase character,
  * otherwise it should return 0
  *
  * @c: The character in ASCII code
  *
  * Return: 1 for lowercase character, O for the others.
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
