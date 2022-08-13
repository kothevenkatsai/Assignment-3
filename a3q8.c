//8. Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
void main()
{
    do
    {
    int year;
    scanf("%d",&year);
    if(year%4!=0)
        printf("not leap year");
    else if(year%4==0 && year%100==0 && year%400!=0)
        printf("not leap year");
    else
        printf("leap year");
    }while(1);
}
