#include<stdio.h>
#include<stdlib.h>
#define size 5
class list
{
  int cur;
   int arr[size];
   public:

     list()
      {
      cur=-1;
      }
     
int indexbeg(int);
void display();
int append(int);
int insert(int ,int );
int delbeg();
int delend();
int delpos(int );
int search(int);
};


int main()
{
  getchar();
   list l1;
while(1)
  {
    getchar();
  
   int choice;

printf("\n(1) Insert at beginning");
printf("\n(2) Append");
printf("\n(3) Insert position");
printf("\n(4) Delete beginning");
printf("\n(5) Delete End");
printf("\n(6) Delete position");
printf("\n(7) Search");
printf("\n(8) Display");
printf("\n(9) Exit");
printf("\nChoose choice:");
scanf("%d",&choice);


 switch (choice)
{
   case 1:
   
     int num1;
     printf("Enter the number to add:");
     scanf("%d",&num1);
       if(l1.indexbeg(num1))
       {
           printf("Number added successfully");
       }
       else
       {
           printf("Array is full");
       }
    break;

    case 2:

    int num2;
    printf("Enter the number to append:");
    scanf("%d",&num2);
    if(l1.append(num2))
    {
        printf("Number added successfully");
    }
    else
    {
        printf("Array is full");
    }
      break ;

      case 3:
      int num3,j;
      printf("Enter the number to add:");
      scanf("%d",&num3);
      printf("Enter the index:");
      scanf("%d",&j);
      if(l1.insert(num3,j))
      {
      printf("Number added successfully");
      }
      else{
        printf("Array is full or index out of range");
      }
      break;

      case  4:
      if(l1.delbeg())
      {
        printf("Element deleted at the beginning successfully");
      }
      else
      {
        printf("Element is not removed");
      }
      break;

     case 5:
     if(l1.delend())
     {
      printf("Element is removed successfully at the end");
     }

     else
     {
      printf("List is empty");
     }
     break;

     case 6:
     int num6;
     printf("Enter the index to remove:");
     scanf("%d",&num6);
     if(l1.delpos(num6))
     {
      printf("Element is removed successfully");
     }
     else
     {
     printf("List is empty");
     }
     break;

    case 7:
    int num7;
    printf("Enter the number to search:");
    scanf("%d",&num7);
    if(l1.search(num7))
    {
      printf("Element is found in the list");
    }
    else
    {
      printf("Element is not found in the list");
    }
    break;

    
    case 8:
       l1.display();
       break;
    
    case 9:
    return 0;

     

  
   }
}
return 0;
}


int list::indexbeg(int num)
{

 
if(cur==size-1)
  {
   return 0;
  }
 else if(cur==-1)
 {
  cur++;
  arr[0]=num;
  return 1;
 }
else
  {
   for(int i= cur;i>=0;i--)
   {
       arr[i+1]=arr[i];   
       
   }
     cur++;
    arr[0]=num;
   return 1;
  }
}
int list::append(int num)
{
    if(cur+1==size)
    {
      return 0;
    }
   
    else
    {
  
    cur++;
    arr[cur]=num;
    return 1;
    }
}
void list::display()
{
   printf("\nThe contents of the list are:");
   for(int i=0;i<=cur;i++)
   {
    printf("%d\t",arr[i]);
   }
}
int list::insert(int num,int j)
{
  if(cur+1==size||j>cur)
  return 0;
  
  else 
  {
    for(int i=0;i<size;i++)
    {
        if(i==j)
        {
        if(i<=cur)
        {
            for (int k=i;k<=cur;k++)
            {
                arr[k+1]=arr[k];
            }
        }
        arr[i]=num;
        }
    }
    cur++;
  }
}
int list::delbeg()
{
  if(cur==-1)
  {
    return 0;
  }
  else
  {
   for(int i=0;i<=cur;i++)
   {
  
       arr[i]=arr[i+1];
      
   }
  cur--;
   return 1;
   
  }
}
int list::delend()
{
  if(cur==-1)
  {
    return 0;
  }
  else
  {
       
    for(int i=size;i>cur;i--)
    {
      arr[i-1]=arr[i];
    }
    cur--;
    return 1;
  }
}
int list::delpos(int num)
{
  if(cur==-1)
  {
    return 0;
  }
  else if(num==cur)
  {
    delend();
    cur--;
    return 1;
  }
  else if(num==0)
  {
    delbeg();
     cur--;
    return 1;
  }
  else
  {
   for(int i=num;i<=cur;i++)
   {
    arr[i]=arr[i+1];
   }
    cur--;
   return 1;
  }
}

int list::search(int num)
{
  if(cur==-1)
  {
    return 0;
  }
  else
  {
  
    for(int i=0;i<size;i++)
    {
      if(arr[i]==num)
      {
        return 1;
      }
      else
      {
        return 0;
      }
    }
  }
}