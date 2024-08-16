#include <stdio.h>

int main(){

 int i , a[100] , limit ;

 printf("\n Enter the Limit : ");

 scanf("%d", &limit);

 for(i = 0; i < limit; i++){

     printf("\n Enter the value : ");

     scanf("%d", &a[i]);

 }

  for(i = 0; i < limit; i++){

     printf("\n %d", a[i]);



 }

 return 0;
}
