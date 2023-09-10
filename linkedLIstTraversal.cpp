#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void linkedList(struct node **head, char c)
{
    struct node *p;
    struct node *temp;
    int data, x, flag = 0;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    struct node *q;

    switch (c)
    {

    case 'a':

        printf("enter the data\n");
        scanf("%d", &data);

        (*head)->data = data;
        (*head)->next = NULL;
        break;
    case 'b':

        printf("enter the data\n");
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = *head;
        *head = newNode;

        break;

    case 'c':

        printf("enter the data\n");
        scanf("%d", &data);

        p = *head;
        while (p->next != NULL)
        {
            p = p->next;
        }

        newNode->data = data;
        newNode->next = NULL;
        p->next = newNode;

        break;

    case 'd':

        printf("enter the information x\n");

        scanf("%d", &x);

        printf("enter the data\n");
        scanf("%d", &data);

        p = *head;
        flag = 0;
        // printf("%d %d x ,data",x,data);

        newNode->data = data;
        while (p->next != NULL)
        {
            if (p->next->data == x)
            {

                newNode->next = p->next;
                p->next = newNode;
                flag = 1;
                break;
            }
            p = p->next;
        }
        if (flag == 0)
        {

            newNode->data = data;
            newNode->next = *head;
            *head = newNode;
        }
        break;

    case 'e':
        printf("enter the information x\n");

        scanf("%d", &x);

        printf("enter the data\n");
        scanf("%d", &data);

        p = *head;
        while (p->next != NULL)
        {
            if (p->data == x)
            {

                newNode->data = data;
                newNode->next = p->next;
                p->next = newNode;
                break;
            }
            p = p->next;
        }
        break;

    case 'f':

        temp = *head;
        *head = (*head)->next;
        free(temp);

        break;

    case 'g':
        p = *head;
        while (p->next->next != NULL)
        {
            p = p->next;
        }

        p->next = NULL;
        break;

    case 'h':

        printf("enter x\n");
        scanf("%d", &x);
        p = *head;
        q = p->next;
        // printf("x data %d",x);
        if (p->data == x)
        {
            // printf("inside if");
            temp = *head;
            *head = (*head)->next;
            free(temp);
        }
        else
        {
            while (q != NULL)
            {
                // printf("p data %d\n",p->data);
                // printf("x %d",&x);
                // printf("q data %d\n",q->data);
                if (q->data == x)
                {
                    temp = p->next;
                    /*printf("q data %d",p->data);*/
                    p->next = q->next;
                    free(temp);
                    break;
                }

                p = p->next;
                q = q->next;
            }
        }

        break;

    case 'i':
        p = *head;

        while (p != NULL)
        {

            printf("%d  ", p->data);
            p = p->next;
        }
        break;

    default:
        printf("invalid input");
    }
}
int main()
{
    struct node *head;
    char c;
    head = (struct node *)malloc(sizeof(struct node));

    linkedList(&head, 'a');
    linkedList(&head, 'b');
    linkedList(&head, 'b');
    linkedList(&head, 'c');
    linkedList(&head, 'c');
    linkedList(&head, 'd');
    linkedList(&head, 'd');
    linkedList(&head, 'd');
    linkedList(&head, 'b');
    linkedList(&head, 'b');
    linkedList(&head, 'c');
    linkedList(&head, 'c');

    linkedList(&head, 'e');
    linkedList(&head, 'e');
    linkedList(&head, 'g');
    linkedList(&head, 'g');
    linkedList(&head, 'h');
    linkedList(&head, 'h');

    linkedList(&head, 'c');
    linkedList(&head, 'c');
    linkedList(&head, 'i');
}
