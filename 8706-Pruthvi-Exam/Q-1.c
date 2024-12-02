//Write a C programing to convert temperature from degree Celsius to degree Fahrenheit.
#include<stdio.h>
void main()
{
    int c;
    float f;

    printf(" Enter the number of Celsius :- ");
    scanf("%d",&c);

    f = (1.8 * c) + 32;

    printf("fahrenheit of the given Celsius = %.2f",f);
}