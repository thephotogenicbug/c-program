#include <stdio.h>

int main(){

 int a = 10;

 int *p, *r;

 p = &a;

 r = p + 1;

 printf("\n Size of Integer : %d",sizeof(a));

  printf("\n P Value : %d",p);

  printf("\n R Value : %d",r);

 return 0;
}
