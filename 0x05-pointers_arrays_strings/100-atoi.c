#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - program that convert a string to an integer
*
* Return: the int converted from the string
*/


int _atoi(char *s)
{
int i = 1;
unsigned int num = 0;
do {
if (*s == '-')
i *= -1;
else if (*s >= '0' && *s <= '9')
num = num * 10 + (*s - '0');
else if (num > 0)
break;
} while (*s++);
return (num *i);
}
