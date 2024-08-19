// Union in c
#include <stdio.h>

// User defined data type
// union members share the same memory location
// union size is based in biggest size of a data type

struct demo2
{

    int a;
    char b;


};

union demo
{

    int a; //4
    char b;

}o;

int main()
{

   // printf("\n Integer : %d", sizeof(int));
   // printf("\n Char : %d", sizeof(char));
   // printf("\n Union Size : %d", sizeof(union demo));
   // printf("\n Struct Size : %d", sizeof(struct demo2));

   o.a = 65;

   printf("\n Union A : %d",o.a);
   printf("\n Union B : %c",o.b);


    return 0;
}
