#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
    char *s = "hello";
    char *f;

    	f = _strchr(s, 'l');
	if (f != NULL)
    	{
        	printf("%s\n", f);
    	}
    	return (0);
}
