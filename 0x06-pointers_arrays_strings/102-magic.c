#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

/**
* write your lone of code here ..
* - you are not alowed to use a 
* - you are not alowed to modify p
* - only one statement
* - you are not allowed to code anything else than this line of code
*/
printf("n    = %p\n", &n);
printf("a[0] = %p\n", &a[0]);
printf("a[1] = %p\n", &a[1]);
printf("a[2] = %p\n", &a[2]);
printf("p    =%p\n", (p + 5));
printf("a[3] = %p\n", &a[3]);
*(p + 5) = 98;
/*.....so that this prints 98\n */
printf("*a[2] = %d\n", a[2]);
return (0);
}
