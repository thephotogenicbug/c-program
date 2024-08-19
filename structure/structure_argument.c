
// Structure as function arguments
#include <stdio.h>

struct student
{

    char *name;
    int age;
    float percentage;

};

void display(struct student o)
{

    printf("\n Name : %s",o.name);
    printf("\n Age : %d",o.age);
    printf("\n Percentage : %f",o.percentage);

}

int main()
{


    struct student o = {"Naveen Kumar",27,70.3} ;

    display(o);

    return 0;
}
