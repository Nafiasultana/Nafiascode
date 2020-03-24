//Write a function to find that the entered year is leap year or not//
#include<stdio.h>
void funtion(int year);
main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    funtion(year);

}
void funtion(int year)
{
    if(year%4 == 0)
    {
        if( year%100 == 0)
        {

            if ( year%400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year );
    }
    else
        printf("%d is not a leap year.", year);


}
