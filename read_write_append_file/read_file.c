// Read a file in c
#include <stdio.h>

// read (r) , write (w) , append (a)

int main(){

 FILE *fp;

 char c;

 fp = fopen("test.txt","r");

 if(fp == NULL){

    printf("\n File cannot open or file not found..");
 }

 while(1){

    c = fgetc(fp);
    if(c == EOF)
        break;
    printf("%c",c);

 }

 return 0;
}
