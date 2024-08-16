
#include <stdio.h>

int main(){

 int number;

 printf("\n Enter the Number : ");

 scanf("%d", &number);

 if(number % 2 == 0){

    printf("\n %d is Even Number",number);
 }else {
       printf("\n %d is Odd Number",number);
 }

 return 0;
}
