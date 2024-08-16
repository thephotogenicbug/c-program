#include <stdio.h>

int main(){

 int i = 0, number ;

 printf("\n Enter the Limit : ");

 scanf("%d",&number);

 do{

 printf("\n %d", i);

 i = i + 2;

 }while( i <= number);

 return 0;
}
