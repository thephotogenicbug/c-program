
#include <stdio.h>

int main()
{
    int choice, quantity, i, net = 0;
     naveen:
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
      net = net + (quantity * 15);
      break;

       case 2 :

      printf("\n You have selected Tea");
      printf("\n Enter the quantity : ");
      scanf("%d",&quantity);
      net = net + (quantity * 10);
      break;

       case 3 :

      printf("\n You have selected cold coffee");
      printf("\n Enter the quantity : ");
      scanf("%d",&quantity);
      net = net + (quantity * 25);
      break;

       case 4 :

      printf("\n You have selected milk shake");
      printf("\n Enter the quantity : ");
      scanf("%d",&quantity);
      net = net + (quantity * 50);
      break;

       default :

         printf("\n Invalid product selection");

    }

    printf("\n Do You want to continue press 1 : ");

    scanf("%d",&i);

    if(i == 1){

        goto naveen;
    }
     printf("\n Total Amount : %d", net);
      printf("\n Thank you come again ");
    return 0;
}
