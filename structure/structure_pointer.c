
// Access members of structure using pointer

#include <stdio.h>

struct student
{

    char *name;
    int age;
    float percentage;

};

int main()
{

    struct student o = {"Naveen Kumar",27,70.3} ;

    struct student *ptr = &o;


    printf("\n Name : %s",ptr->name);
    printf("\n Age : %d",ptr->age);
    printf("\n Percentage : %f",ptr->percentage);

    return 0;
}
