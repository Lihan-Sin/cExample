#include <stdio.h>
int main()
{
int x, y, z;
printf("Enter three inteeger numbers: ");
scanf("%d%d%d", &x, &y, &z);
if ((x<y) && (x<z))
printf("\n %d is the smallest number", x);
if ((y<x) && (y<z))
printf("\n %d is the smallest number", y);
if ((z<x) && (z<y))
printf("\n %d is the smallest number", z);
return 0;
} 