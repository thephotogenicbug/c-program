#include <stdio.h>
#include <string.h>
int main()
{

// char c[10];

// printf("\n Enter The String : ");

// scanf("%s",c);

//  gets(c);

// printf("%s",c);

    char c[20],a[20];

    char x[10] = {'N', 'A', 'V', 'E', 'E', 'N', '\0' };

    char y[10] = {'K', 'U', 'M', 'A', 'R', '\0' };

    printf("x : %s",x);

    printf("\n Enter The String : ");

    gets(c);

    printf("\nString compare : %d ",strcmp( x, c)); // string compare

    printf("\nLength : %d ",strlen(c)); // string length

    printf("\nReverse : %s ",strrev(c)); // string reverse

    printf("\nUppercase : %s ",strupr(c)); // string uppercase

    printf("\nLowercase : %s ",strlwr(c)); // string lowercase

    printf("\nString copy : %s ",strcpy(a,c)); // string copy

    strcat(x,y);

    printf("\nString concatenation : %s ",x); // string concatination



    return 0;
}
