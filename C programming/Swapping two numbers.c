#include <stdio.h>
int main()
{
int a, b, temp;
printf("Enter two integers");
scanf("%d%d", &a, &b);
printf("\nBefore Swapping First variable = %d Second variable = %d", a, b);
temp = a;
a = b;
b = temp;
printf("\nAfter Swapping First variable = %d Second variable = %d", a, b);
return 0;
}
