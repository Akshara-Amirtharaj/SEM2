/*Program to implement list ADT using doubly linked list*/

#include<stdio.h>
#include<stdlib.h>
class doublelinked
{
    struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *head;
    int length;
    public:
    doublelinked()
    {
        head=NULL;
        length=0;
    }
    int insertbeg(int num);
    int insertend(int num);
    int insertpos(int num,int pos);
    int delbeg();
    int delend();
    int delpos(int pos);
    int search(int num);
    void display();
};

int main()
{
    int choice;
    doublelinked l1;
    while(1)
    {

printf("\n(1) Insert at beginning");
printf("\n(2) Insert at end");
printf("\n(3) Insert position");
printf("\n(4) Delete beginning");
printf("\n(5) Delete End");
printf("\n(6) Delete position");
printf("\n(7) Search");
printf("\n(8) Display");
printf("\n(9) Exit");
printf("\nChoose choice:");
scanf("%d",&choice);

switch (choice)
{
     case 1:
     int num1;
     printf("Enter the number to insert:");
     scanf("%d",&num1);
     if(l1.insertbeg(num1))
     {
        printf("Number is inserted successfully");
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
        printf("Number is appended successfully");
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
        printf("Number is inserted successfully");
     }
     else
     {
        printf("Operation failed");
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
     printf("Enter the position to delete the element:");
     scanf("%d",&pos6);
     if(l1.delpos(pos6))
     {
        printf("The element is removed successfully");
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
        printf("Element is not found in the list");
     }
     break;


     case 8:
     l1.display();
     break;

     case 9:
     return 0;



}
    }
    return 0;
}

//Methods

// Method to insert an elemnent at the beginning
int doublelinked::insertbeg(int num)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    struct node *temp=head;
    if(head==NULL)
    {
        newnode->data=num;
        newnode->prev=NULL;
        newnode->next=NULL;
        head=newnode;
        length++;
        return 1;
       
    }

    else
    {
        newnode->data=num;
        newnode->prev=NULL;
        newnode->next=NULL;
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
        length++;
        return 1;
    }
}

// Method to append an element
int doublelinked::insertend(int num)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    struct node *temp=head;
    if(head==NULL)
    {
        insertbeg(num);
        length++;
        return 1;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        newnode->next=NULL;
        newnode->data=num;
        newnode->prev=temp;
        temp->next=newnode;
        temp=newnode;
        length++;
        return 1;
    }
}

// Method to insert an element at desired position
int doublelinked::insertpos(int num,int pos)
{
   struct node*temp1=head;
   struct node*temp2=(struct node*)malloc(sizeof(struct node));
   struct node*newnode=(struct node*)malloc(sizeof(struct node));
   if(pos==1)
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
   else if(pos>length)
   {
    return 0;
   }

   else
   {
    for(int i =1;i<pos-1 && temp1->next!=NULL;i++)
    {
     temp1=temp1->next;
    }
    temp2=temp1->next;
    newnode->data=num;
    temp1->next=newnode;
    temp2->prev=newnode;
    newnode->next=temp2;
    newnode->prev=temp1;
    length++;
    return 1;
   }
   
}

// Method to delete the First element
int doublelinked:: delbeg()
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
       length--;
       return 1;
    }
}

//Method to delete the last element
int doublelinked::delend()
{
    struct node *temp1=head;
    struct node*temp2=NULL;
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
        temp1=NULL;
        length--;
        return 1;
    }
}

//Method to delete an element at desired position
int doublelinked::delpos(int pos)
{
    struct node *temp1=head;
    struct node *temp2=(struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        return 0;
    }

    else if(pos==length)
    {
        delend();
        return 1;
    }
    
    else if(pos>length)
    {
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
      temp1->prev=temp2;
      free(temp1);
      temp1= NULL;
      length--;
      return 1;
    }
    
}

//Method to search an element in the list
int doublelinked::search(int num)
{
    struct node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        if(temp->data==num ||temp->next->data==num)
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
 
//Method to display the elements
void doublelinked::display()
{
    struct node *temp1=head;
    while(temp1!=NULL)
    {
        printf("%d\t",temp1->data);
        temp1=temp1->next;
    }
    printf("\n");
{
    struct node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->prev;
    }
}

}


