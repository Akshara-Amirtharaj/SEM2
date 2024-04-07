

#include<stdio.h>
#include<stdlib.h>
#define size 256
class stack_link 
{
  struct node
{
    char data;
    struct node *next;
};
struct node *head;
int top;

public:

  stack_link()
  {
    head=NULL;
    top=-1;
  }  
    int push(char chr);
    int pop();
    int check(char arr[size]);
    

};



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
    top++;
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
        top--;
        return 1;
    }
}
   

//Method to check if the string is balanced

int stack_link::check(char arr[size])
{
   for(int i=0;arr[i]!='\0';i++)
   {
    if(arr[i]=='(')
    {
        push('a');
    }
    else if(arr[i]==')')
    {
        if(head==NULL)
        {
          return 0;
        }
        else
        {
        pop();
    }}
  
   }
   if(head==NULL)
   {
    return 1;
   }
   else
   {
    return 0;
   }

}