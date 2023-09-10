#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int length(struct node *head,int count)
{
   
    if((head)!=NULL){
    
   
     return length(head->next,(1+count));}
     else
     return count;
}
void display(struct node **head){
    struct node *p;
    p=*head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third= (struct node *)malloc(sizeof(struct node));
    struct node *fourth= (struct node *)malloc(sizeof(struct node));
    struct node *fifth= (struct node *)malloc(sizeof(struct node));

head->data=10;
first->data=20;
second->data=30;
third->data=40;
fourth->data=50;
fifth->data=60;
head->next=first;
first->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=NULL;
display(&head);
 int *count=(int*)malloc(sizeof(int));
    (*count)=0;
   printf("size of linked list is %d ", length(head,0));

}
