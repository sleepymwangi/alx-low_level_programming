#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry and initialization
 * Description: assignning random numbers to the variable n
 * Return: 0 for succession
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if ((n % 10) == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else if ((n % 10) < 6 || !(0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
