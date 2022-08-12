#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int info)
    {
        data = info;
        next = NULL;
    }
};
Node *create_node(Node *head)
{
    int info;
    cout << "Enter the data : ";
    cin >> info;
    while (info != -1)
    {
        Node *newNode = new Node(info);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Enter the data : ";
        cin >> info;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* reverse(Node* head) {
        if(head == NULL)
            return head;
        else
        {
            Node *cur = head;
            Node *prev = NULL;
            Node *nex= NULL;
            while(cur!=NULL)
            {
              nex = cur->next;
                cur->next = prev;
                prev = cur;
                cur = nex;
            }
            return prev;
        }
    }

Node * middle(Node *head)
{
    if(head==NULL)
    {
        return head;
    }
    else
    {
        Node *slow = head;
        Node *fast = head;

        while(fast!=NULL&&fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
}
bool isPalindrome(Node *head)
{
    print(head);
   Node *mid = middle(head);
   cout<<mid->data<<" -- "<<endl;
   Node *last = reverse(mid);
   print(last);
   while(last!=NULL)
   {
    if(head->data!=last->data)
        return false;
     head = head->next;
     last = last->next;
   }
   return true;
}
int main()
{
    Node *head = NULL;
    head = create_node(head);
    cout<<"True /false :"<<isPalindrome(head)<<endl;;
   // print(head);

    return 0;
}