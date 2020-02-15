#include<stdio.h>
main()
{
int s,level;
scanf("%d",&s);
if(s>=280)
    printf("Enter the 2nd level\n");
else
    printf("You fail in 1st level\n");
if(s>=400)
    printf("Enter the 3rd level\n");
else
    printf("You fail in 2nd level\n");
if(s>=500)
    printf("Win the 3rd level:'You are the champion'\n");
else
    printf("You fail in last level\n");
return 0;
}
