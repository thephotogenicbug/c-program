// shop management using structure and union

#include <stdio.h>

// Book -> Name, Author, Price
// Mobile -> Model, Price, Color

struct store
{

    double price;
    char *name;
    char *author;
    char *model;
    char *color;

} o;

struct store2
{

    double price;

    union
    {

        struct
        {

            char *name;
            char *author;

        } book;

        struct
        {

            char *model;
            char *color;

        } mobile;

    } product;

} o2;

int main()
{
    o.model = "HMD";
    o.color = "RED";
    o.price = 3550.00;
    printf("\nSize : %d", sizeof(struct store));
    printf("\nSize : %d", sizeof(struct store2));

    o2.product.mobile.model = "HMD";
    o2.product.mobile.color = "RED";
    o2.price = 3600.00;

    return 0;
}
