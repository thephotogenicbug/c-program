#include <stdio.h>

int main()
{
    int choice, quantity;

    printf("\n\tMenu Card");
    printf("\n\t\t1.Coffee Rs:15");
    printf("\n\t\t2.Tea Rs:10");
    printf("\n\t\t3.Cold Coffee Rs:25");
    printf("\n\t\t4.Milk Shake Rs:50");

    printf("\n\n Enter Your choice : ");

    scanf("%d", &choice);

    switch(choice){

     case 1 :

      printf("\n You have selected coffee");
      printf("\n Enter the quantity : ");
      scanf("%d",&quantity);
      printf("\n Total Amount : %d", (quantity * 15));
      break;

       case 2 :

      printf("\n You have selected Tea");
      printf("\n Enter the quantity : ");
      scanf("%d",&quantity);
      printf("\n Total Amount : %d", (quantity * 10));
      break;

       case 3 :

      printf("\n You have selected cold coffee");
      printf("\n Enter the quantity : ");
      scanf("%d",&quantity);
      printf("\n Total Amount : %d", (quantity * 25));
      break;

       case 4 :

      printf("\n You have selected milk shake");
      printf("\n Enter the quantity : ");
      scanf("%d",&quantity);
      printf("\n Total Amount : %d", (quantity * 50));
      break;

       default :

         printf("\n Invalid product selection");

    }

    return 0;
}
