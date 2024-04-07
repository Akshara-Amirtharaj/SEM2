#include<stdio.h>
#include"f.h"

int main()
{
    stack s1,s2;
    char string[25];
    
        printf("Enter the string:");
        scanf(" %24s",string);
        s2.check(string,&s1,&s2);
        s2.peek();
}
