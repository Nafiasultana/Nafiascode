#include<stdio.h>
#define PI 3.1416
int main()
{
float radius,area;
printf("Enter the radius of circle:");
scanf("%f",&radius);
area=PI*radius*radius;
printf("\n Area of circle:%4f",area);
return 0;
}
