// return without argument function

#include <stdio.h>

int add();

int main(){

 int a = add();

 printf("\n Total : %d",a);

 return 0;
}

int add(){

  int a, b ;

  printf("\n Enter the value of A & B : ");

  scanf("%d%d",&a,&b);

  return a + b;

}
