/*Program to implement stack ADT using singly linked list*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
    void push(char chr);
    void pop();
    char peek();
   void check(char arr[25],stack_link *l1,stack_link *l2);
   void display();
  
    

};


//Method to push a character into a stack

void stack_link:: push(char chr)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=chr;
    if(head==NULL)
    { 
      newnode->next=NULL;
      head=newnode;
      
    }

    else
    {
       newnode->next=head;
       head=newnode;
       
    }
}

// Method to pop a character from the stack

 void stack_link::pop()
{
    struct node *temp=head;
    if(head!=NULL)
    {
        head=head->next;
        free(temp);
        temp=NULL;
        
    }
}

void stack_link ::display()
{
    struct node *temp1=head;
    struct node *temp2=NULL;
    while(temp1->next!=NULL)
        {
            temp2=temp1;
            temp1=temp1->next;
        }
        temp2->next=NULL;
        free(temp1);
        temp1==NULL;
}

char stack_link::peek()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
       temp=temp->next;
    }
    return temp->data;
}

void stack_link:: check(char arr[25],stack_link *l1,stack_link *l2)
{
    struct node *temp=head;
    char char1;
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        
        if(arr[i]=='*'||arr[i]=='/'|| arr[i]=='%')
        {
            
             if(count==3)
             {
                char1=l1->peek();
                l2->push(char1);
                l1->pop();
                
               if(l1->head==NULL)
                {
                    count=0;
                }
                else if ( char1=='*' || char1=='/' || char1=='%')
                {
                    count=3;
                }
                 else if ( char1=='+' || char1=='-')
                 {
                    count=2;
                 }
                 else if( char1=='=')
                 {
                    count==1;
                 }
            }
            else 
            {
                l1->push(arr[i]);
                count=3;
            }   
        }

        else if(arr[i]=='+'||arr[i]=='-')
        {
            if(count==3 || count==2)
            {
                char1=l1->peek();
                l2->push(char1);
                l1->pop();
                char1=l1->peek();
                if(l1->head==NULL)
                {
                    count=0;
                }
                else if ( char1=='*' || char1=='/' || char1=='%')
                {
                    count=3;
                }
                 else if ( char1=='+' || char1=='-')
                 {
                    count=2;
                 }
                 else if( char1=='=')
                 {
                    count==1;
                 }
        
            }
            else
            {
                l1->push(arr[i]);
                count=2;
            }

            
        }
        else if(arr[i]=='=')
        {
            if(count==1)
            {
                char1=l1->peek();
                l2->push(char1);
                l1->pop();
                if(l1->head==NULL)
                {
                    count=0;
                }
                else if ( char1=='*' || char1=='/' || char1=='%')
                {
                    count=3;
                }
                 else if ( char1=='+' || char1=='-')
                 {
                    count=2;
                 }
                 else if( char1=='=')
                 {
                    count==1;
                 }
        
                
            }
            else
            {
            l1->push(arr[i]);
            count=1;
            }
        }
        else
        {
            l2->push(arr[i]);
        
        }
    }
    while(l1->head!=NULL)
    {
        l2->push(l1->peek());
        l1->pop();
    }

}

