#include<stdio.h>
int main()
{
    int i,n,arr[25],num;
    printf("Enter the number of students");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("Enter the element to search:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==arr[i])
        {
        printf("%d is found at %d index",arr[i],i);
        break;
        }
    }
    return 0;
}