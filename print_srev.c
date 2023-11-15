#include "main.h"
/**
 * print_revs - this function that prints a string in reverse
 * @args: type structure va_arg where is allocated printf arguments
 *
 * Return:  string
 */
int print_revs(va_list args)
{
char *s = va_arg(args, char*);
int i;
int j = 0;
if (s == NULL)
s = "(null)";
while (s[j] != '\0')
j++;
for (i = j - 1; i >= 0; i--)
_putchar(s[i]);
return (j);
}