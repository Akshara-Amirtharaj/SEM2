//Menu driven program to implement list ADT using singly linked list
#include<stdio.h>
#include<stdlib.h>
class linked
{
    struct node 
    {
        int data;
        struct node *next;
    };
    struct node *head;
    public:
    linked()
    {
        head=NULL;
    }
    int insert(int num);
    void display();
    
};
int main()
{
    linked l1,l2,l3;
    int choice;
    while(1)
    {
        getchar();
        printf("\n(1)Insert");
        printf("\n(2)Merge");
        printf("\n(3)Display");
        printf("\n(4)Exit");
        printf("\n Choose any option:");
        scanf("%d",&choice);

        switch(choice)
        {
          case 1:
          int num1,list;
          printf("Which list to insert?(1 or 2)");
          scanf("%d",&list);
          printf("Enter the number to insert:");
          scanf("%d",&num1);
          if(list==1)
          {
            l3.insert(num1);
          if(l1.insert(num1))
          {
            printf("Element is inserted successfully");
          }
          else
          {
            printf("Operation failed");
          }
          }
          else if(list==2)
          {
            l3.insert(num1);
             if(l2.insert(num1))
          {
            printf("Element is inserted successfully");
          }
          else
          {
            printf("Operation failed");
          }
          }
          else
          {
            printf("Invalid option");
          }
          break;

          case 2:
          printf("The lists are merged");
          l3.display();
          break;

          case 3:
          l1.display();
          printf("\n");
          l2.display();
          break;

          case 4:
          return 0;

        }
    }
    return 0;
}

/* Functions*/
int linked::insert(int num)
 {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = num;
    newNode->next = NULL;

    // Insertion into an empty list or before the first node
    if (head == NULL || head->data >= num) {
        newNode->next = head;
        head = newNode;
    } else {
        // Find the correct position for the new node
        struct node* temp = head;
        while (temp->next != NULL && temp->next->data < num) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    return 1;
}



void linked::display()
{
    // Displaying the elements
    struct node *temp=head;
    while(temp!=NULL)
    {
        
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}





