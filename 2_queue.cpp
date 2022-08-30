#include<iostream>
using namespace std;
class Queue
{   public:
    int rear ;
    int front ;
    int *data;
    int size;
    Queue(int size)
    {
        this->size = size;
        data = new int[size];
        front = 0;
        rear = 0;
    }
    void enqueue(int value)
    {
          cout<<front<<" "<<rear<<endl;
        if(rear==size)
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        else
        {
            data[rear] = value;
            rear++;
        }
    }
    void print()
    {
        for(int i = front ;i<rear;i++)
        {
            cout<<data[i]<<" ";
        }
    }
    void dequeue()
    {
        int val;
        cout<<front<<" "<<rear<<endl;
        if(front==rear)
        {
            cout<<"Queue is empty"<<endl;
            front = 0;
            rear = 0;
            return;
        }
        else
        {
            val = data[front];
            front++;
       }
        cout<<"Dequeue element : "<<val<<endl;
    }
};
int main()
{
    Queue q(5);
    q.enqueue(12);
    q.enqueue(2);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(9);
    
 
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
      q.dequeue();

    q.print();
    return 0;
}