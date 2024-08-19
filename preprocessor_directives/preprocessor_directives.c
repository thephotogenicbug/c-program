// Preprocessor Directives in c
#include <stdio.h>
#define LIMIT 5
#define MSG "Naveen Kumar"

#define custom_message(a)\
printf("\n" #a "Learning cprogramming\n\n")


int main()
{


    for(int i = 0; i < LIMIT; i++)
    {

        printf("\n %d",i);

    }

    printf("\n%s", MSG);
    custom_message("Hey i am");

    printf("\n File Name %s", __FILE__);
    printf("\n Time %s", __TIME__);
    printf("\n Line %d", __LINE__);

    return 0;
}
