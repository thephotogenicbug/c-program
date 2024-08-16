#include <stdio.h>

int main(){

 int number, a , digit1 , digit2 , digit3;

 printf("\n Enter three digit number : ");

 scanf("%d",&number); // 153

 digit3 = number % 10; // 3

 a = number / 10; // 15

 digit2 = a % 10; // 5

 digit1 = a / 10; // 1

// printf("%d %d %d",digit1, digit2 , digit3);

 a = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3);

 if(a == number){

    printf(" \n %d is an armstrong number", number);
 }else {

    printf("\n %d is not  an armstrong number", number);
 }





 return 0;
}
