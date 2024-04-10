// To implement Hash ADT using separate chaining

#include<stdio.h>
#include<stdlib.h>
#define size 25
class hash
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *hashtable[size];
    struct node *head;
    public:
    hash()
    {
        for (int i=0;i<size;i++)
        {
            hashtable[i]=NULL;
        }
    }
    int insert(int num);
    void display();
    void ldis(struct node *head);
    int del(int num);
    int search(int num);
};
int main()
{
    hash h1;
    int choice;
    while(1)
    {
        printf("\n(1) Insert");
        printf("\n(2) Delete");
        printf("\n(3) Search");
        printf("\n(4) Display");
        printf("\n(5) Exit");
        printf("\n Enter your choice");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
            int num1;
            printf("Enter the number to insert");
            scanf("%d",&num1);
            if(h1.insert(num1))
            {
               printf("Element is inserted successfully");
            }
            else
            {
                printf("fail");
            }
            break;

            case 2:
            int num2;
            printf("Enter the number to delete");
            scanf("%d",&num2);
            if(h1.del(num2))
            {
                printf("Number is deleted successfully");
            }
            else
            {
                printf("Element is not present");
            }
            break;

            case 3:
            int num3;
            printf("Enter the element to search");
            scanf("%d",&num3);
            if(h1.search(num3))
            {
                printf("Element is found");
            }
            else
            {
                printf("Element is not found");
            }
            break;

            case 4:
            h1.display();
            break;
            
            case 5:
            return 0;
        }

    }
}

//method to insert the element
int hash::insert(int num)
{
    struct node *newnode =(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    int index;
    index=num%size;

    if(hashtable[index]==NULL)
    {
        hashtable[index]=newnode;
        return 1;
    }
    else
    {
        struct node *temp=hashtable[index];
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        return 1;
    }
}   

//method to display the elements
void hash:: display()
{
   for(int i=0;i<size;i++)
   {
    if(hashtable[i]!=NULL)
    {
        ldis(hashtable[i]);
    }
   }
}


void hash::ldis(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("\t%d",temp->data);
        temp=temp->next;
    }
}

//method to delete a element
int hash :: del(int num)
{
    int index=num%size;

    if(hashtable[index]==NULL)
    {
        return 0;
    }

    else
    {
    struct node *temp1=hashtable[index];
    struct node *temp2=(struct node *)malloc(sizeof(struct node));
    
    if(temp1->data==num)
    {
        hashtable[index]=temp1->next;
        return 1;
    }
    else
    {
        while(temp1!=NULL && temp1->data!=num)
        {
        temp2=temp1;
        temp1=temp1->next;
        }
        if(temp1==NULL)
        {
            return 0;
        }
        if(temp1->data==num)
        {
        temp2->next=temp1->next;
        return 1;
        }
    }
    }

    return 0;

}

//method to search an element
int hash:: search(int num)
{
    for(int i=0;i<size;i++)
    {
        if(hashtable[i]!=NULL)
        {
        struct node *temp=hashtable[i];
        if(temp->data==num)
        {
            return 1;
        }
        else 
        {
          while(temp!=NULL)
          {
           if(temp->data==num)
           {
            return 1;
           }
           temp=temp->next;
          }
        }
        }
    }
    return 0;
}