/* Creating nodes*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *link;
};
int main()
{
  struct node *head= (struct node*)malloc(sizeof(struct node));
  head->data=45;
  head->link=NULL;

  struct node *current=(struct node*)malloc(sizeof(struct node));
  current->data=96;
  current->link=NULL;
  head->link=current;

  return 0;
}