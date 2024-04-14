#include<stdio.h>
void binarysearch(int *arr,int low,int high,int num)
{
  while(low<=high)
  {
    
    int middle=low + (high-low)/2;
    if(arr[middle]==num)
    {printf("%d is found at %d index",num,middle);
    return ;}
    else if(arr[middle]<num)
    low=middle+1;
    else
    high=middle-1;
  }  
  printf("%d is not found",num);
}

int smallest(int *arr,int n)
{
    int min_index=0;
    for(int i=0;i<n;i++)
    {
      if(arr[i]<arr[min_index])
      min_index=i;
    }
    return min_index;
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
        int min_index=smallest(arr+i,n-i)+i;
        swap(&arr[i],&arr[min_index]);
    }
}
int main()
{
    int n,arr[25],num,og;
    char order;
   printf("Enter the number of students:");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
    printf("\n Enter the roll number for student %d:",i+1);
    scanf("%d",&arr[i]);
   }
   sort(arr,n);
  printf("\nElements after sorting");
   for(int i=0;i<n;i++)
   {
    printf("%d\t",arr[i]);
   } 
   printf("\nEnter the element to search:");
   scanf("%d",&num);
   
   binarysearch(arr,0,n-1,num);
  return 0;
}