#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Entry point
  *Description: 'the last digit'
  *Return: Always 0 (Success)
**/
int main(void)
{
	int n;
	int td;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	td = n % 10;
	if (td > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, td);
	}
	else if (td == 0)
	{
		printf("Last digit of %d is %d and is 0", n, td);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0", n, td);
	}
	return (0);
}

