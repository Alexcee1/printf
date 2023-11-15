#include "main.h"
/**
 * _strlen - this finds the lenght of a string.
 * @s: the string
 * Return:the integer.
 */
int _strlen(char *s)
{
int c;
for (c = 0; s[c] != 0; c++)
;
return (c);
}
/**
 * _strlenc - this finds length of a string but for constant characters
 * @s: the string
 * Return: the integer
 */
int _strlenc(const char *s)
{
int c;
for (c = 0; s[c] != 0; c++)
;
return (c);
}
