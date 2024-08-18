#include <stdio.h>

int main()
{

    int a[] = {10,20,30,40,50};

    int *p;
    // {10,20,30,40,50}
    p = &a;

    printf("\n Address of A : %d",&a);
    printf("\n Size of Integer : %d",sizeof(int));
    printf("\n Size of A : %d",sizeof(a));
    printf("\n Length of A : %d",sizeof(a) / sizeof(int));

    printf("\n Value of P : %d",p);

    p++;

    printf("\n Value of P : %d",p);
    printf("\n Dereferencing of *P : %d",*p);



    printf("\n Value of *++P : %d",*++p);
    printf("\n Dereferencing of ++*P : %d",++*p);

    return 0;

}
