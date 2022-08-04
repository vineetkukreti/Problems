#include<iostream>
using namespace std;

int lengthOfString(char input[])
{
    int len = 0;
    for(int i = 0;input[i]!='\0';i++)
        len++;
    return len;
        
}
void shiftstring(char a[])
{
    for(int i = 1 ;a[i]!='\0';i++)
    {
        a[i-1] = a[i];
    }
    
}
int main()
{
    char a[] = "xxxs";
    int n = lengthOfString(a);
    for(int i = n-1;a[i]!='\0';i++)
    {
        if(a[i]=='x')
        {
        shiftstring(a);
        
           
             
        }
        
    }
    
    cout<<a;
    return 0;
}