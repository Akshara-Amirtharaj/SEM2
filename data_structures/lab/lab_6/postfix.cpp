#include<stdio.h>
#include"postfix.h"
int main()
{
    stack_link l1,l2,l3;
    char arr[25];
    printf("Enter the expression:");
    scanf("%24s",arr);
    l3.check(arr,&l1,&l2);
    
    l2.display();
    printf("\n");
    
    
    
    return 0;

}