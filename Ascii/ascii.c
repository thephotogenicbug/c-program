
#include <stdio.h>

int main(){

 int i;

 char a = 'a';

 for(i = 0; i<=255; i++){

    printf("\n%d : %c",i,i);
 }

  printf("\n%c : %c",a, a - 32);

 // 48 - 57 -> 0 - 9

 // 65 - 90 -> A - Z

 // 97 - 122 -> a - z

 // 32 -> space

return 0;
}
