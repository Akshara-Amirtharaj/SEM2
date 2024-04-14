#include<stdio.h>
#include<stdlib.h>
#include "func.h"
int main()
{
    linked l1,l2,l3;
    int choice;
    while(1)
    {
        getchar();
        printf("\n(1)Insert");
        printf("\n(2)Merge");
        printf("\n(3)Display");
        printf("\n(4)Exit");
        printf("\n Choose any option:");
        scanf("%d",&choice);

        switch(choice)
        {
          case 1:
          int num1,list;
          printf("Which list to insert?(1 or 2)");
          scanf("%d",&list);
          printf("Enter the number to insert:");
          scanf("%d",&num1);
          if(list==1)
          {
            l3.insert(num1);
          if(l1.insert(num1))
          {
            printf("Element is inserted successfully");
          }
          else
          {
            printf("Operation failed");
          }
          }
          else if(list==2)
          {
            l3.insert(num1);
             if(l2.insert(num1))
          {
            printf("Element is inserted successfully");
          }
          else
          {
            printf("Operation failed");
          }
          }
          else
          {
            printf("Invalid option");
          }
          break;

          case 2:
          l3.display();
          printf("The lists are merged");
          break;

          case 3:
          l1.display();
          printf("\n");
          l2.display();
          break;

          case 4:
          return 0;

        }
    }
    return 0;
}




