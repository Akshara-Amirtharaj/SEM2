#include<stdio.h>
#include<stdlib.h>
#include"queuelink.h"
class bst
{
    struct node 
    {
        int data;
        struct node *left;
        struct node *right;
    };
    struct node *root;


void inorders(struct node *root,queue *s1)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        inorders(root->left,s1);
        s1->enqueue(root->data);
        inorders(root->right,s1);
    }
}

void inorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
int search(struct node *root,int num,queue *s1)
{
    inorders(root,s1);
    int prev,next,cur;
    if(s1==NULL)
    {
        return 0;
    }
    else
    {
      {    
        prev=s1->dequeue();
        cur=s1->dequeue();
        if(prev==num)
        {
    
          printf("\nNo smaller element");
          printf("\nPresent element:%d",prev);
          printf("\n Next element:%d",cur);
          s1->deleteall();
          return 1;
        }
        else if(cur==num)
        {
          if(s1->peek()==-1)
          {
          printf("\nPrevious element:%d",prev);
          printf("\nPresent element:%d",cur);
          printf("\nNo greater element");
          s1->deleteall();
          return 1;
          }
          else
          {
          next=s1->dequeue();
          printf("\nPrevious element:%d",prev);
          printf("\nPresent element:%d",cur);
          printf("\n Next element:%d",next);
          s1->deleteall();
          return 1;
          }
          }
          next=s1->dequeue();
        }
        while(s1->peek()!=-1)
        {

        prev=cur;
        cur=next;
        if(prev==num)
        {
    
          printf("\nNo smaller element");
          printf("\nPresent element:%d",prev);
          printf("\n Next element:%d",cur);
          s1->deleteall();
          return 1;
        }
        else if(cur==num)
        {
          if(s1->peek()==-1)
          {
          printf("\nPrevious element:%d",prev);
          printf("\nPresent element:%d",cur);
          printf("\nNo greater element");
          s1->deleteall();
          return 1;
          }
          else 
          {
          next=s1->dequeue();
          printf("\nPrevious element:%d",prev);
          printf("\nPresent element:%d",cur);
          printf("\n Next element:%d",next);
          s1->deleteall();
          return 1;
          }
        }
        next=s1->dequeue();
        }
        return 0;
    }
    return 0;
}
    public:
   
    bst()
    {
        root=NULL;
    }
  

    void callin()
    {
        inorder(root);
    }
    void callsearch(int num,queue*s1)
    {
        if(search(root,num,s1))
        {
            printf("Element is found");
        }
        else
        {
            printf("Element is not found");
        }
    }
    int insert(int num);
     
};

int main()
{
    queue s1;
    bst b1;
    int choice;
    while(1)
    {
        printf("\n(1) Insert");
        printf("\n(2) Inorder");
        printf("\n(3) Search");
        printf("\n(4) EXit");
        printf("\n Enter your choice:");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
       
            int num1;
            printf("Enter the number to insert:");
            scanf("%d",&num1);
            if(b1.insert(num1))
            {
                printf("Number is inserted successfully");
            }
            else
            {
                printf("Operation failed");
            }
            break;

            case 2:
            b1.callin();
            break;
   
           
            case 3:
            int num5;
            printf("Enter the number to search:");
            scanf("%d",&num5);
            b1.callsearch(num5,&s1);
            break;


            case 4 :
            return 0;

        }
    }
}
int bst::insert(int num)
{
    struct node *temp=root;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL)
    {
        root=newnode;
        return 1;
    }
    
    else
    {
        while(1)
        {
        if(temp->data>num)
        {
            if(temp->left==NULL)
            {
                temp->left=newnode;
                return 1;
            }
            temp=temp->left;
    
        }
        else if(temp->data<=num)
        {
            if(temp->right==NULL)
            {
                temp->right=newnode;
                return 1;
            }
            temp=temp->right;
        }
    }
}
}

