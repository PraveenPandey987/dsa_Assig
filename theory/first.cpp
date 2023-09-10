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
int length(struct node *head, int count)
{

    if ((head) != NULL)
    {

        return length(head->next, (1 + count));
    }
    else
        return count;
}
void create(struct node **head, int data)
{

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 23;
    head->next = NULL;
    create(&head, 22);
    create(&head, 24);
    create(&head, 25);
    create(&head, 26);
    create(&head, 27);

    display(&head);
    int count=0;
    int size=length(head,count);


    struct node *save;
    struct node *ptr ;
    struct node *fp = head;
    struct node *np = NULL;
    for(int i=0;i<size/2;i++){
        save=head;
        ptr=head;
    while (ptr != np)
    {
       save= ptr;
        ptr = ptr->next;
    }
    np=save;
    int temp=np->data;
    np->data=fp->data;
    fp->data=temp;
    fp=fp->next;
    
    }

    printf("\nList after reversing:\n");

    display(&head);
}