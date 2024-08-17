// call by reference function
#include <stdio.h>

void swap(int *x, int *y)
{

   int temp;

   temp = *x;

   *x = *y;

   *y = temp;


}

int main()
{

    int a,b;

    printf("\n Enter the value of A & B : ");

    scanf("%d%d",&a,&b);

    printf("\n Before Swap A : %d | B : %d",a,b);

    swap(&a,&b);

    printf("\n After Swap A : %d | B : %d",a,b);

    return 0;
}
