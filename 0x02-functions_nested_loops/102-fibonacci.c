#include <stdio.h>

/**
* main - Prints the first 52 fibonacci numbers
*
* Return: Nothing!
*/

int main(void)
{
int i = 0;
int l = 0 ,n;
long j = l, k = 2;

while (i < 50)
{
if (i == 0)
printf("%ld", j);
else if (i == l)
printf(", %ld", k);
else
{
k += j;
j = k - j;
printf(", %ld", k);
}
l++;
}
printf("\n");
return (0);

}
