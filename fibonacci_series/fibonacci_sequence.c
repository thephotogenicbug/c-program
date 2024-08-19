// C program to display fibonacci sequence
// 0,1,1,2,3,5

#include <stdio.h>

int main(){


 int a = -1, b= 1, c, limit, i;

 printf("\n Enter the limit : ");

 scanf("%d",&limit);

 for(i = 0; i < limit; i++){

    c = a + b; // 0 1 1 2

    a = b;  // 1 0 1

    b = c; // 0 1 1

    printf("\n %d",c);
 }

 return 0;
}
