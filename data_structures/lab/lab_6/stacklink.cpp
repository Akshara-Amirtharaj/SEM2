/*Program to implement stack ADT using singly linked list*/

#include<stdio.h>
#include<stdlib.h>
class stack_link 
{
  struct node
{
    char data;
    struct node *next;
};
struct node *head;

public:

  stack_link()
  {
    head=NULL;
  }  
    int push(char chr);
    int pop();
    void peek();

};

int main()
{
    stack_link l1;
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
                printf("Operation failed!");
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

int stack_link:: push(char chr)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=chr;
    if(head==NULL)
    { 
      newnode->next=NULL;
      head=newnode;
      return 1;
    }

    else
    {
       newnode->next=head;
       head=newnode;
       return 1;
    }
}

// Method to pop a character from the stack

int stack_link::pop()
{
    struct node *temp=head;
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        head=head->next;
        free(temp);
        temp=NULL;
        return 1;
    }
}

// Method to display the last element in a stack
void stack_link::peek()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(temp!=NULL)
    {
        printf("%c\t",temp->data);
        temp=temp->next;
    
    }
    
}

