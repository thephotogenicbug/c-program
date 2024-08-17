// Static variable

#include <stdio.h>

void display();

int main(){

 display();
 display();
 display();

 return 0;
}

void display(){

 static int x = 1;

 x++;

 printf("\n x : %d",x);

}
