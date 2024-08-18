#include <stdio.h>
int main()
{
    int a, b, sum, sub, mul, div;
    printf("Enter the two number: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a /b;
    printf("\nThe sum of two numbers is:%d", sum); 
    printf("\nThe sub of two numbers is:%d", sub); 
    printf("\nThe mul of two numbers is:%d", mul); 
    printf("\nThe div of two numbers is:%d", div);
    return 0;
}