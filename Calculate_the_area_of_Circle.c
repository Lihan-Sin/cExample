#include <stdio.h>
int main()
{
float radius, area;
printf("Enter radius of the circle (in cm):");
scanf("%f", &radius);
area = (3.1416)*(radius*radius);
printf("Area of the circle is: %.3f square cm", area);
return 0;
}