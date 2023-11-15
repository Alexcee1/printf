#include "main.h"
/**
 * print_c - this prints a character.
 * @val: the arguments.
 * Return: the integer.
 */
int print_c(va_list val)
{
char s;
s = va_arg(val, int);
_putchar(s);
return (1);
}
