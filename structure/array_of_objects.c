
// Structure in c
#include <stdio.h>

struct student
{

    char *name;
    int age;
    float percentage;

};

int main()
{

    struct student o[2];

    o[0].name = "Naveen Kumar";
    o[0].age = 27;
    o[0].percentage = 70.3;

    o[1].name = "Kumar";
    o[1].age = 28;
    o[1].percentage = 78.3;

    printf("\n ------------------------------------------------");

    printf("\n Name : %s",o[0].name);
    printf("\n Age : %d",o[0].age);
    printf("\n Percentage : %f",o[0].percentage);

    printf("\n ------------------------------------------------");


    printf("\n Name : %s",o[1].name);
    printf("\n Age : %d",o[1].age);
    printf("\n Percentage : %f",o[1].percentage);

    printf("\n ------------------------------------------------\n\n");


    return 0;
}
