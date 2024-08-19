#include <stdio.h>
int main()
{
int a;
printf("Insert a number: ");
scanf("%d", &a);
if (a> 0)
printf("\n The number %d is positive\n", a);
else if (a<0)
printf("\n The number %d is negative\n", a);
else
printf("\n The number %d is Non negative\n", a);
return 0;
}