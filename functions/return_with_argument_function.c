// return with argument function

#include <stdio.h>

int add(int,int);

int main()
{

    int a,b;

    printf("\n Enter the value of A & B : ");

    scanf("%d%d",&a,&b);

    a = add(a,b);

    printf("\n Total : %d",a);


    return 0;
}


int add(int a, int b){


  return a + b;


}
