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
    int length;
    public:
    linked()
    {
        head=NULL;
        length=0;
    }
    int insert(int num);
    void display();
    
};





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
        struct node* current = head;
        while (current->next != NULL && current->next->data < num) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    length++; // Increment the length of the list
    return 1;
}



void linked::display()
{
    
    struct node *temp=head;
    while(temp!=NULL)
    {
        
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}



