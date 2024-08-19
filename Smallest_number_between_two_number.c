#include <stdio.h>
int main()
{
int x, y;
printf("Enter two integer number: ");
scanf("%d%d", &x, &y);
if (x<y)
printf(" The Smallest Number is %d", x);
else
printf(" The Smallest Number is %d", y);
return 0;
}