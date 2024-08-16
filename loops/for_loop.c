#include <stdio.h>

int main(){

 int i , number;

 printf("\n Enter the Limit : ");

 scanf("%d", &number);

 for(i = 1; i <= number; i = i + 2){



    printf("\n %d",i);
 }

 return 0;
}
