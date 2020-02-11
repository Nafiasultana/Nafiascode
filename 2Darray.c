#include<stdio.h>
int main()
{
int a[20][20],temp[20][20],i,j,r,c;
printf("Enter row:");scanf("%d",&r);
printf("Enter colum:");scanf("%d",&c);
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            temp[j][i]=a[i][j];
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
           a[i][j]=temp[i][j];
        }
    }
    printf("\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;J++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
return 0;
}
