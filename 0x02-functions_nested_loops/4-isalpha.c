#include "main.h"
/**
* _isalpha - return 1 if the input is a letter, another cases, return 0
* @c: The characters in ASCII code
* Return: 1 for letters. O for others
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
