#include<stdio.h>
int largest(int *arr,int n)
{
    int max_index=0;
    for(int i=0;i<n;i++)
    {
      if(arr[i]>arr[max_index])
      max_index=i;
    }
    return max_index;
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp; 
}
void sort(int *arr,int n)
{   int i;
    for( i=0;i<n;i++)
    {
        int max_index=largest(arr+i,n-i)+i;
        swap(&arr[max_index],&arr[i]);
    }
}
int main()
{
   int choice,n,arr[25];
   printf("Enter the number of elements:");
   scanf("%d",&n);
   printf("Enter the elements:");
   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   while(1)
   {
   printf("\n(1) Ascending");
   printf("\n(2) Descending");
   printf("\n(3) Exit");
   printf("\nEnter your choice:");
   scanf("%d",&choice);
   getchar();
   switch (choice)
   {
      case 1:
      sort(arr,n);
      printf("Elements after sorting:");
      for(int i=n-1;i>=0;i--)
      {
        printf("%d\t",arr[i]);
      }  
      break;

      case 2:
      sort(arr,n);
      printf("Elements after sorting in descending order:");
      for(int i=0;i<n;i++)
      {
        printf("%d\t",arr[i]);
      } 
      break;

      case 3:
      return 0;
   }
   }
}