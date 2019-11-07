#include <stdio.h>
#include <stdlib.h>

int main()
{

float in_cm;
char in_inch[4];

printf("Convert Inch to cm: ");
scanf("%s", in_inch);

in_cm = atoi(in_inch)*2.54;

printf("%.2f cm \n", in_cm);

return(0);
}
