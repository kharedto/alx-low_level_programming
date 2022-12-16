#include <stdio.h>

/*
*print all base 10 digit without using var char but use putchar function
*return success
*/

int main(void) /*main header function*/
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
