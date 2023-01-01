#include "main.h"
#include <unistd.h>

/*
*	_putchar write character to stdio
*	the character to print
*	return on sucess is 1
*	on failure -1 is returned
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
