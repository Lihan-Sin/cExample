#include<stdio.h>
int main()
{
int i, N;
long Sum = 0;
printf("Enter last number of the series: ");
scanf("%d", &N);
for (i = 1; i<=N; i = i + 1)
{
    Sum = Sum + i;
}
printf("\n SUM OF THE SERIES IS:%ld", Sum);
return 0;
}