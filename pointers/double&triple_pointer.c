#include <stdio.h>

int main()
{

    int a = 10, *p;
    int **q; // Double pointer or pointer to pointer
    int ***r; // triple pointer

    p = &a; // address of a

    printf("\n Value of A    : %d",a);
    printf("\n Address of A    : %d",&a);

    printf("\n Value of P    : %d",p);
    printf("\n Address of P    : %d",&p);

    printf("\n Dereferencing of *P    : %d",*p);

    printf("\n ------------------------------ ");

    q = &p;

    printf("\n Value of P    : %d",p);
    printf("\n Address of P    : %d",&p);

    printf("\n Value of Q    : %d",q);
    printf("\n Address of Q    : %d",&q);

    printf("\n Dereferencing of **Q   : %d",**q);

    printf("\n ------------------------------ ");

    r = &q;

    printf("\n Value of Q    : %d",q);
    printf("\n Address of Q    : %d",&q);

    printf("\n Value of R    : %d",r);
    printf("\n Address of R    : %d",&r);

    printf("\n Dereferencing of ***R   : %d",***r);

    printf("\n ------------------------------ ");






    return 0;
}
