#include <stdio.h>
int main()
{
    float a, b, aveg;
    printf("Enter two number: ");
    scanf("%f%f", &a, &b);
    aveg = (a + b)/ 2;
    printf("The average of two number is: %.2f", aveg);
    return 0;
}