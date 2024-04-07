/*Program to implement list ADT using singly linked list*/

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
    int insertbeg(int num);
    int insertend(int num);
    int insertpos(int num,int pos);
    int delbeg();
    int delend();
    int delpos(int pos);
    int search(int num);
    void display();
    int reverselink();
    void displayrev();
    int value(int num);

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
printf("\n(7) Search");
printf("\n(8) Display");
printf("\n(9) Display Reverse");
printf("\n(10) Reverse link");
printf("\n(11) Exit");
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

        case 7:
        int num7;
        printf("Enter the element to search:");
        scanf("%d",&num7);
        if(l1.search(num7))
        {
            printf("Element is found in the list");
        }
        else
        {
            printf("Element is not found");
        }
        break;


        case 8:
        l1.display();
        break;
        
        case 9:
        l1.displayrev();
        break;

        
        case 10:
        if(l1.reverselink())
        {
           printf("The elements are reversed successfully");
        }
        else
        {
            printf("The list is empty");
        }
        break;

        case 11:
        return 0;

    }
  
    }
    return 0;
    }

/*Functions*/
int linked::insertbeg(int num)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));

    if(head==NULL)
    {
        newnode->next=NULL;
        newnode->data=num;
        head=newnode;
        return 1;
    }
    else
    {
        newnode->next=head;
        newnode->data=num;
        head=newnode;
        return 1;
    }
}

int linked:: insertend(int num)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    struct node *temp=head;
    newnode->data=num;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return 1;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        return 1;
    }
}

int linked::insertpos(int num,int pos)
{
    struct node *temp1=head;
    struct node *temp2=(struct node *)malloc(sizeof(struct node));
    temp2->data=num;
    temp2->next=NULL;

    if(pos==1)
    {
        insertbeg(num);
        return 1;
    }
    else
    {
        for(int i =1;i<pos-1 && temp1->next!=NULL;i++)
    {
        temp1=temp1->next;
    }
    temp2->next=temp1->next;
    temp1->next=temp2;
    return 1;
    }
}

int linked :: delbeg()
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
    }
}

int linked::delend()
{
     struct node *temp1=head;
     struct node *temp2=NULL;
     if(head==NULL)
     {
        return 0;
     }
     else
     {
        while(temp1->next!=NULL)
        {
            temp2=temp1;
            temp1=temp1->next;
        }
        temp2->next=NULL;
        free(temp1);
        temp1==NULL;
        return 1;
     }
}

int linked::delpos(int pos)
{
    struct node *temp1=head;
    struct node *temp2=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        return 0;
    }
    else if(pos==1)
    {
        delbeg();
        return 0;
    }
    else
    {
        for(int i=0;i<pos-1 && temp1->next!=NULL;i++)
        {
            temp2=temp1;
            temp1=temp1->next;
        }
        temp2->next=temp1->next;
        free(temp1);
        temp1=NULL;
        return 1;
    }
}

int linked::search(int num)
{
    int count=0;
    struct node *temp=head;
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        while(temp->next!=NULL)
        {
            if(temp->data==num)
            {
                count=1;
                break;
            }
            temp=temp->next;
        }
        if(count==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
void linked::display()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;

    }

}

int linked:: reverselink()
{
    struct node *temp1=NULL;
    struct node *temp2=NULL;
     
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        while(head!=NULL)
        {
            temp2=head->next;
            head->next=temp1;
            temp1=head;
            head=temp2;
        }
        head=temp1;
        return 1;
    }
    
}

int linked::value(int num)
{
    return num;
}
