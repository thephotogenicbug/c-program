#include <stdio.h>

int main(){

  int days;

  printf("\n Enter the days : ");

  scanf("%d", &days);

  if(days >= 1 && days <=5){

    printf("\n Fine Amount Rupees 0.5 Paise");

  }else if( days >= 6 && days <= 10){

      printf("\n Fine Amount Rupees 1");

  }else if( days >= 11 && days <= 29 ){

      printf("\n Fine Amount Rupees 5");

  }else {

    printf("\n Membership canceled");

  }

 return 0;
}
