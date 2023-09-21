#include "main.h"
/**
  * rev_string - function that print a string in reverse
  * @s: pointer pointing to the string
  * Return: 0
  */

void rev_string(char *s)
{
	int length, w, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		;
	w = 0;
	half = length / 2;

	while (half--)
	{
		temp = s[length - w - 1];
		s[length - w - 1] = s[w];
		s[w] = temp;
		w++;
	}
}
