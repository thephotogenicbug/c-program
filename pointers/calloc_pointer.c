// calloc in pointers
#include <stdio.h>
#include <stdlib.h>

int main()
{

// void* calloc(size_t n, size_t size)

    int i,n;

    printf("\n Enter the limit : ");

    scanf("%d",&n);

    int *ptr=(int *)calloc(n,sizeof(int));

    if(ptr == NULL)
    {

        printf("\n Memory not available");
        exit(1);
    }

    for(i = 0; i < n; i++)
    {

        printf("Enter a integer : ");
        scanf("%d",ptr+i);
    }

    for(i = 0; i < n; i++)
    {

        printf("\n%d : %d ", &ptr+i, *(ptr+i));
    }

    return 0;
}
