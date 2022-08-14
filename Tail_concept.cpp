#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    
    Node(int data)
    {
        this->data = data;
        next = NULL;
        //tail = NULL;
    }
};
Node * push(Node *head,Node *tail)
{
    int n;
    cout<<"Enter the element : ";
    cin>>n;
    while(n!=-1)
    {
        Node *newNode = new Node(n);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            Node *p = head;
            while (p->next!=NULL)
            {
                p = p->next;
            }
            p->next = newNode;
            tail = newNode;
        }
          cout<<"Enter the element : ";
    cin>>n;
    }
    return head;   
}
Node* pop(Node* head)
{
    Node *p = head->next;
    Node *q = head;
    while(p->next!=NULL)
    {
        q = p;
        p = p->next;
    }
    q->next = NULL;
    delete p;
    return head;
}


void print(Node *head)
{
 while(head!=NULL){
    cout<<head->data<<" ";
    head = head->next;
 }
cout<<endl;
}
void peak(Node *tail)
{
   
    cout<<tail->data<<" ";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    head = push(head,tail);
   
    print(head);
    peak(tail);
}
