#include <stdio.h>

int main()
{

    int a;

    printf("\n Enter the value of A : ");

    scanf("%d", &a);

    if(a < 0)
    {

        printf("%d is Negative Value",a);

    }
    else if(a == 0)
    {

        printf(" The Given Value is 0");
    }
    else if(a > 0)
    {

        printf("%d is Positive Value",a);
    }

    return 0;

}
