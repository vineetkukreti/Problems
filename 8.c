/*Q8.Write a C Program implement QUEUE using Link List  in menu driven form*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};

void Enqueue(struct node **rear,int value,struct node **front)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->info = value;
    newnode->next = NULL;
    if(*front==NULL)
    {
        *front = newnode;
        *rear = newnode;
    }
    else
    {
        struct node *p = *front;
        while(p->next!=NULL)
        {
            p = p->next;
        }
        p->next = newnode;
        *rear = newnode;

    }
}
void  display(struct node *front)
{
    struct node *p = front;
    if(front==NULL)
    {
        printf("\nQueue is empty\n");
        return;
    }
    while (p!=NULL)
    {
        printf("%d  ",p->info);
        p = p->next;
    }
    
}
void  Dequeue(struct node **front)
{
    struct node *p = *front;
    if(*front==NULL)
    {
        printf("\nQueue is empty\n");
        return;
    }
    else
    {
        struct node *p = *front;
        *front = (*front)->next;
        free(p);
    }
   
    
}
int main()
{
    struct node *rear = NULL;
    struct node *front = NULL;
    int choice,value;
    printf("\t\t:: MAIN MENU ::");
    printf("\n\t\t1.Enqueue \n\t\t2.Dequeue\n\t\t3.Display\n\t\t4.Exit");
    while (1)
    {
       printf("\nEnter your choice : ");
       scanf("%d",&choice);
       switch (choice)
       {
       case 1:
            printf("Enter the value = ");
            scanf("%d",&value);
            Enqueue(&rear,value,&front);
           break;
        case 2:
            Dequeue(&front);
            break;
         case 3:
           display(front);
           break;
       
       default:
           break;
       }
    }
    
    return 0;
}