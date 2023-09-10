#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node* concatinate(struct node *head1,struct node *head2)
{
    struct node *p=head1;
    struct node *q=head2;
while(p->next!=NULL)
{

    p=p->next;
}
p->next=head2;
return head1;

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
 



   struct node *head2 = (struct node *)malloc(sizeof(struct node));
    struct node *first2 = (struct node *)malloc(sizeof(struct node));
    struct node *second2 = (struct node *)malloc(sizeof(struct node));
    struct node *third2= (struct node *)malloc(sizeof(struct node));
    struct node *fourth2= (struct node *)malloc(sizeof(struct node));
    struct node *fifth2= (struct node *)malloc(sizeof(struct node));

head2->data=87;
first2->data=2;
second2->data=88;
third2->data=44;
fourth2->data=59;
fifth2->data=66;
head2->next=first2;
first2->next=second2;
second2->next=third2;
third2->next=fourth2;
fourth2->next=fifth2;
fifth2->next=NULL;
printf("\n");
display(&head2);
printf("after concatination \n");
struct node* p=concatinate(head1,head2);
display(&p);

}