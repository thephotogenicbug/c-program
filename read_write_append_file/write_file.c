// write a file

#include <stdio.h>

int main(){

 FILE *fp;

 //fp = fopen("test.txt","w");
 fp = fopen("test.txt","a");

 fprintf(fp, " Naveen Kumar \n");

 fclose(fp);

 return 0;
}
