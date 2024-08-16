#include <stdio.h>

int main()
{


    int marks1, marks2, marks3, marks4, marks5, total;

    float average;

    printf("\n Enter 5 Marks : ");

    scanf("%d%d%d%d%d",&marks1, &marks2,&marks3,&marks4,&marks5);

    total = marks1 + marks2 + marks3 + marks4 + marks5;

    average = total / 5.0;

    printf("\n Total : %d", total);

    printf("\n Average : %f", average);

    if( marks1 >= 35 && marks2 >= 35 && marks3 >= 35 && marks4 >= 35 && marks5 >= 35 )
    {

        printf("\n Result : PASS");

        if(average >= 90 && average <= 100)
        {

            printf("\n Grade : A Grade");

        }
        else if( average >= 80 && average <= 89)
        {

            printf("\n Grade : B Grade");

        }
        else if( average >= 70 && average <= 79)
        {

            printf("\n Grade : C Grade");
        }
        else
        {

            printf("\n Grade : D Grade");
        }

    }
    else
    {

        printf("\n Result : FAIL");

        printf("\n Grade : No Grade");

    }

    return 0;
}
