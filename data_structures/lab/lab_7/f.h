

#include<stdio.h>
#include<stdlib.h>
class stack
{
  struct node
{
    char data;
    struct node *next;
};
struct node *head;

public:

  stack()
  {
    head=NULL;
  }  
    int push(char chr);
    char pop();
    void peek();
    void check(char string[25],stack *s1,stack *s2);

};

//Method to push a character into a stack

int stack:: push(char chr)
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

char stack::pop()
{
    struct node *temp=head;
    if(head==NULL)
    {
        return '\0';
    }
    else
    {
        char data;
        data=head->data;
        head=head->next;
        free(temp);
        temp=NULL;
        return data;
    }
}

// Method to display the last element in a stack
void stack::peek()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(temp!=NULL)
    {
        printf("%c",temp->data);
        temp=temp->next;
    
    }
    
}

void stack::check(char string[25],stack*s1,stack *s2)
{
    for(int i=0;string[i]!='\0';i++)
    {
        if (string[i]!='+')
        {
            s1->push(string[i]);
        }
        else if(string[i]=='+')
        {
            if(s1->head->next!=NULL)
            {
              s1->pop();
            }
        }
    }
    while(s1->head!=NULL)
    {
        s2->push(s1->pop());
    }
    
}