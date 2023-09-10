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
second1->data=20;
third1->data=40;
fourth1->data=50;
fifth1->data=40;
head1->next=first1;
first1->next=second1;
second1->next=third1;
third1->next=fourth1;
fourth1->next=fifth1;
fifth1->next=NULL;
display(&head1);




 struct node *current = head1;
    while (current != NULL)
    {
        struct node *runner = current;
        while (runner->next != NULL)
        {
            if (current->data == runner->next->data)
            {
                struct node *temp = runner->next;
                runner->next = runner->next->next;
                free(temp);
            }
            else
            {
                runner = runner->next;
            }
        }
        current = current->next;
    }

    printf("\nList after removing duplicates:\n");
    

display(&head1);
 



   


}
