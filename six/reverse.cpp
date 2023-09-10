#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct node
{
    int data;
    struct node *next;
};

void display(struct node **head)
{
    struct node *p;
    p = *head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int length(struct node *head,int count)
{
   
    if((head)!=NULL){
    
   
     return length(head->next,(1+count));}
     else
     return count;
}
void create(struct node **head,int data){
    
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = *head;
        *head = newNode;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third= (struct node *)malloc(sizeof(struct node));
    struct node *fourth= (struct node *)malloc(sizeof(struct node));
    struct node *fifth= (struct node *)malloc(sizeof(struct node));

head->data=1;
first->data=3;
second->data=2;
third->data=2;
fourth->data=33;
fifth->data=18;
head->next=first;
first->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=NULL;
display(&head);
struct node *p=head->next;
struct node *head1=(struct node *)malloc(sizeof(struct node));
head1->next=NULL;
head1->data=head->data;

while(p!=NULL){
create(&head1,p->data);
p=p->next;
}



 
    printf("\nList after reversing:\n");
    

display(&head1);
 



   


}