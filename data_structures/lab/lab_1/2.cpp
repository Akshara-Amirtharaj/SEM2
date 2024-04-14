#include<stdio.h>
#include"arithmetic.h"
int main()
{
    int a,b,choice;
    while(1)
    {
        printf("\n(1) Addition");
        printf("\n(2) Subtraction");
        printf("\n(3) Multiplication");
        printf("\n(4) Divsion");
        printf("\n(5) Exit");
        printf("Enter your choice:");
        scanf("%d",&choice);
        getchar();

        switch (choice)
        {
            case 1:
            
              printf("Enter the first integer:");
              scanf("%d",&a);
              printf("Enter the second integer:");
              scanf("%d",&b);
              printf("\nADDITION:%d",sum(a,b));
              break;

            case 2:
              
              printf("Enter the first integer:");
              scanf("%d",&a);
              printf("Enter the second integer:");
              scanf("%d",&b);
              printf("\nSUBTRACTION:%d",difference(a,b));
              break;

            case 3:
              
              printf("Enter the first integer:");
              scanf("%d",&a);
              printf("Enter the second integer:");
              scanf("%d",&b);
              printf("\nPRODUCT:%d",product(a,b));
              break;

            case 4:
              
              printf("Enter the first integer:");
              scanf("%d",&a);
              printf("Enter the second integer:");
              scanf("%d",&b);
              printf("\nQUOTIENT:%d",division(a,b));
              break;

            case 5:
               return 0;

        } 
    
    }
}