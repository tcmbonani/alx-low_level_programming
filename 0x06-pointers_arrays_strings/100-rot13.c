#include "main.h"

/**
* rot13 - encoder rot13
* @s: 
* Return: encoded string
*/

char *rot13(char *s)
{
int i;

char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZAbcdefghijklmnopqrstuvwxyz";
char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *ptr = s;

while (*s)
{
for (i = 0; i < 52; i++)
{
if (*s == rot13[i])
{
*s = ROT13[i];
break;
}
}
s++;
}
return (ptr);
}
