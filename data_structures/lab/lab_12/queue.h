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
  int enqueue(int num);
  int dequeue();
  void peek();
};


//Method to insert an element in the queue
int queue::enqueue(int num)
{
  struct node *newnode=(struct node *)malloc(sizeof(struct node));
  if(front==NULL)
  {
    newnode->data=num;
    newnode->next=NULL;
    front=newnode;
    rear=newnode;
    return 1;
  }
  else
  {
    newnode->data=num;
    newnode->next=NULL;
    rear->next=newnode;
    rear=newnode;
    return 1;
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
    int data=temp->data;
    front=front->next;
    free(temp);
    temp=NULL;
    return data;
  }
}

//Method to display the front element
void queue::peek()
{
  
  printf("%d",front->data);
}