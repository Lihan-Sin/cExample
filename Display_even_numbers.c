#include <stdio.h>
int main()
{
int i;
i = 2;
do
{
    printf("\t%d", i);
    i = i + 2;
} while (i<=10);
return 0;
}