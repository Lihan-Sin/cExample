#include <stdio.h>
int main()
{
int s;
printf("\n Enter your subject mark: ");
scanf("%d", &s);
if ((s >= 80) && (s <=100))
printf("\n your grade is A+");
else if((s >= 70) && (s <= 80))
printf("\n your grade is A");
else if((s >= 60) && (s <= 70))
printf("\n your grade is A-");
else if((s >= 50) && (s <= 60))
printf("\n your grade is B");
else if((s >= 40) && (s <= 50))
printf("\n your grade is C");
else if((s >= 33) && (s <= 40))
printf("\n your grade is D");
else
printf("\n Your grade is F");
return 0;
}