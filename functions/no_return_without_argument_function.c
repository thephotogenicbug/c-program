// no return without argument function

// function declaration
// function definition
// function calling

#include <stdio.h>

// function declaration
void add();

int main(){

 // function calling
 add();


 return 0;
}

// function definition
void add(){

  int a,b,c;

  printf("\n Enter the value of A & B : ");

  scanf("%d%d",&a,&b);

  c = a + b;

  printf("\n Total : %d",c);

}
