#include<iostream>
using namespace std;
bool checkSorted(int a[],int n)
{
  if(n==1 || n==0)
        return true;
   if(a[0]>a[1])
   {
    return false;
   }   
   return checkSorted(a+1,n-1);
}
void print(int a[],int size)
{
    for(int i = 0;i<size;i++)
    {
        cout<<a[i]<<" "; 
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    printf("Enter %d elements in array : ",n);
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    print(a,n);
    if(checkSorted(a,n))
        cout<<"\nSorted array : ";
    else
        cout<<"\nNot Sorted array :";
    return 0;
}