#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int difference(int a,int b)
{
    return a-b;
}
int product(int a,int b)
{
    return a*b;
}
int division(int a,int b)
{
    return a/b;
}
 void set(int *a,int *b)
{
    printf("Enter the first integer:");
    scanf("%d",a);
    printf("Enter the second integer:");
    scanf("%d",b);
}
