//Find the sum of all even numbers between 1 to n .using do while loop.
#include<stdio.h>
void main()
{
    int i=0,n,sum=0;

    printf("Enter the number :- ");
    scanf("%d",&n);
    do
    {
        if( i % 2 ==0)
        {
            sum = sum + i ;
        }
        i++;
    } while (i<=n);
    printf("Sum of the all the given even number is :- %d",sum);
    
}