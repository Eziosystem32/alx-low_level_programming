#include "main.h"
/**
 * _memset - fill memory with a constat byte
 * @s:char
 * @b:char
 * @n:unsigned int
 * Retern:char
 */
chr *_memset(char *s, char b, unsighned int n)
{
	unsighned int i;
	for(i = 0; i < n; i++)
		s[i] = b;
	return(s);
}
