// c program to print greatest of n numbers in an array

#include <stdio.h>

int main()
{

    int i, limit, temp, array[100];

    printf("\n Enter the limit : ");

    scanf("%d",&limit);

    for(i = 0; i < limit; i++)
    {

        printf("\n Enter the value : ");

        scanf("%d",&array[i]);
    }

    temp = array[0];

    for(i = 0; i < limit; i++)
    {

        if(temp < array[i])

            temp = array[i];

    }

    printf("\n The Greatest Number is %d",temp);
    return 0;
}
