#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */

int main(void)

{

	int n;
	int num;


	srand(time(0));

	n = rand() - RAND_MAX / 2;
	num = n % 10;
	printf("Last digit of %d is %d ", n, num);

	if (num > 5)
		{
		printf("and is greater than 5\n");
		}
	else if (num == 0)
		{
		printf("and is 0\n");
		}

	else if (n < 6 &&  n != 0)
		{
		printf("and is less than 6 and not 0\n");
		}

	return (0);

}
