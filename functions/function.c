
#include <stdio.h>

void add()
{

    int a,b,c;

    printf("\n Enter the value of A : ");

    scanf("%d",&a);

    printf("\n Enter the value of B : ");

    scanf("%d",&b);

    c = a + b;

    printf("\n Total : %d", c);

}

int main()
{

    int limit, i;

    printf("\n Enter the limit : ");

    scanf("%d",&limit);

    for(i = 0; i < limit; i++ )
    {

        add();
    }



    return 0;
}
