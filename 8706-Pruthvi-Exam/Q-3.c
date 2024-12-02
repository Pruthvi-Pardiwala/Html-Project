//Cheak whether a year is a leap year or not.
#include<stdio.h>
void main()
{
    int year;

    printf(" Enter the year :- ");
    scanf("%d",&year);
    
    if( year % 4 )
    {
        printf("The given year is Leap Year");
    }
    else
    {
        printf("The given year is not a leap year");
    }
}