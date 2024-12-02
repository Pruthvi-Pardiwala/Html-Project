// Write a C program to read roll no,name and marks of three subjects and
// calculate the total and persentage and give grade.
#include<stdio.h>
void main()
{
    int roll_number,math,sci,eng,total;
    float avg;
    char name[20];

    printf("Enter the name :- ");
    scanf("%s",&name);
    
    printf("Enter the Roll number :- ");
    scanf("%d",&roll_number);

    printf("Enter the marks of Maths :- ");
    scanf("%d",&math);

    printf("Enter the marks of Science :- ");
    scanf("%d",&sci);

    printf("Enter the marks of English :- ");
    scanf("%d",&eng);

    total = math + sci + eng ;

    avg = total/3;

    printf("/n Total :- %d",total);
    printf("/n Total :- %.2f",avg);

    if ( avg >= 90 )
    {
        printf("/n Grade = 'A' ");
    }
    else if ( avg >= 80)
    {
        printf("/n Grade = 'B' ");
    }
    else if ( avg >= 70)
    {
        printf("/n Grade = 'C' ");
    }

    else if ( avg >= 60)
    {
        printf("/n Grade = 'D' ");
    }
    else if ( avg >= 50)
    {
        printf("/n Grade = 'E' ");
    }
    else 
    {
        printf("/n Grade = 'F' ");
    }
}