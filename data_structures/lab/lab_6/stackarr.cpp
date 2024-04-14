//Program to implement stack ADT using array
#include<stdio.h>
#include<stdlib.h>
#define size 5
class stack_arr
{
   char arr[size];
   int top;
   
   public:
   stack_arr()
   {
    top=-1;
   }
   int push(char chr);
   int pop();
   void peek();
};

int main()
{
    stack_arr l1;
    int choice;
    char i;
    while(1)
    
    {
        printf("\n(1) Push");
        printf("\n(2) Pop");
        printf("\n(3) Peek");
        printf("\n(4) Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        getchar();
        switch (choice)
        {
            case 1:
            char chr1;
            printf("Enter the character to push:");
            scanf(" %c",&chr1);
    
            if(l1.push(chr1))
            {
                printf("Element pushed successfully");
            }
            else
            {
                printf("The stack is full!");
            }
            break;

            case 2:
            if(l1.pop())
            {
                printf("Element is popped successfully");
            }
            else
            {
                printf("Stack is empty");
            }
            break;

            case 3:
            l1.peek();
            break;

            case 4:
            return 0;
        }
    }
}

//Method to push a character into a stack
int stack_arr::push(char chr)
{
    if(top==size-1)
    {
      
      return 0;
    }
    else
    {
      arr[++top]=chr;
      return 1;
    }
}


// Method to pop a character from the stack

int stack_arr::pop()
{
    if(top==-1)
    {
        return 0;
    }
    else
    {
       for(int i=0;i<=size;i++)
       {
        
        arr[i]=arr[i+1];
        
       }
       top--;
       return 1;
    }
}

// Method to display the last element in a stack
void stack_arr::peek()
{
    
    printf("%c\t",arr[top]);
    
}
