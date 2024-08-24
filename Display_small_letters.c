#include <stdio.h>
int main()
{
    char ch = 'a';
    do
    {
        printf("\t%c", ch);
        ch++;
    } while ((ch>='a')&&(ch<='z'));
    return 0;    
}