// no return with argument function

// function declaration
// function definition
// function calling

#include <stdio.h>

// function declaration
void add(int,int);

int main(){

 int a, b;

 printf("\n Enter the value of A & B : ");

 scanf("%d%d", &a,&b);


 // function calling
 add(a,b); // actual parameters


 return 0;
}

// function definition
void add(int a , int b){ // formal parameter

  int c;

  c = a + b;

  printf("\n Total : %d",c);

}

