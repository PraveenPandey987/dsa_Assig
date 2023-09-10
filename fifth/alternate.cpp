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
int main()
{
    struct node *head1 = (struct node *)malloc(sizeof(struct node));
    struct node *first1 = (struct node *)malloc(sizeof(struct node));
    struct node *second1 = (struct node *)malloc(sizeof(struct node));
    struct node *third1= (struct node *)malloc(sizeof(struct node));
    struct node *fourth1= (struct node *)malloc(sizeof(struct node));
    struct node *fifth1= (struct node *)malloc(sizeof(struct node));

head1->data=10;
first1->data=20;
second1->data=30;
third1->data=40;
fourth1->data=50;
fifth1->data=60;
head1->next=first1;
first1->next=second1;
second1->next=third1;
third1->next=fourth1;
fourth1->next=fifth1;
fifth1->next=NULL;
display(&head1);
struct node *p=head1;
struct node *temp;
while(p->next->next!=NULL){
temp=p->next;
p->next=p->next->next;
    p=p->next;
    free(temp);
}


 
    printf("\nList after removing alternates:\n");
    

display(&head1);
 



   


}