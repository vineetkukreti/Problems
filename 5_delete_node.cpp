
/*

Sample Input 1 :
1 
3 4 5 2 6 1 9 -1
3
Sample Output 1 :
3 4 5 6 1 9
Sample Input 2 :
2
3 4 5 2 6 1 9 -1
0
10 20 30 40 50 60 -1
7
Sample Output 2 :
4 5 2 6 1 9
10 20 30 40 50 60

Your Code

Main Code

Code Pair


*/


Node *deleteNode(Node *head, int pos)
{
    Node *p = head;
    Node *q = head->next;
    int count=0;
    if(pos==0)
    {
        head = q;
        delete p;
        return head;
    }
    else
    {
        while(count<pos-1)
    {
        p = p->next;
        q = q->next;
        count++;
    }
  
         p->next = q->next;
         delete q;
        return head;
    } 
    
}
