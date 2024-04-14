/*Program to implement list ADT using circular singly linked list*/

#include<stdio.h>
#include<stdlib.h>
class linked 
{
  struct node
{
    int data;
    struct node *next;
};
int length;
struct node *head;
struct node *tail;
public:
  linked()
  {
    length=0;
    head=NULL;
    tail=NULL;
  }  
   int insertbeg(int num);
   int insertend(int num);
   int insertpos(int num,int pos);
   int delbeg();
   int delend();
   int delpos(int pos);
   void display();

};
int main()
{
    linked l1;
    while(1)
    {
     getchar();
     int choice;

printf("\n(1) Insert at beginning");
printf("\n(2) Insert at end");
printf("\n(3) Insert position");
printf("\n(4) Delete beginning");
printf("\n(5) Delete End");
printf("\n(6) Delete position");
printf("\n(8) Display");
printf("\n(7) Exit");
printf("\nChoose choice:");
scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        int num1;
        printf("Enter the number to insert:");
        scanf("%d",&num1);

        if(l1.insertbeg(num1))
        {
         printf("Element is inserted successfully");
        }                                           
        else
        {
         printf("Operation failed");
        }
        
        break;
        
        case 2:
        int num2;
        printf("Enter the number to insert:");
        scanf("%d",&num2);
        if(l1.insertend(num2))
        {
            printf("Element is appended successfully");
        }
        else
        {
            printf("Operation failed");
        }
        break;
        
        case 3:
        int num3,pos3;
        printf("Enter the number to insert:");
        scanf("%d",&num3);
        printf("Enter the position to insert:");
        scanf("%d",&pos3);
        if(l1.insertpos(num3,pos3))
        {
           printf("Element is inserted");
        }
        else
        {
            printf("The list is empty");
        }
        break;

        case 4:
        if(l1.delbeg())
        {
            printf("Element is deleted successfully");
        }
        else
        {
            printf("The list is already empty");
        }
        break;
 
        case 5:
        if(l1.delend())
        {
            printf("Element is deleted successfully");
        }
        else
        {
            printf("The list is already empty");
        }
        break;
        
        case 6:
        int pos6;
        printf("Enter the position to remove the element:");
        scanf("%d",&pos6);
        if(l1.delpos(pos6))
        {
            printf("Element deleted successfully");
        }
        else
        {
            printf("The list is already empty");
        }
        break;

        case 8:
        l1.display();
        break;

        case 7:
        return 0;

    }
  
    }
    return 0;
    }

int linked:: insertbeg(int num)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
       newnode->data=num;
       newnode->next=newnode;
       tail=newnode;
       head=newnode;
        length++;
       return 1;
    }
    else
    {
        newnode->data=num;
        newnode->next=head;
        head=newnode;
        tail->next=newnode;
         length++;
        return 1;
    }
   
}

int linked:: insertend(int num)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        insertbeg(num);
        length++;
        return 1;
    }
    else
    {
        newnode->data=num;
        newnode->next=head;
        tail->next=newnode;
        tail=newnode;
        length++;
        return 1;
    }
}

int linked::insertpos(int num,int pos)
{
    struct node *temp1=head;
    struct node *temp2=NULL;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    if(pos==0)
    {
        insertbeg(num);
        length++;
        return 1;
    }
    else if(pos==length)
    {
        insertend(num);
        length++;
        return 1;
    }
    else
    {
        for(int i=0;i<pos && i<length;i++)
        {
           temp2=temp1;
           temp1=temp1->next;
        }
    newnode->data=num;
    temp2->next=newnode;
    newnode->next=temp1;
    length++;
    return 1;
    }
}
int linked::delbeg()
{
   if(head==NULL)
   {
    return 0;
   }
   else
   {
     head=head->next;
     tail->next=head;
     length--;
     return 1;
   }
}

int linked :: delend()
{
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        struct node *temp1=head;
        struct node *temp2=NULL;
        for(int i=1;i<length;i++)
        {
            temp2=temp1;
            temp1=temp1->next;
        }
        tail=temp2;
        tail->next=head;
        free(temp1);
        temp1=NULL;
        length--;
        return 1;
    }
}
void linked::display()
{
    struct node *temp=head;
    for(int i=0;i<length;i++)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

int linked::delpos(int pos)
{
    if(head==NULL)
    {
        return 0;
    }
    else if(pos==0)
    {
        delbeg();
        length--;
        return 1;
    }
    else if(pos==length-1)
    {
        delend();
        length--;
        return 1;
    }
    else
    {
        struct node *temp1=head;
        struct node *temp2=NULL;
        for(int i=0;i<pos &&i<length;i++)
        {
            temp2=temp1;
            temp1=temp1->next;
        }
        temp2->next=temp1->next;
        free(temp1);
        temp1=NULL;
        length--;
        return 1;
    }
    
    
}