#include <stdlib.h>
#include <stdio.h>

/*
*main - print alpabet in lower case witout q and e
*Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	
	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
		putchar (ch);
		}
	ch++;
	}

	putchar('\n');
	return (0);
}
