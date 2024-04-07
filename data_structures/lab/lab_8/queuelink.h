//program to implement queue using Singly Linked List
#include<stdio.h>
#include<stdlib.h>
class queue
{
  struct node 
  {
    int data;
    struct node *next;
   
  };
    struct node *front;
    struct node *rear;
  
  public:
  queue()
  {
   front=NULL;
   rear=NULL;
  }
  void enqueue(int num);
  int dequeue();
  int peek();
  void deleteall();
};

//Method to insert an element in the queue
void queue::enqueue(int num)
{
  struct node *newnode=(struct node *)malloc(sizeof(struct node));
  if(front==NULL)
  {
    newnode->data=num;
    newnode->next=NULL;
    front=newnode;
    rear=newnode;
  }
  else
  {
    newnode->data=num;
    newnode->next=NULL;
    rear->next=newnode;
    rear=newnode;

  }
}

// Method to delete an element from the queue
int queue:: dequeue()
{
  struct node *temp=front;
  if(front==NULL)
  {
    return 0;
  }
  else
  {
    int data=front->data;
    front=front->next;
    free(temp);
    temp=NULL;
    return data;
  }
}

//Method to display the front element
int queue::peek()
{
  struct node *temp=front;
  if(front==NULL)
  {
    return -1;
  }
  else
  {
    return front->data;
  }
  
}
void queue::deleteall()
{
    while(front!=NULL)
    {
       dequeue();
    }
}
