#include <stdio.h>

int main(){

  char name[10];
  int age;

  printf("\n Enter Your Name : ");

  scanf("%s",&name);

  printf("\n Enter the age : ");

  scanf("%d",&age);

  if(age >= 18){

    printf("\n %s age is %d Eligible for vote",name,age);
  }

 return 0;
}
