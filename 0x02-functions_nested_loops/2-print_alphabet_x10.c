#include "main.h"
/**
* print_alphabet_x10 - Prints the alphabet in lowercase 10 times,
* followed by a new line
* Description: This function prints the lowercase alphabet ten times,
* each followed by a new line
* Return: void
*/
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
