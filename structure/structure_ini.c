// Initializing & accessing the structure members

#include <stdio.h>

struct student
{

    char *name;
    int age;
    float percentage;

};

int main()
{

    struct student o={"Naveen Kumar",27,70.3} ;


    printf("\n Name : %s",o.name);
    printf("\n Age : %d",o.age);
    printf("\n Percentage : %f",o.percentage);

    return 0;
}
