#include <stdio.h>
int main()
{
    float inch, cm;
    printf("Enter the length in inch: ");
    scanf("%f", &inch);
    cm = 2.54 * inch;
    printf("\nThe length in centimeter is:%.2f", cm);
    return 0;
}