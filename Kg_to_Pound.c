#include <stdio.h>
int main()
{
    float pound = 2.20462, kg;
    printf("Enter weight in Kilograms: ");
    scanf("%f", & kg);
    printf("\nWeight in pounds is: %f\n", (kg*pound));
    return 0;
}