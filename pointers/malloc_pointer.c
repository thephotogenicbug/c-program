// malloc in pointers
#include <stdio.h>
#include <stdlib.h>
int main(){

 // void* malloc(size_t size) // memory allocation


 int i, limit;

 printf("\n Enter the limit : ");

 scanf("%d",&limit);

 int *ptr = (int *)malloc(limit*sizeof(int));

 if(ptr == NULL){
    printf("\n Memory not available");
    exit(1);
 }

 for(i = 0; i < limit; i++){

    printf("Enter a Integer : ");
    scanf("%d",&ptr+i);
 }

 for(i = 0; i < limit; i++){

    printf("%d  ",*(ptr+i)); //
 }



 return 0;
}
