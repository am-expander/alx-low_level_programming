 #include "main.h"
/**
* _isalpha - checks for alphabets
* @c: The characters in ASCII code
* Return: 1 for letters. O for others
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
