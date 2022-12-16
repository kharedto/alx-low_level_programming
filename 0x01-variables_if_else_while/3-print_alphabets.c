#include <stdio.h>

/*
*main - print upper and lower case character
*return success
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while(ch <= 'Z')
	{
		putchar(CH);
		CH++
	}
putchar('\n');
return (0);
}

