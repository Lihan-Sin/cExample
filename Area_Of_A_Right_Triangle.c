#include <stdio.h>
int main()
{
    float base, height, area;
    printf("Enter base of the triangle (in cm):");
    scanf("%f", &base);
    printf("Enter height of the triangle (in cm):");
    scanf("%f", &height);
    area = (base*height)/2;
    printf("Area of the triangle is: %.3f square cm", area);
    return 0;
}