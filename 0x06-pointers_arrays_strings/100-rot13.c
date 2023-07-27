#include "main.h"

/**
* rot13 - encoder rot13
* @s: 
* Return: encoded string
*/

{
int i;
int j;
char data1[] = "ABCDEFGHIJKLMNOPQSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == data1[j])
{
s[i] = datarot[j];
break;
}
}
}
return (s);
}
