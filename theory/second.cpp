#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *np;
};

void insert(struct node **head,int data){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->np=NULL;
    
    struct node *ptr=*head;
  struct node *nptr= *head;
    
    while(ptr->np!=NULL){
         ptr=nptr;

       
        nptr=(struct node *)((int)ptr->np ^ (int)ptr);
    }

   (ptr)->np=(struct node*)((int)(ptr)^(int)newNode);

    
}

void display(struct node *head){
   
  struct node *ptr=head;
  struct node *nptr= head;
    
    while(ptr->np!=NULL){
         ptr=nptr;
       printf("%d ",ptr->data);
       
        nptr=(struct node *)((int)ptr->np ^ (int)ptr);
    }

}

void search(struct node *head,int data){

    struct node *ptr=head;
  struct node *nptr= head;
    
    while(ptr->np!=NULL){
         ptr=nptr;
       if(ptr->data==data){
        printf("Search completed ");
        return ;
       }
       
        nptr=(struct node *)((int)ptr->np ^ (int)ptr);
    }
  
    printf("item was not found");

}
int main(){
    printf("started\n");
struct node *head=(struct node *)malloc(sizeof(struct node));
head->data=34;
head->np=NULL;

insert(&head,50);
insert(&head,90);
insert(&head,89);
display(head);
 
int choice;
scanf("%d"&choice);
switch(choice){
int data;
case '1':
printf("enter data item to be searched \n");
scanf("%d",data);
search(head,data);

break;
case '2':

break;
case '3':
break;
default:
printf("invalid choice");

}


}