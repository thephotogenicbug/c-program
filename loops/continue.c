
#include <stdio.h>

int main(){

 int i, limit, number, sum = 0;

 printf("\n Enter the Limit : ");

 scanf("%d",&limit);



 for(i = 1; i<=limit; i++){

    printf("\n Enter the Number : ");

    scanf("%d", &number);

    if(number == 0){
        continue;
    }

   sum = sum + number;

 }
 printf("\n Total : %d",sum);

 return 0;
}
