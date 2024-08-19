// Program to print multiplication tables in c
#include <stdio.h>

int main(){

  int i, t, limit;

  printf("\n Enter the table : ");

  scanf("%d",&t); // 2 table

   printf("\n Enter the Limit : ");

  scanf("%d",&limit); // 5 times

  for(i = 1; i < limit ; i++){
    printf("\n %d X %d = %d",t,i,(t*i));
  }

 return 0;
}
