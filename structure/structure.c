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


    struct student o ;

    // printf("\n Size of Struct : %d",sizeof(o));
    // printf("\n Size of Char : %d",sizeof(char));
    // printf("\n Size of Int : %d",sizeof(int));
    // printf("\n Size of Float : %d",sizeof(float));

    o.name = "Naveen Kumar";
    o.age = 27;
    o.percentage = 70.3;

    printf("\n Name : %s",o.name);
    printf("\n Age : %d",o.age);
    printf("\n Percentage : %f",o.percentage);


    return 0;
}
