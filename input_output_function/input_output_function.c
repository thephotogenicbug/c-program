// Input and output functions
#include <stdio.h>

int main()
{

    int a;
    char c;
    char name[50];
    printf("\n Enter the value of A : ");

    scanf("%d",&a);

    printf("\n A : %d",a);

    printf("\n Enter the Character : ");
    fflush(stdin);
    c = getchar();
    putchar(c);

    printf("\n Enter the Name : ");
    fflush(stdin);
    gets(name);
    puts(name);

    return 0;
}
