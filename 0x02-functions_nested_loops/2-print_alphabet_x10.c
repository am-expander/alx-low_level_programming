#include "main.h"
/**
* print_alphabet_x10 - Prints the alphabeet in lowercase 10 times,
* followed by a new line
* Description: This function prints the lowercase alphabet ten times,
* each followed by a new line
* Return: Always 0
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
