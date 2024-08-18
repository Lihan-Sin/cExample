#include <stdio.h>
int main()
{
    float C, F;
    printf("Enter temparature in Celcius :");
    scanf("%f", &C);
    F = 9 * C/5+32;
    printf("Temparature in Fahernheit is: %2.f", F);
    return 0;
}