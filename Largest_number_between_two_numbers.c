#include <stdio.h>
int main()
{
int x, y;
printf("Enter two integer numbers: ");
scanf("%d%d", &x, &y);
if (x>y)
printf("The Largest Number is= %d", x);
else
printf("The Largest Number is= %d", y);
return 0;
}