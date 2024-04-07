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
    int delpos(int num);
    int search(int num);
    void display();
    void displayrev();
    void reverse();
    int insertmid(int num);
    int oddeven(int num,int pos);
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
printf("\n(11) Insert at mid");
printf("\n(12)Insert odd or even");
printf("\n(13) Exit");
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

        case 11:
        int num11;
        printf("Enter the number to insert:");
        scanf("%d",&num11);
        if(l1.insertmid(num11))
        {
         printf("Number is inserted successfully");
        }
        else
        {
            printf("Operation failed");
        }
        break;

        case 12:
        int num12,pos12;
        printf("Enter the number to insert:");
        scanf("%d",&num12);
        printf("Enter the position to insert:");
        scanf("%d",&pos12);
        if(l1.oddeven(num12,pos12))
        {
            printf("Number is inserted");
        }
        else
        {
            printf("Operation failed");
        }
        break;
        
        case 13:
        {
            return 0;
        }
    }  
    }
    return 0;
    }
int linked:: insertbeg(int num)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        newnode->next=NULL;
        newnode->data=num;
        head=newnode;
        return 1;
    }
    else{
        newnode->next=head;
        newnode->data=num;
        head=newnode;
        return 1;
    }
}

int linked::insertend(int num)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    struct node *temp=head;
    if(head==NULL)
    {
        head=newnode;
    }
    while(temp->next!=NULL)
    {
     temp=temp->next;
    }
    temp->next=newnode;
    return 1;
}

int linked::insertpos(int num,int pos)
{
    if(head==NULL)
    {
        return 0;
    }
    else if(pos==1)
    {
        insertbeg(num);
        return 1;
    }
    else
    {
    struct node *temp1=head;
    struct node *temp2=(struct node*)malloc(sizeof(struct node));
    temp2->data=num;
    temp2->next=NULL;
    pos--;

    while(pos!=1) 
    {
        temp1=temp1->next;
        pos--;
    }
    temp2->next=temp1->next;
    temp1->next=temp2;
    return 1;
    }
}

int linked ::delbeg()
{
  if(head==NULL)
  {
    return 0;
  }
 else
  {
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    head=head->next;
    free(temp);
    return 1;
  }
}

int linked::delend()
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    struct node*temp2=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        return 0;
    }
    else if(head->next==NULL)
    {
        free(head);
        head=NULL;
    }
    
    else
    {
      temp=head;
      temp2=head;
      while(temp->next!=NULL)
      {
        temp2=temp;
        temp=temp->next;
      }
      temp2->next=NULL;
      free(temp);
      temp=NULL;
      return 1;
    }
}

int linked::delpos(int pos)
{
 if(head==NULL)
 {
    return 0;
 }
 else if(pos==1)
 {
    delbeg();
    return 1;
 }
 else
 {
    struct node *current=head;
    struct node *previous=head;
    
    current=head;
    while(pos!=1)
    {
        previous=current;
        current=current->next;
        pos--;
    }
    previous->next=current->next;
    free(current);
    current=NULL;
    return 1;

 }
}

void linked:: display()
{
    struct node *temp=head;
        while(temp!=NULL)
        {
            printf("\t%d",temp->data);
            temp=temp->next;
        }
}

void linked:: displayrev()
{
    int count =0;
    struct node *temp=head;
    while(temp!=NULL)
    {
     count++;
     temp=temp->next;   
    }
    struct node*current=head;
    while(count!=1)
    {
    
        
    }
}
void linked :: reverse()
{
 
}
int linked::search(int num)
{
 int found=0;
 struct node *temp=(struct node*)malloc(sizeof(struct node));
 if(head==NULL)
 {
    return 0;
 }
 else
 {
    
    temp=head;
    while(temp->next!=NULL)
    {
        
        if(temp->data==num || temp->next->data==num)
        {
            found=1;
        }
        temp=temp->next;
    }
 }
 if(found==1)
 {
    return 1;
 }
 else
 {
    return 0;
 }
}
int linked::insertmid(int num)
{
    int count=0;
    struct node *temp=head;
    if(head==NULL)
    {
        insertbeg(num);
        return 1;
    }
    else 
    {
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    int mid=count/2;
    insertpos(num,mid+1);
    return 1;
    }
    }

int linked::oddeven(int num,int pos)
{
    int n;
    if(pos%2==0)
    {
     n= 2*pos;
    }
    else
    {
    n=2*pos +1;
    }
    if(head==NULL)
    {
        insertbeg(num);
        return 1;
    }
    else
    {
        insertpos(num,n);
        return 1;
    }

}




