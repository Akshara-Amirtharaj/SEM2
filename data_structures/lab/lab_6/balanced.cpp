#include<stdio.h>
#include<stdlib.h>
#define size 256
#include"balanced.h"


int main()
{
    stack_link l1;
    int choice;
    while(1)
    {
       printf("\n(1) Check\n(2) Exit\n Enter your choice:");
       scanf("%d",&choice) ;
       getchar();

       switch (choice)
       {
        case 1:
        char arr[size];
        printf("Enter the string:");
        scanf("%255s",arr);
        getchar();
        if(l1.check(arr))
        {
            printf("Balanced");
        }
        else
        {
            printf("Not balanced");
        }
        break;

        case 2:
        return 0;

        default:
        printf("Enter a valid choice:");
       }
    }
    return 0;
}


