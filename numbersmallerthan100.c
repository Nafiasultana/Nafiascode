#include<stdio.h>
int main()
{
int number;
printf("Enter an integer number\n");
scanf("%d",&number);

if(number<100)
printf("The number is smaller than 100\n\n");
else
printf("The number contains more than two digits\n");
return 0;
}
