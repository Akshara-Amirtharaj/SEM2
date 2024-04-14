//program to implement a browser's front and back functionality
#include<stdio.h>
#include"webpage.h"
int main()
{
    doublelinked l1;
    int choice;
    while(1)
    {
        printf("\n(1)Insert New Webpage");
        printf("\n(2)Front");
        printf("\n(3)Back");
        printf("\n(4)Display");
        printf("\n(5)Current page");
        printf("\n(6) Exit)");
        printf("\nEnter the choice:");
        scanf("%d",&choice);

        switch(choice)
        {
           case 1:
           int num1;
           printf("Enter the number to insert in the webpage");
           scanf("%d",&num1);
           if(l1.insertwebpage(num1))
           {
            printf("Inserted successfully");
           }
           else
           {
            printf("Operation failed");
           }
           break;

           case 2:
           if(l1.front())
           {
            printf("Moved to the the next page!");
           }
           else
           {
            printf("Operation failed");
           }
           break;

           case 3:
           if(l1.back())
           {
            printf("Moved to the previous page");
           }
           else
           {
            printf("Operation failed");
           }
           break;

           case 4:
           l1.display();
           break;
           
           case 5:
           l1.state();
           break;


           case 6:
           return 0;
           
        }
    }
    return 0;
}