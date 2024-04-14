//header file to implement a browser's front and back functionality
#include<stdio.h>
#include<stdlib.h>
class doublelinked
{
    struct node 
    {
        int data;
        struct node *prev;
        struct node *next;
    };
    struct node *head;
    struct node *current;
    public:
    doublelinked()
    {
        head=NULL;
        current=NULL;
    }
    int insertwebpage(int num);
    int front();
    int back();
    void display();
    void state();
};

//Method to insert a new webpage
int doublelinked::insertwebpage(int num)
{
    
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
      newnode->prev=NULL;
      newnode->data=num;
      newnode->next=NULL;
      current=newnode;
      head=newnode;
      return 1; 
    }
    else if(head!=current)
    {
        struct node *temp1=head;
        struct node *temp2=NULL;
        while(head!=current)
        {
            head=head->next;
            temp2=temp1;
            temp1=temp1->next;
            free(temp2);
            temp2=NULL;
        }
        return insertwebpage(num);
    }
    else
    {
      newnode->prev=NULL;
      newnode->data=num;
      newnode->next=NULL;
      head->prev=newnode;
      newnode->next=head;
      current=newnode;
      head=newnode;
      return 1; 
    }
    
}

// Method to move the browser to the previous page
int doublelinked::back()
{
  if(current==NULL|| current->next==NULL)
  {
    return 0;
  }
  else if(current->next!=NULL)
  {
    current=current->next;
    return 1;
  }
}


// Method to move the browser to the next page
int doublelinked::front()
{
    if(current==NULL||current->prev==NULL)
    {
        return 0;
    }
    else if(current->prev!=NULL)
    {
        current=current->prev;
    }
}


//Method the disply the current webpage
void doublelinked::state()
{
    printf("%d",current->data);
}

//Method to check the elements
void doublelinked::display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}