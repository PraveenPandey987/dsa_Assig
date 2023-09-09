#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head;
    char c;
    scanf("%c", &c);
    switch (c)
    {
    case 'a':
        printf("enter the data\n");
        int data;
        scanf("%d", &data);
        head = (struct node *)malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        break;

    case 'b':
        printf("enter the data\n");
        int data;
        scanf("%d", &data);
        struct node *p;
        p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        struct node *new;
        new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;
        p->next = new;

        break;

    case 'c':
        printf("enter the information x\n");
        int x;
        scanf("%d", x);
        printf("enter the data\n");
        int data;
        scanf("%d", &data);
        struct node *p;
        p = head;
        while (p!= NULL)
        {
            if (p->data == x)
            {
                struct node *new;
            }
                p = p->next;
        }
        break;

    case 'd':
        break;

    case 'e':
        break;

    case 'f':
        break;

    case 'g':
        break;

    case 'h':
        break;

    case 'i':
        break;

    case
   }
}