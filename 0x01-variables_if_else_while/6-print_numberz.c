#include <stdio.h>

/*
*print all base 10 digit without using var char but use putchar function
*return success
*/

int main(void)
{
	int i = 0;
	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
	

