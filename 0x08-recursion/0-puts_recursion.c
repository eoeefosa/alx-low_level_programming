#include "main.h"
/**
 * _puts_recursion  -print a string to console
 * @s: pointer to a string  to print
 * return :void(always)
 */

void _puts_recursion(char *s)
{
	if(*s=='\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s+1);
	}
}
