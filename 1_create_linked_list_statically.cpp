#include<iostream>
using namespace std;
#include"Node.cpp"
void print(Node *head)
{
    Node *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data;
        if(temp->next!=NULL)
        cout<<"->";
        temp = temp->next;
    }
    
}
int main()
{
    // creating node statically;
   
    Node n1(12);
    Node n2(23);
    Node n3(122);
    Node n4(211);
    Node n5(10);
    Node n6(22);
    Node *head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;

    print(head);

    return 0;
}