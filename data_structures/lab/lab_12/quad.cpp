// To implement Hash ADT using quadratic probing

#include<stdio.h>
#include<stdlib.h>
#define size 25
class hash
{
    int hashtable[size]={0};
    public:
    hash()
    {
       for(int i=0;i<size;i++)
       {
        hashtable[i]=-1;
       } 
    }
    int insert(int num);
    void display();
    int del(int num);
    int search(int num);
};
int main()
{
    hash h1;
    int choice;
    while(1)
    {
        printf("\n(1) Insert");
        printf("\n(2) Delete");
        printf("\n(3) Search");
        printf("\n(4) Display");
        printf("\n(5) Exit");
        printf("\n Enter your choice");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
            int num1;
            printf("Enter the number to insert");
            scanf("%d",&num1);
            if(h1.insert(num1))
            {
               printf("Element is inserted successfully");
            }
            else
            {
                printf("fail");
            }
            break;

            case 2:
            int num2;
            printf("Enter the number to delete");
            scanf("%d",&num2);
            if(h1.del(num2))
            {
                printf("Number is deleted successfully");
            }
            else
            {
                printf("Element is not present");
            }
            break;

            case 3:
            int num3;
            printf("Enter the element to search");
            scanf("%d",&num3);
            if(h1.search(num3))
            {
                printf("Element is found");
            }
            else
            {
                printf("Element is not found");
            }
            break;

            case 4:
            h1.display();
            break;
            
            case 5:
            return 0;
        }

    }
}

//method to insert the element
int hash::insert(int num)
{
   int index=num%size;
   
   if(hashtable[index]==-1)
   {
    hashtable[index]=num;
    return 1;
   }
   else
   {
      int i=1;
      while(index!=size-1)
      {
        if(hashtable[index]==-1)
        {
            hashtable[index]=num;
            return 1;
        }
        index=i*i +index;
        i++;
      }
   }
   return 0;
}   

//method to display the elements
void hash:: display()
{
   for(int i=0;i<size;i++)
   {
    if(hashtable[i]!=-1)
    {
        printf("%d\t",hashtable[i]);
    }
   }
}


//method to delete a element
int hash :: del(int num)
{
    int index=num%size;
    int i=0;
    while(index<size-1)
    {
       if(hashtable[index]==num)
       {
          hashtable[index]=-1;
          return 1;
       }
       else if(hashtable[index]==-1)
       {
          return 0;
       }
       index=i*i +index;
       i++;
    }
    return 0;
}

//method to search an element
int hash:: search(int num)
{
    int index=num%size;
    int i=0;
    while(index<size-1)
    {
        if(hashtable[index]==num)
        {
            return 1;
        }
        else if(hashtable[index]==-1)
        {
            return 0;
        }
        index=i*i +index;
        i++;
    }
    return 0;

}