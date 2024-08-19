// Local and global scope structure in c

#include <stdio.h>


// global scope
struct student
{

    char *name;
    int age;
    float per;

};

void total ()
{
    // local scope
    struct marks
    {

        int m1,m2,m3;

    } s;

    s.m1 = 50;
    s.m2 = 50;
    s.m3 = 50;

    printf("\n Marks 1 : %d",s.m1);
    printf("\n Marks 2 : %d",s.m2);
    printf("\n Marks 3 : %d",s.m3);

}

int main()
{

    struct student o ;

    o.name = "Naveen Kumar";
    o.age = 27;
    o.per = 70.3;

    printf("\n Name : %s",o.name);
    printf("\n Age : %d",o.age);
    printf("\n Percentage : %f",o.per);

    total();

    return 0;

    // 6 hours 40 mins

}
