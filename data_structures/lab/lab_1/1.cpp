// program to find the sum of 'n' integers using only pointers

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *n,*sum;

    n=(int*)malloc(sizeof(int));
    sum=(int*)malloc(sizeof(int));
    *sum=0;
    printf("Enter the number of integers");
    scanf("%d",n);
    while(*n!=0)
    {
       int *num;
       num=(int*)malloc(sizeof(int));
       printf("Enter the number");
       scanf("%d",num);
       *sum=*sum+*num;
       (*n)--;
    }

    printf("The sum is %d",*sum);

    free(sum);
    free(n);
    return 0;
}