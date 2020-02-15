#include<stdio.h>
int main()
{
int C,F;
printf("Enter Fahrenheit temperature:");
scanf("%d",&F);
C=(F-32)*5/9;
printf("Centigrade temperature is:%d",C);
return 0;
}
