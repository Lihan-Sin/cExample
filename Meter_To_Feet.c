#include <stdio.h>
int main()
{
    float meter, feet;
    printf("Enter the length in meter: ");
    scanf("%f", &meter);
    feet = 3.28*meter;
    printf("\nThe length in feet is:%.2f", feet);
    return 0;
}