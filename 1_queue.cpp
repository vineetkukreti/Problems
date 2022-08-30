#include<iostream>
using namespace std;
class Queue
{
    int *data;
    int front ;
    int rear ;
    int size;
    public:
    Queue(int size)
    {
        front = 0;
        rear  = 0;
        data = new int[size];
        this->size = size;
    }
    void enqueue(int value)
    {
        if(rear==size)
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        else if(front==rear)
        {
            data[rear] = value;
            rear++;
        }
        else
        {
            data[rear] = value;
            rear++;
        }
    }
    void print()
    {
       
        for(int i = front;i<rear;i++)
        {
            cout<<data[i]<<" ";
        }
         cout<<endl;
    }
    void dequeue()
    {
        if(front==rear)
        {
            cout<<"Queue is empty";
            return;
        }
        int a = data[front];
        cout<<"Dequeued Element : "<<a<<endl;
        front++;
    }
};
int main()
{
    Queue q(5);
    q.enqueue(12);
    q.enqueue(13);
    q.enqueue(19);
    q.enqueue(93);
    q.enqueue(3);
    
    q.print();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

     q.print();
    return 0;
}