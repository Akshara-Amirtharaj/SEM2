//program to implement circular queue using linked list
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

int main()
{
    queue q1;
    int choice;
    char i;
    while(1)
    
    {
        printf("\n(1) Enqueue");
        printf("\n(2) Dequeue");
        printf("\n(3) Peek");
        printf("\n(4) Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        getchar();
        switch (choice)
        {
            case 1:
            int num1;
            printf("Enter the number to insert:");
            scanf("%d",&num1);
            if(q1.enqueue(num1))
            {
              printf("Element is inserted successfully");
            }
            else
            {
              printf("Operation failed!");
            }
            break;

            case 2:
            if(q1.dequeue())
            {
              printf("Element is removed successfully");
            }
            else
            {
              printf("The queue is empty!");
            }
            break;
            
            case 3:
            q1.peek();
            break;


            case 4:
            return 0;
        }
    }
}

//Method to insert an element in the queue
int queue::enqueue(int num)
{
  struct node *newnode=(struct node *)malloc(sizeof(struct node));
  if(front==NULL)
  {
    newnode->data=num;
    newnode->next=newnode;
    front=newnode;
    rear=newnode;
    return 1;
  }
  else
  {
    newnode->data=num;
    newnode->next=front;
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
    front=front->next;
    rear->next=front;
    free(temp);
    temp=NULL;
    
    return 1;
  }
}

//Method to display the front element
void queue::peek()
{

 printf("%d",front->data);
 
}