// recursion function
#include <stdio.h>

// 5!

// 1*2*3*4*5 // factorial

int factorial(int x){ // 5

  if(x <= 1){

    return 1;

  }

  return x * factorial (x - 1); // 5 * 4 * 3 * 2 * 1

}

int main(){


 printf("\n Factorial : %d", factorial(5));


 return 0;
}
