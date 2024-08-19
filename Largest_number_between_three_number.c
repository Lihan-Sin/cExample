#include <stdio.h>
int main()
{
int x, y, z;
printf("Input three integer numbers: ");
scanf("%d%d%d", &x, &y, &z);
if (x>y)
{
   if (x>z)
   printf("\n %d is the largest number", x);
   else
   printf("\n %d is the largest number", z); 
}
else
{
    if (y>z)
    printf("\n %d is the largest number", y);
    else
    printf("\n %d is the largest number", z);
}
return 0;
}