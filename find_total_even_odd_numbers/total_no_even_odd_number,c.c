// Program to find total no of even and odd numbers
// in an array in c
#include <stdio.h>

int main()
{

    int a[100], i, limit,even = 0, odd = 0;

    printf("\n Enter the Limit : ");

    scanf("%d",&limit);

    for(i = 0; i < limit; i++)
    {

        printf("\n Enter the value : ");
        scanf("%d",&a[i]);

        a[i] % 2 == 0 ? even++ : odd++;
    }
    printf("\n Total even no is : %d",even);
    printf("\n Total odd no is : %d",odd);

    return 0;
}
