// typedef in c
#include <stdio.h>

typedef struct student
{

    char *name;
    int age;
    float per;

} student;

int main()
{



    typedef int INTEGER;

    INTEGER a;
    student o;

    a = 100;

    printf("\n A : %d",a);



    o.name = "Naveen Kumar";
    o.age = 27;
    o.per = 70.3;

    printf("\n Name : %s",o.name);
    printf("\n Age : %d",o.age);
    printf("\n Percentage : %f",o.per);


    return 0;
}
