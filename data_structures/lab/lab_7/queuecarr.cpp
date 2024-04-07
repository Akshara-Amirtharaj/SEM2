//program to implement circular queue using array ADT
#include<stdio.h>
#include<stdlib.h>
#define size 5
class queue
{
    int front,rear;
    int arr[size];
    public:
        queue()
        {
        front=-1;
        rear=-1;
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
              printf("The queue is full");
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
    if((rear+1)%size==front)
    {
        return 0;
    }
    else if(rear==-1)
    {
        arr[0]=num;
        rear++;
        return 1;
    }
    else if((rear+1)%size!=front)
    {
        arr[rear+1]=num;
        rear++;
        return 1;
    }
    else
    {
        return 0;
    }
}
// Method to delete an element from the queue
int queue::dequeue()
{
    if(rear==-1)
    {
        return 0;
        
    }
    else if(front==size-1)
    {
        front==0;
        return 1;
    }
    else
    {
        front++;
        return 1;
    }
}
//Method to display the front element
void queue::peek()
{
        
        printf("%d\t",arr[front+1]);
        
}
