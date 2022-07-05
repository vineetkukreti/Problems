#include<stdio.h>
#define max 10
void   enqueue(int queue[],int *rear,int *front,int value)
{
    if(*rear==max-1)
    {
        printf("\nQueue is full\n");
        return;
    }
   else
    {
         if(*rear==-1)
            {
                *front = 0;
                *rear = 0;
            }
            queue[*rear] = value;
            (*rear)++;
    }
}
void  dequeue(int queue[],int *front)
{
    if(*front==-1)
    {
        printf("\nQueue is empty\n");
        return;
    }
    printf("Deleted element : %d",queue[*front]);
    (*front)++;
}
void display(int front,int rear,int queue[])
{
    if(rear==-1)
    {
        printf("\nQueue is empty");
        return;
    }
   for(int i = front ;i<rear;i++)
   {
       printf("%d ",queue[i]);
   }
}
int main()
{
    int queue[max],value,choice;
    int front = -1,rear = -1;
    printf("\t\t:: MAIN MENU ::");
    printf("\n\t\t1.Enqueue\n\t\t3.Dequeue\n\t\t3.Display\n\t\t4.Exit");
    while(1)
    {
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element : ");
            scanf("%d",&value);
            enqueue(queue,&rear,&front,value);
            break;
         case 2:
           dequeue(queue,&front);
            break;
       case 3:
            display(front,rear,queue);
            break;
        }
    }
    return 0;
}