#include <stdio.h>

/*
*main print reverse of lower alphabet'
*retun success
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}

