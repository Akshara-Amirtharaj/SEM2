//program to implement binary tree ADT
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

class bintree
{
    struct node
    {
        struct node *left;
        char data;
        struct node *right;
    };
    struct node *root;

    //method to display elements in inorder
    void inorder(struct node *root)
    {
        if (root==NULL)
        {
            return ;
        }
        else
        {
            inorder(root->left);
            printf("%c\t",root->data);
            inorder(root->right);
        }
    }

    // method to display elements in preorder
    void preorder(struct node *root)
    {
        if(root==NULL)
        {
            return;
        }
        else
        {
            printf("%c\t",root->data);
            preorder(root->left);
            preorder(root->right);
        }
    }

    //method to display elements in postorder
    void postorder(struct node *root)
    {
        if(root==NULL)
        {
            return;
        }
        else
        {
            postorder(root->left);
            postorder(root->right);
            printf("%c\t",root->data);
        }
    }

   
   //method to search an element
    bool search(struct node *root,char num)
    {
    if(root==NULL)
    {
        return false;
    }
    else if(root->data==num)
    {
        return true;
    }
    
    else
    {
      return search(root->left,num)||search(root->right,num);    
    }
    
    }
    //method to delete a node
     struct node* deleteRecursively(struct node* root, char num, struct node* parent) {
    if (root == NULL) {
        return NULL;
    }

    if (root->data == num)
     {
        // No children
        if (root->left == NULL && root->right == NULL) 
        {
            free(root);
            return NULL;
        }
        // One child
        else if (root->left == NULL || root->right == NULL)
         {
            struct node* temp = root->left ? root->left : root->right;
            free(root);
            return temp; // Return the child to be connected by the parent
        }
        // Two children
        else 
        {
            
            struct node* rightChild = root->right;
            struct node* leftchild = root->left;
            free(root);
           
            struct node* leftmost = rightChild;
            while (leftmost->left != NULL) {
                leftmost = leftmost->left;
            }
           
            leftmost->left = leftchild;
            return rightChild;
        }
    } else
     {
        root->left = deleteRecursively(root->left, num, root);
        root->right = deleteRecursively(root->right, num, root);
    }

    return root;
}


    public:
    
        void callin()
        {
            inorder(root);
        }
        void callpre()
        {
            preorder(root);
        }
        void callpost()
        {
            postorder(root);
        }
        bool callsearch(char num)
        {
           return search(root,num);
        }
        struct node * calldel(char num)
        {
           root = deleteRecursively(root, num, NULL);

        }
        bintree()
        {
            root=NULL;
    
        }
        int insert(char num);
              
};
int main()
{
    bintree b1;
    int choice;
    while(1)
    {
        printf("\n(1) Insert");
        printf("\n(2) Inorder");
        printf("\n(3) Preorder");
        printf("\n(4) Postorder");
        printf("\n(5) Search");
        printf("\n(6) Delete");
        printf("\n(7) EXit");
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        getchar();
        switch (choice)
        {
            case 1:
        
            char num1;
            printf("Enter the number to insert:");
            scanf("%c",&num1);
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
            b1.callpre();
            break;

            case 4:
            b1.callpost();
            break;
           
            case 5:
            char num5;
            printf("Enter the number to search:");
            scanf("%c",&num5);
            if(b1.callsearch(num5))
            {
                printf("Number is found!");
            }
            else
            {
                printf("Number is not found");
            }
            break;

            case 6:
            int num6;
            printf("Enter the element to delete");
            scanf("%c",&num6);
            if(b1.calldel(num6))
            {
                printf("Node is deleted succesfully");
            }
            else
            {
                printf("The tree is empty");
            }
            break;
            

            case 7:
            return 0;

        }
    }
}

//method to insert a node
int bintree::insert(char num)
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
    else if(temp->left==NULL||temp->right==NULL)
    {
        int choice;
        printf("Left(1) or Right(2)");
        scanf("%d",&choice);
        if(choice==1)
        {
          temp->left=newnode;
          return 1;
        }
        else if (choice==2)
         {
          temp->right=newnode;
          return 1;
        }   
    }
    else 
    {
        int choice;
        while(1)
        {
        printf("Left(1) or Right(2)");
        scanf("%d",&choice);
        if(choice==1)
        {
            
            if(temp->left==NULL)
            {
                temp->left=newnode;
                return 1;
            }
            temp=temp->left;
        }
        else if (choice==2)
        {
            
            if(temp->right==NULL)
            {
                temp->right=newnode;
                return 1;
            }
            temp=temp->right;
        }
        }
       return 0; 
    }
}